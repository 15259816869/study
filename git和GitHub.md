git和GitHub

## 基本术语：

1. SSH协议：远程登录的安全方法
2. 存储库：包含项目文件夹
3. Fork:存储库的副本
4. 拉动请求：请求审查和批准
5. 工作目录：包含文件和子目录
6. 提交：项目当前状态的快照
7. 分支机构：独立开发线
8. 合并：将更改从一个分支合并到另一个分支
9. 克隆：远程Git存储库的本地副本

## 基本流程：

1. 加入现有项目时：
   - 克隆远程存储库，创建一个分支，然后对其进行操作。
   - 将文件添加到暂存区域并提交到分支。
   - 将提交推送到远程存储库。
   - 创建一个pull请求，将分支合并到main中。
2. 启动新项目时：
   - 初始化本地Git存储库。
   - 将文件移动到临时区域并执行初始提交。
   - 创建远程存储库并将其链接到本地存储库。
   - 推送更改，以便其他开发人员可以克隆远程存储库。

## 命令行（CLI）:

### **设置全局电子邮件配置**

- *描述*：它为 Git 设置全局电子邮件配置。这需要在提交以验证用户的电子邮件 ID 之前执行。
- *语法*：**git config –global user.email <您的 GitHub 电子邮件>**

### **设置全局用户名配置**

- *描述*：它为 Git 设置全局用户名配置。这需要在提交以验证用户的用户名之前执行。
- *语法*：**git config –global user.name <您的 GitHub 用户名>**


### **git添加**

- *描述*：它将更改添加到暂存区域。此命令暂存对文件所做的更改并为下一次提交做好准备。

- *句法*：

  - **git add <filename.txt>**（添加特定文件）

  - **git add .**（添加当前目录中所有新增或更改的文件）

  - **git add -A**（从存储库的根添加整个工作树中的所有更改，无论您位于目录结构中的位置）

  - **git commit**：将暂存区域的文件提交到仓库

    - **git commit -m "description"**

    - git commit 可以一次提交很多文件， -m 后面输入的是

      本次提交的说明，可以输入任意内容。

### **查看工作区状态**

- *描述*：随时掌握工作区的状态
- *句法*：
  - **git status**

### **git重置**

- *描述*：它重置工作目录中的更改。与 –hard HEAD 一起使用时，此命令将放弃对工作目录和暂存区域所做的所有更改，并将存储库重置为上次提交 (HEAD)。
- *句法*：
  - **git reset**
  - **git reset -hard HEAD**

### **git分支**

- *描述*：它列出、创建或删除存储库中的分支。要删除分支，请先使用**git checkout**检出该分支，然后在本地运行命令删除该分支。

- *句法*：

  - **git  branch**（列出分支）
  - **git  branch < new-branch>**（创建一个新分支）
  - **git  branch -d < branch-name>**（删除分支）

- ### 分支与合并

  - git branch：管理分支
    - `git branch`：列出所有本地分支
    - `git branch <branch_name>`：创建新分支
    - `git branch -d <branch_name>`：删除分支
  - git checkout：切换分支或恢复工作树文件
    - `git checkout <branch_name>`：切换分支
    - `git checkout -b <branch_name>`：创建并切换到新分支
  - git merge：合并两个或更多的开发历史
    - `git merge <branch_name>`：将指定分支合并到当前分支
  - **重命名分支**
    - 不会覆盖已经存在的分支：
      - **git branch -m branch_name branch_new_name**
    - 会覆盖已经存在的分支：
      - **git branch -M branch_name branch_new_name**
  
- ### **git 切换分支**

  - *描述*：它切换到“主”分支。这会将您当前的分支切换到“主分支”。
  - *语法*：**git checkout main**

### **git 请求拉取**

- *描述*：它生成电子邮件请求的待处理更改的摘要。它有助于将分支或分叉中所做的更改传达给上游存储库维护者。
- *语法*：**git request-pull origin/main <myfork 或branch_name>**

### **git拉取**

- *描述*：它从远程存储库获取更改并将它们合并到本地分支中。首先，通过运行**git checkout**命令切换到要合并更改的分支。然后，运行**git pull**命令，该命令将从原始远程存储库的主分支中获取更改并将它们合并到当前分支中。
- *语法*：**git pull origin main**

