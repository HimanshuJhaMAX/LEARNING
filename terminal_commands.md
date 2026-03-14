# Windows CMD Command Reference
### Compatible with Windows 11 / System32 (cmd.exe)

---

# PART 1 — BASIC (Daily Use)
> Commands you will use almost every day

---

## Navigation

```
dir                     List files and folders in current directory
dir /a                  Show hidden files too
cd <folder>             Enter a folder
cd ..                   Go back one folder
cd \                    Jump to root of current drive
cd /d D:\               Switch to a different drive
cls                     Clear the screen
exit                    Close the terminal
```

---

## Files & Folders

```
mkdir <name>            Create a new folder
rmdir /s /q <folder>    Delete a folder and everything inside it
del <file>              Delete a file
del *.ext               Delete all files with a given extension
copy <file> <dest>      Copy a file to another location
move <file> <dest>      Move or rename a file
ren <old> <new>         Rename a file or folder
type <file>             Print file content to screen
```

---

## Finding Things

```
find "word" file.txt        Search for text inside a file
findstr "word" *.txt        Search across multiple files
dir /s /b *.txt             Find all .txt files recursively
where <program>             Find where a program is installed
```

---

## System Info (Quick Checks)

```
systeminfo              Show OS, RAM, CPU, uptime and more
hostname                Show this computer's name
whoami                  Show current logged-in user
ver                     Show Windows version
```

---

## Network (Daily)

```
ipconfig                Show your IP address
ipconfig /all           Show full network info (MAC, DNS, gateway)
ipconfig /flushdns      Fix DNS issues (clear DNS cache)
ping <host>             Test if a site/server is reachable
ping -t <host>          Ping continuously (Ctrl+C to stop)
```

---

## Running & Stopping Programs

```
tasklist                See all running programs and their PID
taskkill /im <name>.exe Kill a program by name
taskkill /f /im <name>  Force kill a stuck program
start <program>         Launch a program from terminal
```

---

## Users (Basic)

```
net user                List all user accounts on this PC
whoami /groups          See which groups your account belongs to
```

---

## Output Shortcuts

```
command > file.txt      Save command output to a file (overwrite)
command >> file.txt     Append output to a file
command | clip          Copy command output to clipboard
cls                     Clear screen
```

---

## Keyboard Shortcuts (CMD)

```
Up / Down Arrow         Scroll through previous commands
Tab                     Auto-complete file/folder name
Ctrl + C                Cancel a running command
F7                      Show command history popup
doskey /history         Print full command history
```

---
---

# PART 2 — ADVANCED (Rarely Used / Special Situations)
> Pull these out when troubleshooting, scripting, or managing the system

---

## Deep File Operations

```
xcopy src\ dest\ /E /I          Copy folder tree including empty folders
robocopy src dest /E            Reliable large-file/folder copy
robocopy src dest /MIR          Mirror two folders (removes extras in dest)
robocopy src dest /E /Z /LOG:log.txt   Robocopy with log file
attrib +h +s file.txt           Hide and mark file as system
attrib -h -s file.txt           Unhide file
takeown /f file.txt             Take ownership of a file
takeown /f folder /r /d y       Take ownership of a whole folder
icacls file.txt                 View file permissions
icacls file.txt /grant User:F   Grant full control to a user
icacls folder /reset /t         Reset all permissions to inherited
mklink link.txt target.txt      Create symbolic link (file)
mklink /d LinkDir TargetDir     Create symbolic link (folder)
mklink /h hard.txt target.txt   Create a hard link
compact /c /s:C:\folder         Compress folder to save disk space
cipher /w:C:\                   Wipe free space securely on C:
forfiles /p C:\logs /s /m *.log /d -30 /c "cmd /c del @file"
                                Delete log files older than 30 days
```

---

## Disk & Storage

```
diskpart                        Open interactive disk partition tool
  list disk                       Show all disks
  select disk 0                   Select disk 0
  list partition                  Show partitions
  clean                           WIPE the disk (irreversible!)
  create partition primary        Create new partition
  format fs=ntfs quick            Quick format as NTFS
  assign letter=E                 Assign drive letter

chkdsk C: /f                    Fix file system errors (needs reboot)
chkdsk C: /r                    Scan and recover bad sectors
sfc /scannow                    Scan and repair corrupted system files
DISM /Online /Cleanup-Image /CheckHealth    Check Windows image health
DISM /Online /Cleanup-Image /RestoreHealth  Repair Windows image online
defrag C: /U /V                 Defragment C: drive with progress output
fsutil volume diskfree C:       Show exact free space on a drive
```

---

## Advanced Network

