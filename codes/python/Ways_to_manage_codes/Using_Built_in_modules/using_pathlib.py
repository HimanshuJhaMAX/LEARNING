from pathlib import Path

path = Path("pathlib")
#This creates a directory 
print(path.mkdir())
#This deletes a directory
print(path.rmdir())