### **git 推送**

- *描述*：它将本地存储库内容上传到远程存储库。首先运行**git checkout**命令，确保您位于要推送的分支上，然后将该分支推送到远程存储库。
- *语法*：**git push origin <分支名称>**

### **git版本**

- *描述*：它显示系统上安装的当前 Git 版本。
- *语法*：**git  version**

### **查看修改内容**

- *描述*：它显示提交之间的变化、提交和工作树等。它还比较分支。
- *句法*：
  - **git diff**（显示工作目录和上次提交之间的差异，工作区(work dict)和暂存区(stage)的比较）
  - **git diff HEAD~1 HEAD**（显示最后一次提交和倒数第二次提交之间的差异）
  - **git diff < branch-1> < branch-2>**（比较指定分支）

### **查看提交日志**

- *描述*：查看提交日志
- *句法*：**git log**
- **git log --oneline**  //将以一行的形式展示每个提交，这使得你能轻松复制哈希值并查看历史记录。

### **查看历史命令**

- *描述*：查看历史命令
- *句法*：**git reflog**

### **git 恢复**

- *描述*：它通过应用新的提交来恢复提交。这将创建一个新的提交，撤消上次提交所做的更改。
- *语法*：**git revert HEAD**

### **误删恢复**

- *描述*：误操作执行了 **rm test.txt**,恢复操作：将版本库的东西重新写回工作区就行了
- *语法*：**git  checkout   --  test .txt**

- *描述*：误操作执行了 **git  rm test.txt**，，恢复操作：先撤销暂存区修改，重新放回工作区，然后再从版本库写回到工作区
- *语法*：
  - **git  reset  HEAD  test.txt**
  - **git checkout  --  test.txt**

### **版本回退**

- *描述*：`git reset`此命令将你的 HEAD 指针移动到指定的提交。根据你选择的模式，它还可以更改你的暂存区或工作目录：在这里，`commit_hash` 是你想回到的提交的哈希值，`--hard` 表示同时更改你的工作目录、暂存区和 HEAD 指针。请注意，这种方式会丢失所有当前未提交的修改。
- *语法*：**git reset --hard <commit_hash>**


## 远程仓库：

### **创建SSH Key**

- *描述*：创建SSH Key
- *语法*：**ssh  -keygen  -t rsa -C "email@example.com"**

### **git 远程**

- *描述*：它列出了与本地存储库关联的所有远程存储库的名称。
- *语法*：**git  remote**

### **git 远程-v**

- *描述*：它列出了本地 Git 存储库连接到的所有远程存储库，以及与这些远程存储库关联的 URL。
- *语法*：**git remote -v**

### **git 远程添加源  **

- *描述*：它添加一个名为“origin”且具有指定 URL 的远程存储库。
- *语法*：**git remote add origin < URL>**

### **git 远程重命名**

- *说明*： git remote rename 命令后面跟着您要重命名的远程存储库（源）的名称以及您要为其指定的新名称（上游）。这会将“origin”远程存储库重命名为“upstream”。
- *语法*：**gitremote rename origin upstream**

### **git 格式补丁**

- *描述*：它生成用于电子邮件提交的补丁。这些补丁可用于通过电子邮件提交更改或与其他人共享。
- *语法*：**git format-patch HEAD~3**（为最后三个提交创建补丁）

### **git 克隆**

- *描述*：它将存储库从远程源复制到本地计算机。这将在您当前的工作目录中创建存储库的副本。
- *语法*：**git clone <存储库 URL>**

### **推送到远程仓库**

- *描述*：推送最新修改；-u 表示第一次推送master分支的所有内容，此后，每次本地提交后，只要有必要，就可以使用命令 git push origin master 推送最新修改。
- *语法*：**git push -u origin master**

### **建立本地分支和远程分支的关联**

- *描述*：建立本地分支和远程分支的关联，`origin/branch-name` 指的是远程仓库中的分支，`branch-name` 是你本地的分支
- *语法*：**git branch -u origin/branch-name branch-name**
  - 或者**git branch --set-upstream-to=origin/branch-name branch-name**     一样的

### **git 删除关联远程库**

- *描述*：它删除具有指定名称的远程存储库。
- *语法*：**git remote rm  origin** 

### **git 发送电子邮件**

