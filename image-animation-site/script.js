const folderInput = document.getElementById("folderInput");
const animationSelect = document.getElementById("animationSelect");
const speedRange = document.getElementById("speedRange");
const speedValue = document.getElementById("speedValue");
const playPauseBtn = document.getElementById("playPauseBtn");
const prevBtn = document.getElementById("prevBtn");
const nextBtn = document.getElementById("nextBtn");
const folderName = document.getElementById("folderName");
const imageCount = document.getElementById("imageCount");
const stage = document.getElementById("stage");
const currentImage = document.getElementById("currentImage");

let images = [];
let currentIndex = 0;
let isPlaying = false;
let timerId = null;
let currentUrl = "";

const imageTypes = new Set([
  "image/jpeg",
  "image/png",
  "image/webp",
  "image/gif",
  "image/bmp",
  "image/svg+xml"
]);

function updateSpeedLabel() {
  speedValue.textContent = `${(Number(speedRange.value) / 1000).toFixed(1)}s`;
}

function clearPlayback() {
  if (timerId) {
    window.clearInterval(timerId);
    timerId = null;
  }
}

function revokeCurrentUrl() {
  if (currentUrl) {
    URL.revokeObjectURL(currentUrl);
    currentUrl = "";
  }
}

function renderImage(index) {
  if (!images.length) {
    stage.classList.remove("loaded");
    currentImage.removeAttribute("src");
    currentImage.alt = "No image selected";
    return;
  }

  revokeCurrentUrl();
  currentIndex = (index + images.length) % images.length;
  currentUrl = URL.createObjectURL(images[currentIndex]);
  currentImage.classList.remove("animate");
  void currentImage.offsetWidth;
  currentImage.src = currentUrl;
  currentImage.alt = images[currentIndex].name;
  currentImage.classList.add("animate");
  stage.classList.add("loaded");
}

function updateButtons() {
  const hasImages = images.length > 0;
  playPauseBtn.disabled = !hasImages;
  prevBtn.disabled = !hasImages;
  nextBtn.disabled = !hasImages;
  playPauseBtn.textContent = isPlaying ? "Pause" : "Play";
}

function startPlayback() {
  if (images.length < 2) {
    isPlaying = false;
    updateButtons();
    return;
  }

  isPlaying = true;
  updateButtons();
  clearPlayback();
  timerId = window.setInterval(() => {
    renderImage(currentIndex + 1);
  }, Number(speedRange.value));
}

function stopPlayback() {
  isPlaying = false;
  clearPlayback();
  updateButtons();
}

function resetViewer() {
  stopPlayback();
  revokeCurrentUrl();
  images = [];
  currentIndex = 0;
  folderName.textContent = "No folder selected.";
  imageCount.textContent = "0 images loaded.";
  renderImage(0);
  updateButtons();
}

folderInput.addEventListener("change", (event) => {
  const fileList = Array.from(event.target.files || []);
  const selectedImages = fileList
    .filter((file) => imageTypes.has(file.type))
    .sort((first, second) => first.name.localeCompare(second.name, undefined, { numeric: true }));

  if (!selectedImages.length) {
    resetViewer();
    folderName.textContent = "That folder does not contain supported image files.";
    return;
  }

  stopPlayback();
  revokeCurrentUrl();
  images = selectedImages;
  currentIndex = 0;

  const firstPath = selectedImages[0].webkitRelativePath || selectedImages[0].name;
  const selectedFolder = firstPath.split("/")[0];

  folderName.textContent = `Folder: ${selectedFolder}`;
  imageCount.textContent = `${images.length} image${images.length === 1 ? "" : "s"} loaded.`;

  renderImage(currentIndex);
  updateButtons();
});

animationSelect.addEventListener("change", () => {
  stage.className = `stage animation-${animationSelect.value}`;
  if (images.length) {
    renderImage(currentIndex);
  }
});

speedRange.addEventListener("input", () => {
  updateSpeedLabel();
  if (isPlaying) {
    startPlayback();
  }
});

playPauseBtn.addEventListener("click", () => {
  if (isPlaying) {
    stopPlayback();
    return;
  }

  startPlayback();
});

prevBtn.addEventListener("click", () => {
  stopPlayback();
  renderImage(currentIndex - 1);
});

nextBtn.addEventListener("click", () => {
  stopPlayback();
  renderImage(currentIndex + 1);
});

window.addEventListener("beforeunload", () => {
  clearPlayback();
  revokeCurrentUrl();
});

updateSpeedLabel();
updateButtons();
