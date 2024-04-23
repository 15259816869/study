## 常用命令：

### 系统管理

- `ps`：显示当前进程。
- `top`：显示实时系统状态和进程。
- `kill`：杀死进程。
- `useradd` / `userdel`：创建和删除用户。
- `groupadd` / `groupdel`：创建和删除组。
- `passwd`：修改用户密码。
- `df`：显示磁盘空间使用情况。
- `du`：显示目录空间使用情况。
- `free`：显示内存和交换区使用情况。
- `uname`：显示系统信息。
- `who` / `w`：显示登录用户。
- `history`：显示命令历史。
- `echo命令`：用于在终端输出字符串或变量提取后的值，格式为“echo [字符串 | $变量]”。
- `reboot命令`：用于重新启动系统，相当于“shutdown  -r  now”。
- `poweroff命令`：用于立即停止系统，并关闭电源，相当于“shutdown -h now”。
- **查看系统信息**：`uname -a`
- **查看磁盘使用情况**：`df -h`（-h 参数以易读的形式显示）
- **查看内存使用情况**：`free -h`
- **查看运行的进程**：`ps aux`
  - ps命令：
    - -a：显示当前控制终端的进程（包含其他用户的）。
    - -u：显示进程的用户名和启动时间等信息。
    - -w：宽行输出，不截取输出中的命令行。
    - -l：按长格形式显示输出。
    - -x：显示没有控制终端的进程。
    - -e：显示所有的进程。
    - -t n：显示第n个终端的进程。
- **结束进程**：`kill PID`（将 PID 替换为进程ID）
- **查看登录用户**：who
- **使用hostnamectl修改主机名：**
  - 查看主机名：hostnamectl  status
  - 设置新主机名：hostnamectl  set-hostname   newname

### 网络操作

- `ping`：发送 ICMP ECHO_REQUEST 来测试网络连接。
- `ifconfig`：配置和显示网络接口信息。
- `netstat`：显示网络连接、路由表等信息。
- `ssh`：安全地远程登录到另一台计算机。
- `scp`：安全地在本地和远程计算机之间复制文件。
- `wget`：从网络上下载文件。
- `curl`：与服务器交互，支持多种协议。
- **检测网络连接**：`ping google.com`
- **查看网络接口配置**：`ifconfig`
- **查看网络统计信息**：`netstat -tuln`

### 文本处理

- `echo`：显示一行文本。
- `sort`：排序或合并文件。
- `uniq`：报告或忽略重复的行。
- `cut`：按列切割文本文件。
- `awk`：强大的文本分析工具。
- `sed`：文本流编辑器。
- **查看文件内容**：
  - `cat file.txt`
  - cat /etc/passwd |more  #以分页的形式查看passwd文件的内容，只能向下翻页
- **分页显示文件内容**：`less file.txt`  #以分页的形式查看file文件的内容，可以向上、向下翻页
- **文本搜索**：`grep 'text' file.txt`
- **排序文件**：`sort file.txt`
- **显示文件的首几行**：`head -n 5 file.txt`（显示前5行）
- **显示文件的末几行**：`tail -n 5 file.txt`（显示末尾5行）

### 文件系统操作

- **列出文件和目录**：`ls -l`（-l 参数以列表形式显示详细信息）

- **更改目录**：`cd /home`（切换到 `/home` 目录）

- **显示当前目录**：`pwd`

- **复制文件**：`cp source.txt destination.txt`（将 `source.txt` 复制为 `destination.txt`）

- **移动或重命名文件**：`mv oldname.txt newname.txt`

- **删除文件**：`rm file.txt`

  - -i：删除文件或目录时提示用户
  - -f：删除文件或目录时不提示用户
  - -R：递归删除目录，即包含目录下的文件和各级子目录

- **创建新目录**：`mkdir newdir`

- **建立文件或更新文件的修改时间**：touch 参数  文件名或目录名

  - -d yyyymmdd：把文件存取时间或修改时间改为yyyy年mm月dd日
  - -a：只把文件的存取时间改为当前时间
  - -m：之阿布文件的修改时间改为当前时间

- #### **rmp命令**：

  - -qa：查询系统中安装的所有软件包。
  - -q：查询指定的软件包在系统中是否安装。
  - -qi：查询系统中已安装软件包的描述信息。
  - -ql：查询系统中已安装软件包里所包含的文件列表。
  - -qf：查询系统中指定文件所属的软件包。

- **tar命令**：用于打包和解压文件

  - -c	创建新的归档文件（打包）
  - -x	从归档文件中提取文件（解包）
  - -f <文件名>	指定归档文件名
  - -v	显示操作的详细信息
  - -z	通过gzip压缩归档文件
  - -j	通过bzip2压缩归档文件

- **删除目录**：`rmdir emptydir`（只能删除空目录）
- **查找文件**：`find / -name filename.txt`（在根目录及其子目录下查找名为 `filename.txt` 的文件）

### 包管理（基于不同的发行版）

- `apt-get` / `apt`（Debian/Ubuntu）：软件包管理。
- `yum`（RHEL/CentOS）/ `dnf`（Fedora）：软件包管理。
- `pacman`（Arch Linux）：软件包管理。
- `zypper`（openSUSE）：软件包管理。

### Linux SSH服务：

- systemctl status sshd     #查看状态
- systemctl start  sshd     #开启服务
- systemctl stop sshd     #关闭服务
- systemctl enable  sshd     #开机自启动
- systemctl restart  sshd     #重启

### dnf 命令：

- | **命**  **令**                    | **作**  **用**               |
  | --------------------------------- | ---------------------------- |
  | **dnf repolist all**              | 列出所有仓库                 |
  | **dnf list all**                  | 列出仓库中所有软件包         |
  | **dnf info** **软件包名称**       | 查看软件包信息               |
  | **dnf install** **软件包名称**    | 安装软件包                   |
  | **dnf reinstall** **软件包名称**  | 重新安装软件包               |
  | **dnf update** **软件包名称**     | 升级软件包                   |
  | **dnf  remove** **软件包名称**    | 移除软件包                   |
  | **dnf clean all**                 | 清除所有仓库缓存             |
  | **dnf check-update**              | 检查可更新的软件包           |
  | **dnf grouplist**                 | 查看系统中已经安装的软件包组 |
  | **dnf groupinstall** **软件包组** | 安装指定的软件包组           |
  | **dnf groupremove** **软件包组**  | 移除指定的软件包组           |
  | **dnf groupinfo** **软件包组**    | 查询指定的软件包组信息       |

  