- *描述*：它以电子邮件的形式发送补丁集合。它允许您通过电子邮件向收件人发送多个补丁文件。请务必使用**git config**命令设置电子邮件地址和名称，以便电子邮件客户端在发送电子邮件时知道发件人信息。
- *语法*：**git send-email \*.patch**

### **邮箱应用补丁**

- *描述*：它将补丁应用于存储库。它将补丁文件作为输入，并将补丁文件中指定的更改应用到存储库。
- *语法*：**git am <patchfile.patch>**

### **git 守护进程**

- *描述*：它通过 Git:// 协议公开存储库。 Git 协议是一个轻量级协议，旨在实现 Git 客户端和服务器之间的高效通信。
- *语法*：**git daemon –base-path=/path/to/repositories**

### **网页查看git状态**

- *描述*：它立即启动一个 Web 服务器来浏览存储库。它提供了一种通过 Web 界面查看存储库内容的简化方法，无需配置完整的 Web 服务器。
- *语法*：**git instaweb –httpd=`<httpd>`**: 指定使用哪个 HTTP 守护进程（比如 lighttpd, webrick, apache2 等）。
- `git instaweb --port=<port>`: 指定 web 服务运行的端口。
- `git instaweb --browser=<browser>`: 指定启动时使用哪个 web 浏览器。
- `git instaweb --local`: 只允许本机访问 Git web 服务。
- `git instaweb --module=<module>`: 当你在多模块仓库(worktree)中使用git instaweb时有用。

### **git rerere**

- *描述*：这个功能的目的是帮助用户管理在合并和重基（rebase）过程中出现的冲突。当你在一次合并或重基操作中解决了一个冲突之后，`git rerere` 记录下这次冲突的上下文以及你的解决方式。请注意，需要将 rerere.enabled 配置选项设置为“true”（**git config –global rerere.enabled true**）才能使 git rerere 正常工作。此外，请注意 git rerere 仅适用于已使用相同分支和提交解决的冲突。
- *语法*：**git rerere**

### 设定和配置

- git config

  ：配置用户信息，如用户名和邮箱

  - `git config --global user.name "your_name"`：设置用户名
  - `git config --global user.email "your_email@example.com"`：设置用户邮箱

- **git init**：初始化一个新的Git仓库



## 其他命令

### **工作现场**

- *描述*：Git还提供了一个 stash功能，可以把当前工作现场“储藏”起来，等以后恢复现场后继续工作 git  stash
- **保存工作现场**
  - **git stash**
- **查看工作现场**
  - **git  stash  list**

### **恢复工作现场**

- **恢复后不删除**
  - *描述*：一是用 git stash apply恢复，但是恢复后，  stash内容并不删除，你需要用 git stash drop来删 除；二种方式是用 git stash pop ，恢复的同时把stash内容也删了：
  - **保存后恢复：**
    - **git stash drop**
  -  **如果需要删除：**
    - **git stash drop**
  - **恢复后删除**
    - **git stash pop

### **标签**

- *描述*：tag就是一个让人容易记住的有意义的名字，它跟某个commit绑在一起。

- **新建一个标签**

  - *描述*：命令 git tag <name>用于新建一个标签，默认为 HEAD ，也可以指定一个commit id
  - *语法*：**git tag < tagname>**

- **指定标签信息**

  - *语法*：**git tag -a <  tagname> -m <  description> <  branchname> or commit_id**

    ​	**git tag -a <  tagname> -m "blablabla..."** 可以指定标签信息；

- **PGP签名标签**

  - *语法*：**git tag -s <  tagname> -m <  description> <  branchname> or commit_id**

    **git tag -s <  tagname> -m "blablabla..."** 可以用PGP签名标签。

- **查看所有标签**

  - *语法*：**git tag**

- **推送一个本地标签**

  - 语法：**git push origin <  tagname>**

- **推送全部未推送过的本地标签**

  - 语法：**git push origin --tags**

- **删除一个本地标签**

  - 语法：**git tag -d < tagname>**

- **删除一个远程标签**

  - *描述*：命令在 Git 中用于删除远程仓库的标签。在这个命令中 `<tagname>` 应当被替换为你希望删除的标签名称。
  - 语法：**git push origin  :refs/tags/< tagname>**