```
tracert <host>              Trace the full route packets take to a host
pathping <host>             Route trace + packet loss at each hop
nslookup <domain>           Query DNS to resolve a domain name
netstat -an                 Show all active connections with ports
netstat -b                  Show connections with owning program
netstat -o                  Show connections with process ID
arp -a                      Show ARP table (IP to MAC mapping)
route print                 Show the system routing table
netsh wlan show profiles    List all saved Wi-Fi networks
netsh wlan show profile name="SSID" key=clear   Show saved Wi-Fi password
netsh advfirewall set allprofiles state off      Disable Windows Firewall
netsh advfirewall set allprofiles state on       Enable Windows Firewall
net use Z: \\server\share   Map a network shared folder as drive Z:
net use Z: /delete          Disconnect mapped drive Z:
curl -o file.zip <url>      Download a file from the internet
curl -I <url>               Show HTTP response headers for a URL
```

---

## Processes & Services

```
sc query state= all                         List all services (running + stopped)
sc start <servicename>                      Start a service
sc stop <servicename>                       Stop a service
sc config <name> start= auto               Set service to start automatically
sc config <name> start= disabled           Disable a service from starting
sc create MySvc binPath= "C:\app.exe"      Register a new service
sc delete MySvc                            Remove a registered service
net start <servicename>                    Start a service (simple)
net stop <servicename>                     Stop a service (simple)
wmic process list brief                    List processes with PID and memory
wmic process where name="app.exe" delete   Kill a process via WMIC
```

---

## Scheduled Tasks

```
schtasks /query /fo LIST /v                     Show all tasks in detail
schtasks /create /tn "Task" /tr "app.exe" /sc daily /st 09:00   Create daily task
schtasks /run /tn "Task"                        Manually trigger a task
schtasks /delete /tn "Task" /f                 Delete a task
schtasks /change /tn "Task" /disable            Disable a task
schtasks /change /tn "Task" /enable             Enable a task
```

---

## User & Permission Management

```
net user <name> /add              Create a new local user account
net user <name> /delete           Delete a user account
net user <name> *                 Change a user's password interactively
net localgroup Administrators <name> /add    Add user to Administrators group
runas /user:<name> cmd            Open CMD as a different user
whoami /priv                      Show your current privileges
```

---

## Boot & Shutdown

```
shutdown /s /t 0            Shutdown immediately
shutdown /r /t 0            Restart immediately
shutdown /h                 Hibernate
shutdown /a                 Cancel a scheduled shutdown
shutdown /s /t 60 /c "msg"  Shutdown in 60 sec with a message
bcdedit                     View boot configuration entries
bcdedit /set safeboot minimal    Force Safe Mode on next boot
bcdedit /deletevalue safeboot    Remove Safe Mode boot flag
```

---

## Registry (Dangerous — Back Up First)

```
reg query HKLM\Software             Browse a registry key
reg query HKCU\Environment          View user environment variables
reg add HKCU\Environment /v VAR /t REG_SZ /d "value"   Add a value
reg delete HKCU\Environment /v VAR /f                  Delete a value
reg export HKLM\Software backup.reg     Export a key to file
reg import backup.reg                   Restore from exported file
regedit                             Open Registry Editor GUI
```

---

## Environment Variables

```
set                          List all current environment variables
set MYVAR=hello              Set a temporary variable (this session only)
echo %MYVAR%                 Use/print a variable
setx MYVAR "hello"           Save a variable permanently (user)
setx /M MYVAR "hello"        Save a variable system-wide (admin)
```

---

## Event Logs & Diagnostics

```
wevtutil qe System /c:10 /f:text    View last 10 System event log entries
wevtutil cl Application             Clear the Application event log
powercfg /batteryreport             Generate battery health report (laptops)
powercfg /energy                    Generate energy efficiency report
msinfo32                            Open full System Information GUI
dxdiag                              Open DirectX diagnostics (GPU/display info)
```

---

## Batch Scripting (When You Need to Automate)

```bat
@echo off                         Suppress command echoing

rem -- Variables --
set name=World
echo Hello, %name%!

rem -- User Input --
set /p answer=Type something: 

rem -- Conditions --
if "%answer%"=="yes" (
    echo You said yes
) else (
    echo You said something else
)

rem -- Loop over files --
for %%f in (*.txt) do echo File: %%f

rem -- Counter loop --
for /l %%i in (1,1,5) do echo %%i

rem -- Check if last command failed --
somecommand
if %errorlevel% neq 0 echo Command failed!

rem -- Call a subroutine --
call :mysub
goto :eof

:mysub
echo Inside subroutine
goto :eof
```

---

## Terminal Customization

```
color 0A                    Change colors: 0=black bg, A=green text
title My Terminal           Change the terminal window title
prompt $P$G                 Show current path in prompt
mode con cols=140 lines=50  Resize the terminal window
```

---

> **TIP:** Right-click the Start button and choose **Terminal (Admin)** to run
> with administrator privileges — required for most advanced commands above.
