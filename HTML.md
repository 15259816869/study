# HTML

## 基础知识

### 内核：

1. 浏览器的核心，用于处理浏览器得到的各种资源

   | 浏览器          | 内核                |
   | --------------- | ------------------- |
   | Chrome          | 先webkit现**Blink** |
   | Safari          | Webkit              |
   | IE              | Trident             |
   | Firefox         | Gecko               |
   | Opera           | 先Presto后Blink     |
   | Microsoft  Edge | Blink               |

   



### [HTML] {Hyper Text Markup Language}:

- #### 超文本标识文件

### [HTML]骨架：

`<!DOCTYPE html>`//说明浏览器当前网页的版本

`<html>`

<!--  注释  -->

```html
<head>
	<title>...</title>
</head>
```
​	`<body>`

​	`</body>`

`</html>`

### 标签注意事项

1. 双标签：<标签名>标签体</标签名>

2. 单标签：<标签名/>，单标签在嵌套式要进行缩进

3. 标签属性：可以写在起始标签或单标签中，格式：

   <标签名 属性名="属性值">
   
4. 有些特殊属性，只有值没有标签：

1. 属性名、属性值，都不区分大小写，但推荐小写。
2. 双引号，也可以写成单引号，甚至不写都行，但还是推荐写双引号。
3. 标签中不要出现同名属性，否则后写的会失效，例如：`<input type= "text " type= "password ">`

### 字符编码：

1. 平时编写代码时，统一采用 UTF-8 编码（最稳妥）。

2. 为了让浏览器在渲染 html 文件时，不犯错误，可以通过 meta 标签配合 charset 属性指 定字符编码。

   `<head>`

   ```html
   <meta charset="UTF-8"/>
   ```

   `</head>`

### HTML设置语言

1. 具体写法：

   `<html lang="zh-CN">`

2. 扩展知识：

   - zh-CN  ：中文-中国大陆（简体中文）
   -  zh-TW ：中文-中国台湾（繁体中文）
   -  zh  ：中文
   - en-US ：英语-美国
   - en-GB ：英语-英国

### HTML标准

<!DOCTYPE html>

`<html lang="zh-CN">`

<head>
    <meta charset="UTF—8">
    <title> title name</title>
</head>

​	`<body>`

​	`</body>`

`</html>`

### HTML基础

1. 排版标签：

   1. h1最好写一个，h2-h6能适当多写
   2. h1-h6不能相互嵌套
   3. p标签里面不能有h1-h6、p、div标签，p中不要写块级元素
2. 语义化：

   1. 标签默认效果不重要，语义最重要
3. 块级元素与行内元素：

   1. 块级元素：独占一行；几乎什么都可以写
   2. 行内元素：不独占一行；只能写行内元素，不能写块级元素

### 文本标签_常用

1. 文本标签_常用:

   标签基本上是行内元素

   | 标签名 | 标签语义                         |
   | ------ | -------------------------------- |
   | em     | 着重阅读的内容                   |
   | strong | 十分重要的内容                   |
   | span   | 没有语义，用于包裹短语的通用容器 |

2. 文本标签_不常用:

