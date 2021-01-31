# 文件系统库

文件，路径，分隔符，名字空间起别名(不是类)。

## 路径

- 构造函数：传入字符串
- 追加：`append`添加分隔符，`concat`不添加
- 清除：`clear`
- 删除路径中的指定文件名：`remove_filename`
- 替换路径中的指定文件名：`replace_filename`
- 拆分根名：`root_name`
- 拆分根目录：`rood_directory`
- 父目录：`parent_path`
- 文件名：`filename`
- 不含扩展名的文件名：`stem`
- 扩展名：`extension`
- 检查路径是否为空：`empty`
- 判断路径是否有对应元素：`has_xxx`
- 连接：`p/"Users"/"lanling"` （重载）
- 流输入与流输出：`<<>>`
- 文件类型，大小，状态信息等
- 删除，拷贝，重命名，移动等