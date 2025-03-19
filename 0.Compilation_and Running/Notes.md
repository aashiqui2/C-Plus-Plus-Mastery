# Refer This Page
https://www.scaler.com/topics/how-to-compile-cpp/F

It looks like you're using **PowerShell** on Windows, where the `wc` command (which is a Unix/Linux command) is not available by default. Here are some alternatives to count the lines in `hello.ii` on Windows:

### **Alternative Methods:**
#### **1. Using PowerShell**
Try this command in PowerShell:
```powershell
(Get-Content hello.ii).Count
```
This will display the number of lines in `hello.ii`.

#### **2. Using Windows Command Prompt (`cmd`)**
If you're using `cmd`, you can use `find /c /v ""`:
```cmd
find /c /v "" hello.ii
```
This will count the number of lines in the file.

#### **3. Using Git Bash or WSL**
If you have **Git Bash** or **Windows Subsystem for Linux (WSL)** installed, you can use:
```sh
wc -l hello.ii
```
