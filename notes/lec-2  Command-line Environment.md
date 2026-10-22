## 1. 通配符 Globbing

`rm *.py`，理解为简化的 正则表达式



## 2. Stream 流式工作

流式工作：众多程序同时运行

```bash
a || b
a && b
```

### 管道操作符

```bash
|
<            # 输入重定向
>  >>        # 输出重定向
```



## 3. 环境变量 (Environment Variables)

create: `foo=bar`

refer: `$foo`

delete: `unset`

默认情况下，只对当前会话(maybe 子会话也可以)



## 4. 返回码 `$?`



## 5. Threads

```
C-c   # 中断
C-z   # 挂起
bg    # 后台运行
jobs  # 列出工作，有数字
fg %1 # 重启工作，引用数字 1
```