| ***\*标签名\****                                             | ***\*标签语义\****                                           |
| ------------------------------------------------------------ | ------------------------------------------------------------ |
| cite                                                         | 作品标题（书籍、歌曲、电影、电视节目、绘画、雕塑）           |
| ![img](file:///C:\Users\11612\AppData\Local\Temp\ksohtml12800\wps1.png) | 特殊术语 ，或专属名词                                        |
| del 与 ins                                                   | 删除的文本 【与】 插入的文本                                 |
| sub 与 sup                                                   | 下标文字 【与】 上标文字                                     |
| code                                                         | 一段代码                                                     |
| samp                                                         | 从正常的上下文中，将某些内容提取出来，例如：标识设备输出     |
| ![img](file:///C:\Users\11612\AppData\Local\Temp\ksohtml12800\wps2.png) | 键盘文本，表示文本是通过键盘输入的，经常用在与计算机相关 的手册中 |
| abbr                                                         | 缩写，最好配合上 title 属性                                  |
| ![img](file:///C:\Users\11612\AppData\Local\Temp\ksohtml12800\wps3.png) | 更改文本方向，要配合 dir 属性，可选值:  ltr  （默认值）、![img](file:///C:\Users\11612\AppData\Local\Temp\ksohtml12800\wps4.png) |
| ![img](file:///C:\Users\11612\AppData\Local\Temp\ksohtml12800\wps5.png) | 标记变量，可以与 code 标签一起使用                           |
| small                                                        | 附属细则，例如：包括版权、法律文本。 —— 很少使用             |
| b                                                            | 摘要中的关键字、评论中的产品名称。 —— 很少使用               |
| ![img](file:///C:\Users\11612\AppData\Local\Temp\ksohtml12800\wps6.png) | 本意是：人物的思想活动、所说的话等等。现在多用于：呈现字体图标  （后面要讲的内容）。 |
| ![img](file:///C:\Users\11612\AppData\Local\Temp\ksohtml12800\wps7.png) | 与正常内容有反差文本，例如：错的单词、不合适的描述等。 —— 很少使用 |
| q                                                            | 短引用 —— 很少使用                                           |
| blockquote                                                   | 长引用 —— 很少使用                                           |
| address                                                      | 地址信息                                                     |

### 图片标签：

| ***\*标签\*******\*名\**** | ***\*标签语\*******\*义\**** | ***\*常用属性\****                                           |
| -------------------------- | ---------------------------- | ------------------------------------------------------------ |
| img                        | 图片                         | s rc ：图片路径（又称：图片地址）  —— 图片的具体位置	alt ：图片描述width ：图片宽度，单位是像素，例如：  200px 或 200		height ：图片高度，  单位是像素，例如：  200px 或 200 |

//alt 属性的作用：

![img](file:///C:\Users\11612\AppData\Local\Temp\ksohtml12800\wps8.jpg)  搜索引擎通过 alt 属性，得知图片的内容。 —— 最主要的作用。 ![img](file:///C:\Users\11612\AppData\Local\Temp\ksohtml12800\wps9.jpg)  当图片无法展示时候，有些浏览器会呈现 alt 属性的值。

![img](file:///C:\Users\11612\AppData\Local\Temp\ksohtml12800\wps10.jpg)  盲人阅读器会朗读 alt 属性的值。

1. 常见图片格式：

   1. jpg 格式：

      ![img](file:///C:\Users\11612\AppData\Local\Temp\ksohtml12800\wps11.png)

   2. png 格式：

      ![img](file:///C:\Users\11612\AppData\Local\Temp\ksohtml12800\wps12.png)

   3. bmp 格式：

   ![img](file:///C:\Users\11612\AppData\Local\Temp\ksohtml12800\wps13.png)

   4. gif 格式：

   ![img](file:///C:\Users\11612\AppData\Local\Temp\ksohtml12800\wps14.png)

   5. web p 格式：

   

   ![img](file:///C:\Users\11612\AppData\Local\Temp\ksohtml12800\wps15.png)![img](file:///C:\Users\11612\AppData\Local\Temp\ksohtml12800\wps16.png)

   6. base64 格式

   ![img](file:///C:\Users\11612\AppData\Local\Temp\ksohtml12800\wps17.png)

### 超链接：

1. 实现功能：

   1. 跳转到指定页面

   2. 跳转到指定文件（可下载）

   3. 跳转到锚点的位置

   4. 唤起指定应用

      | 标签名 | 标签语义 | 常用属性                                                     |
      | ------ | -------- | ------------------------------------------------------------ |
      | a      | 超链接   | href:指定要跳转的具体目标<br />target:控制跳转时如何打开页面，常用值：<br />   "\_self":在本窗口打开#默认值<br />   " \_blank":在新窗口打开<br />id:元素的唯一标识，可用于设置瞄点<br />name:元素的名字，写在a标签中，能设置瞄点 |

2. 跳转到页面：

   1. `<a href="https://cn.bing.com/?mkt=zh-CN" target="_self">前往bing搜索网站</a>`

          `<a href="https://yz.chsi.com.cn/" target="_blank">研招网</a>`

   2. 注意点：

      1.  代码中的***\*多个空格\**** 、 ***\*多个回车\****，都会被浏览器解析成一个空格！ 
      2. `` 虽然 a 是行内元素，但 a 元素可以包裹除它自身外的任何元素！

3. 跳转到文件：

   1. `<a href="./resource/如何一夜暴富.pdf">看小说，不好看的</a>`

          `<a href="./resource/小姐姐.gif">看图片</a>`

        `<!-- 强制下载 -->`

          `<a href="./resource/小电影.mp4 " download="强制下载">看小电影</a>`

   2. 注意：

      1. 若浏览器无法打开文件，则会引导用户下载。
      2. 注意2：若想强制触发下载，请使用 download 属性，属性值即为下载文件的名称。

4. 跳转到锚点：

   1. 设置锚点：

      1. `< !--  第一种方式：a标签配合name属性 -->`

         `<a  name= "test1 "></a>`

         `< !--  第二种方式：其他标签配合id属性 -->`

         `<h2  id= "test2 ">我是一个位置</h2>`

      2.  具有 href 属性的  a 标签是***\*超链接\****，具有 name 属性的 a 标签是***\*锚点\****。 

      3.  name 和 id 都是区分大小写的，且 id 最好别是数字开头。

   2. 跳转锚点：

      1. `< !-- 跳转到test1锚点-->`

         `<a  href= "#test1 ">去test1锚点</a>`

         `< !--  跳到本页面顶部 -->

         `<a  href= "# ">回到顶部</a>`

         `< !--  跳转到其他页面锚点 -->`

         `<a  href= "demo .html#test1 ">去demo .html页面的test1锚点</a>`

         `< !--  刷新本页面 -->`

         `<a  href= "">刷新本页面</a>`

         `< !--  执行一段js ,如果还不知道执行什么，可以留空，javascript:; -->`

         `<a  href= "javascript:alert(1 ) ; ">`点我弹窗</a>`

   3. 唤起指定应用：

      1. 唤起电话：

         `<a href="tel:10086">10086电话</a>`

      2. 唤起邮箱：

         `<a href="mailto:1161239017@qq.com">邮箱发送邮件</a>`

      3. 唤起短信：

         `<a href="sms:15259816869">短信发送</a>`

### 列表：

列表可以嵌套、只能在li里添加a标签，不能直接写；li最好不要单独写

1. 有序列表（Ordered list）<ol>:

   1. 列表项<li>

      `<!-- 有序列表 -->

      ​    <ol>

      ​      <li>把冰箱门打开</li>

      ​      <li>拿出冰水</li>

      ​      <li>开始喝水</li>

      ​    </ol>`

2. 无序列表（Unordered list）<ul>:

   `<!-- 无序列表 -->

   ​    <ul>

   ​      <li>想帅哥吗</li>

   ​      <li>对的

   ​        <ul>

   ​            <li>

   ​              正在浏览网站的就是帅哥

   ​            </li>

   ​        </ul>

   ​      </li>

   ​      <li>没错</li>

   ​      <li>帅哥就是你</li>

   ​    </ul>`

3. 自定义列表（Definition List）<dl>:一个标题可以多个描述

   `<!-- 自定义列表 -->

   ​    <dl>

   ​      <!-- 标题 -->

   ​      <dt>如何学好前端</dt>

   ​      <!-- 描述 -->

   ​      <dd>看完视频多打点自己写的代码</dd>

   ​    </dl>`

### 表格：

1. 基本结构：

   标题、头部、主体、脚注

2. 基本标签：

   1. 表格：table
   2. 标题：caption
   3. 头部：thead
      1. 行：tr
      2. 单元格：th
   4. 主体：tbody
      1. 行：tr
      2. 单元格：td
   5. 脚注：tfoot
      1. 行：tr
      2. 单元格：td

3. 具体代码：

   `<!-- 表格 -->

           <table border="1.1">

   ​    <!-- 表格标题 -->

   ​    <caption>学生信息</caption>

   ​    <!-- 表格头部 -->

   ​    <thead>

   ​      <!-- 行 -->

   ​      <tr>

   ​        <!-- 单元格 -->

   ​        <th>姓名</th>

   ​        <th>性别</th>

   ​        <th>年龄</th>

   ​        <th>民族</th>

   ​        <th>政治面貌</th>

   ​      </tr>

   ​    </thead>

   ​    <!-- 表格主体 -->

   ​    <tbody>

   ​      <tr>

   ​        <!-- 单元格 -->

   ​        <td>张三</td>

   ​        <td>男</td>

   ​        <td>18</td>

   ​        <td>汉</td>

   ​        <td>团员</td>

   ​      </tr>

   ​      <tr>

   ​        <!-- 单元格 -->

   ​        <td>王五</td>

   ​        <td>男</td>

   ​        <td>18</td>

   ​        <td>回</td>

   ​        <td>党员</td>

   ​      </tr>

   ​    </tbody>

   ​    <!-- 表格脚注 -->

   ​    <tfoot>

   ​      <tr>

   ​        <td></td>

   ​        <td></td>

   ​        <td></td>

   ​        <td></td>

   ​        <td>共计：2人</td>

   ​      </tr>

   ​    </tfoot>

     </table>`

4. 常用属性：

   1. border>1只能控制最外层边框
   2. width:宽度、height：高度（头部和脚注的高度不变）、cellspacing:单元格间距
   3. 标题属性无效
   4. thead：高度属性，align--水平对齐方式（center、right、left），valign--垂直对齐方式（top、bottom、mid）
   5.  给某个 th 或 td 设置了宽度之后，他们所在的那一列的宽度就确定了。
   6. 给某个 th 或 td 设置了高度之后，他们所在的那一行的高度就确定了。

   

   1. | ***\*标签名\****                                             | ***\*标签语义\**** | ***\*常用属性\****                                           |
      | ------------------------------------------------------------ | ------------------ | ------------------------------------------------------------ |
      | ![img](file:///C:\Users\11612\AppData\Local\Temp\ksohtml2572\wps1.png) | 表格               | width ：设置表格宽度。height ：设置表格***\*最小\****高度，表格最终高度可能比设置 的值大。	border ：设置表格边框宽度。	cellspacing ： 设置单元格之间的间距。 |
      | thead                                                        | 表格头部           | height ：设置表格头部高度。	align ： 设置单元格的***\*水平\****对齐方式，可选值如下：1. left ：左对齐2. center ：中间对齐3. right ：右对齐valign ：设置单元格的***\*垂直\****对齐方式，可选值如下：1. top ：顶部对齐2. middle ：中间对齐3. bottom ：底部对齐 |
      | tbody                                                        | 表格主体           | 常用属性与 thead 相同。                                      |
      | tr                                                           | 行                 | 常用属性与 thead 相同。                                      |
      | tfoot                                                        | 表格脚注           | 常用属性与 thead 相同。                                      |
      | td                                                           | 普通单元 格        | width ：设置单元格的宽度，同列所有单元格全都受影 响。heigth ：设置单元格的高度，同行所有单元格全都受影 响。	align ：设置单元格的水平对齐方式。valign ：设置单元格的垂直对齐方式。	rowspan ：指定要跨的行数。	colspan ：指定要跨的列数。 |
      | ![img](file:///C:\Users\11612\AppData\Local\Temp\ksohtml2572\wps2.png) | 表头单元 格        | 常用属性与 td 相同。                                         |
   
5. 跨行跨列：

   1.  rowspan ：指定要跨的行数。
   2.  colspan ：指定要跨的列数。
   3. 注：表格是从左往右，一行一行的编写，详细代码见te04.html

6. 常用标签补充：

   | ***\*标签名\****                                             | ***\*标签含义\****                         | ***\*单\**** ***\*/\**** ***\*双\**** ***\*标签\**** |
   | ------------------------------------------------------------ | ------------------------------------------ | ---------------------------------------------------- |
   | ![img](file:///C:\Users\11612\AppData\Local\Temp\ksohtml17212\wps1.png) | 换行                                       | 单                                                   |
   | ![img](file:///C:\Users\11612\AppData\Local\Temp\ksohtml17212\wps2.png) | 分隔                                       | 单                                                   |
   | ![img](file:///C:\Users\11612\AppData\Local\Temp\ksohtml17212\wps3.png) | 按原文显示（一般用于在页面中嵌入大段代码） | 双                                                   |

### 表单：

概念： 一个包含交互的区域，用于收集用户提供的数据。

1. 基本结构:

| ***\*标签名\****                                             | ***\*标签\*******\*语义\**** | ***\*常用属性\****                                           | ***\*单\*******\*/\*******\*双\*******\*标签\**** |
| ------------------------------------------------------------ | ---------------------------- | ------------------------------------------------------------ | ------------------------------------------------- |
| form                                                         | 表单                         | action ：用于指定表单的提交地址（需要与后端人员沟通后确定）。target ：用于控制表单提交后，如何打开页面，常用值如下：	_self ：在本窗口打开。	_blank ：在新窗口打开。method ：用于控制表单的提交方式，暂时只需了解，在后面 Ajax 的课程中，会详细讲解。 | 双                                                |
| ![img](file:///C:\Users\11612\AppData\Local\Temp\ksohtml11932\wps1.png) | 输入框                       | type ：设置输入框的类型，目前用到的值是 text ，表示普通 文本。name ：用于指定提交数据的名字，（需要与后端人员沟通后确 定）。 | 单                                                |
| button                                                       | 按钮                         | 本小节暂不涉及                                               | 双                                                |

示例代码：

<form  action= "https://www .baidu .com/s " target= "_blank " method= "get "><input  type= "text "  name= "wd "><button>去百度搜索</button>< /form>





#### 常用表单控件

1. 文本输入框

   ![](file:///C:\Users\11612\AppData\Local\Temp\ksohtml11932\wps4.png)

2. 密码输入框:

   1. `<input  type= "password ">`

   ![img](file:///C:\Users\11612\AppData\Local\Temp\ksohtml11932\wps5.png)

3. 单选框：

   1. `<input  type= " radio "  name= "sex "  value= "female ">女

      <input  type= " radio "  name= "sex "  value= "male ">男`

      ![](file:///C:\Users\11612\AppData\Local\Temp\ksohtml11932\wps6.png)

4. 复选框

   1. `<input  type= "checkbox "  name= "hobby "  value= "smoke ">抽烟

      <input  type= "checkbox "  name= "hobby "  value= "drink ">喝酒

      <input  type= "checkbox "  name= "hobby "  value= "perm ">烫头`

   2. 常用属性如下：：

      ​	name  属性：数据的名称。

      ​	value 属性：提交的数据值。

      ​	checked 属性：让该复选框默认选中。

5. 隐藏域

   1. `<input  type= "hidden "  name= "tag "  value= "100 ">`

   ![img](file:///C:\Users\11612\AppData\Local\Temp\ksohtml11932\wps9.png)

6. 提交按钮

   

   ![img](file:///C:\Users\11612\AppData\Local\Temp\ksohtml11932\wps10.png)

   ![img](file:///C:\Users\11612\AppData\Local\Temp\ksohtml11932\wps11.png)

7. 重置按钮

    

   <input  type= " reset "  value= "点我重置"><button  type= " reset ">点我重置</button>

   ![img](file:///C:\Users\11612\AppData\Local\Temp\ksohtml11932\wps12.png)

8. 普通按钮

   <input  type= "button " value= "普通按钮"><button  type= "button ">普通按钮</button>

   ![img](file:///C:\Users\11612\AppData\Local\Temp\ksohtml11932\wps13.png)

9. 文本域

   <textarea  name= "msg "  rows= "22 "  cols= "3 ">我是文本域</textarea>

   ![img](file:///C:\Users\11612\AppData\Local\Temp\ksohtml11932\wps14.png)

10. 下拉框

    1. `省份:<select name="where" >

       ​        <option value="闽" selected>福建</option>

       ​        <option value="粤" >广东</option>

       ​        <option value="京" >北京</option>

       ​      </select><br>`

![img](file:///C:\Users\11612\AppData\Local\Temp\ksohtml11932\wps18.png)

#### 禁用表单控件

1. 给表单控件的标签设置,disabled 既可禁用表单控件。

![img](file:///C:\Users\11612\AppData\Local\Temp\ksohtml11932\wps19.png)

1. label标签
   1. label 标签可与表单控件相关联，关联之后点击文字，与之对应的表单控件就会获取焦点。
2. 两种与 label 关联方式如下：
   1. 让 label 标签的 for 属性的值等于表单控件的 id 。
   2. 把表单控件套在 label 标签的里面。

fieldset与legend的使用（了解）

1. fieldset 可以为表单控件分组、  legend 标签是分组的标题。
   1. 示例：

   `<fieldset><legend>主要信息</legend>

   <label  for= "zhanghu ">账户：< /label>

   <input  id= "zhanghu "  type= "text "  name= "account " maxlength= "10 "><br> <label>

   密码：<input  id= "mima "  type= "password "  name= "pwd "  maxlength= "6 ">

   < /label><br>性别：<input  type= " radio "  name= "gender "  value= "male "  id= "nan ">

   <label for= "nan ">男</label>

   <label><input  type= " radio "  name= "gender "  value= "female "  id= "nv ">女< /label>

   < /fieldset>`

#### 表单总结

| ***\*标签名\****                                             | ***\*标\**** ***\*签  语  义\**** | ***\*常用属性\****                                           |                                                              |                     |                                                              |
| ------------------------------------------------------------ | --------------------------------- | ------------------------------------------------------------ | ------------------------------------------------------------ | ------------------- | ------------------------------------------------------------ |
| ![img](file:///C:\Users\11612\AppData\Local\Temp\ksohtml11932\wps20.png) | 表 单                             | action 属性：  表单要提交的地址。	target 属性：  要跳转的新地址打开位置; 值: _self 、	method 属性：  请求方式，值：  get 、 post | ![img](file:///C:\Users\11612\AppData\Local\Temp\ksohtml11932\wps21.png) |                     |                                                              |
| ![img](file:///C:\Users\11612\AppData\Local\Temp\ksohtml11932\wps22.png) | 多 种 形 式 的 表 单 控  件       | type 属性： 指定表单控件的类型。值：  text 、 password 、 radio 、 checkbox 、 hidden 、 submit 、 button 等。name  属性： 指定数据名称	value 属性：对于输入框：指定默认输入的值；对于单选和复选框：实际提交的数据；对于按钮：显示按钮文字。	disabled 属性：  设置表单控件不可用。maxlength 属性：  用于输入框，设置最大可输入长度。checked 属性：  用于单选按钮和复选框，默认选中 | ![img](file:///C:\Users\11612\AppData\Local\Temp\ksohtml11932\wps23.png) |                     |                                                              |
| ![img](file:///C:\Users\11612\AppData\Local\Temp\ksohtml11932\wps24.png) | 文 本 域                          | name  属性： 指定数据名称	rows 属性：  指定默认显示的行数，影响文本域的高度。cols 属性：  指定默认显示的列数，影响文本域的宽度。	disabled 属性：  设置表单控件不可用。 |                                                              |                     |                                                              |
| select                                                       | 下  拉  框                        | name  属性： 指定数据名称	disabled 属性： 设置整个下拉框不可用。 |                                                              |                     |                                                              |
| option                                                       | 下  拉  框  的  选 项             | disabled 属性：  设置拉下选项不可用。value 属性：  该选项事件提交的数据（不指定value，会把标签中的内容作为提交数据）	selected 属性：  默认选中。 |                                                              |                     |                                                              |
| button                                                       | 按 钮                             | disabled 属性：  设置按钮不可用。	type 属性：  设置按钮的类型，值： | ![img](file:///C:\Users\11612\AppData\Local\Temp\ksohtml11932\wps25.png) | （默认）、 reset 、 | ![img](file:///C:\Users\11612\AppData\Local\Temp\ksohtml11932\wps26.png) |
| ![img](file:///C:\Users\11612\AppData\Local\Temp\ksohtml11932\wps27.png) | 与  表 单 控  件  做 关 联        | for 属性： 值与要关联的表单控件的ID值相同。                  |                                                              |                     |                                                              |
| fieldset                                                     | 表 单 边  框                      |                                                              |                                                              |                     |                                                              |

### 框架标签：

| ***\*标签名\**** | ***\*功能和语义\****          | ***\*属性\****                                               | ***\*单\**** ***\*/\**** ***\*双标\**** ***\*签\**** |
| ---------------- | ----------------------------- | ------------------------------------------------------------ | ---------------------------------------------------- |
| iframe           | 框架（在网页中嵌入其他 文件） | name ：框架名字，可以与 target 属 性配合。	width ： 框架的宽。	height ： 框架的高度。		frameborder ：是否显示边框，值：  0 或者1。 | 双                                                   |

1. iframe 标签的实际应用：
   1. 在网页中嵌入广告。
   2. 与超链接或表单的 target 配合，展示不同的内容。

### HTML实体：

1. 字符实体由三部分组成：  

   1. 一个 & 
   2.  一个实体名称（或者一个 # 和 一个实体编号）
   3. 最后加上一 个分号 ; 

2. 常见字符实体总结：

   |             | ***\*描述\****                                  | ***\*实体名称\****                                           | ***\*实体编号\**** |
   | ----------- | ----------------------------------------------- | ------------------------------------------------------------ | ------------------ |
   |             | ***\*空格\****                                  | ![img](file:///C:\Users\11612\AppData\Local\Temp\ksohtml15652\wps1.png)![img](file:///C:\Users\11612\AppData\Local\Temp\ksohtml15652\wps2.jpg) |                    |
   | ***\*<\**** | ***\*小于号\****                                | ![img](file:///C:\Users\11612\AppData\Local\Temp\ksohtml15652\wps3.png)![img](file:///C:\Users\11612\AppData\Local\Temp\ksohtml15652\wps4.jpg) | ***\*<\****        |
   | ***\*>\**** | ***\*大于号\****                                | ![img](file:///C:\Users\11612\AppData\Local\Temp\ksohtml15652\wps5.png)![img](file:///C:\Users\11612\AppData\Local\Temp\ksohtml15652\wps6.jpg) | ***\*>\****        |
   | ***\*&\**** | ***\*和号\****                                  | ![img](file:///C:\Users\11612\AppData\Local\Temp\ksohtml15652\wps7.png)![img](file:///C:\Users\11612\AppData\Local\Temp\ksohtml15652\wps8.jpg) | ***\*&\****        |
   | "           | 引号                                            | "                                                            | "                  |
   | ´           | 反引号                                          | ´                                                            | ´                  |
   | ￠          | 分（ cent）                                     | ¢                                                            | ¢                  |
   | £           | 镑（pound）                                     | £ ;                                                          | £                  |
   | ***\*¥\**** | ***\*元（\*******\*yen\*******\*）\****         | ![img](file:///C:\Users\11612\AppData\Local\Temp\ksohtml15652\wps9.png)![img](file:///C:\Users\11612\AppData\Local\Temp\ksohtml15652\wps10.jpg) | ***\*¥\****        |
   | €           | 欧元（ euro）                                   | €                                                            | €                  |
   | ***\*©\**** | ***\*版权（\*******\*copyright\*******\*）\**** | ![img](file:///C:\Users\11612\AppData\Local\Temp\ksohtml15652\wps11.png)![img](file:///C:\Users\11612\AppData\Local\Temp\ksohtml15652\wps12.jpg) | ***\*©\****        |
   | ®           | 注册商标                                        | ®                                                            | ®                  |
   | ™           | 商标                                            | ™                                                            | ™                  |
   | ***\*×\**** | ***\*乘号\****                                  | ![img](file:///C:\Users\11612\AppData\Local\Temp\ksohtml15652\wps13.png)![img](file:///C:\Users\11612\AppData\Local\Temp\ksohtml15652\wps14.jpg) | ***\*×\****        |
   | ***\*÷\**** | ***\*除号\****                                  | ![img](file:///C:\Users\11612\AppData\Local\Temp\ksohtml15652\wps15.png)![img](file:///C:\Users\11612\AppData\Local\Temp\ksohtml15652\wps16.jpg) | ***\*÷\****        |

###  HTML全局属性：

1. 常用的全局属性：

   | ***\*属性名\****                                             | ***\*含义\****                                               |                                                              |
   | ------------------------------------------------------------ | ------------------------------------------------------------ | ------------------------------------------------------------ |
   | ![img](file:///C:\Users\11612\AppData\Local\Temp\ksohtml15652\wps17.png) | 给标签指定唯一标识，注意：  id 是不能重复的。作用：可以让 label 标签与表单控件相关联；也可以与 CSS 、 JavaScript 配合使 用，。 |                                                              |
   | class                                                        | 给标签指定类名，随后通过 CSS 就可以给标签设置样式。          |                                                              |
   | style                                                        | 给标签设置 CSS 样式。                                        |                                                              |
   | ![img](file:///C:\Users\11612\AppData\Local\Temp\ksohtml15652\wps18.png) | 内容的方向，值: ltr 、                                       | ![img](file:///C:\Users\11612\AppData\Local\Temp\ksohtml15652\wps19.png) |
   | title                                                        | 给标签设置一个文字提示，  一般超链接和图片用得比较多。       |                                                              |
   | lang                                                         | 给标签指定语言，具体规范和可选值请参考【10. HTML 设置语言】。 |                                                              |

### meta元信息：

1. 配置字符编码：

   `<meta  charset= "utf-8 ">`

2. 针对 IE 浏览器的兼容性配置

   `<meta  http-equiv= "X-UA-Compatible "  content= "IE=edge ">`

3. 针对移动端的配置

   `<meta  name= "viewport "  content= "width=device-width ,  initial-scale=1 .0 ">`

4. 配置网页关键字

   `<meta  name= "keywords "  content= "8-12个以英文逗号隔开的单词/词语">`

5. 配置网页描述信息

   `<meta  name= "description "  content= "80字以内的一段话，与网站内容相关">`

6. 针对搜索引擎爬虫配置：

   `<meta  name= " robots "  content= "此处可选值见下表">`

   | ***\*值\**** | ***\*描述\****                     |              |
   | ------------ | ---------------------------------- | ------------ |
   | index        | 允许搜索爬虫索引此页面。           |              |
   | noindex      | 要求搜索爬虫不索引此页面。         |              |
   | follow       | 允许搜索爬虫跟随此页面上的链接。   |              |
   | nofollow     | 要求搜索爬虫不跟随此页面上的链接。 |              |
   | all          | 与 index ,  follow 等价            |              |
   | none         | 与 noindex ,  nofollow 等价        |              |
   | noarchive    | 要求搜索引擎不缓存页面内容。       |              |
   | nocache      | noarchive                          | 的替代名称。 |

7. 配置网页作者：

   `<meta  name= "author "  content= "tony ">`

8.  配置网页生成工具

   ` <meta  name= "generator "  content= "Visual  Studio  Code ">

   `

9. 配置定义网页版权信息：

   `<meta  name= "copyright "  content= "2023-2027©版权所有">`

10. 配置网页自动刷新

    `<meta  http-equiv= " refresh "  content= "10;url=http://www .baidu .com ">`





















