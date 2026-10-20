## Arguments and Globs

2.
```
ls -alh --sort=time --color=always 
```

3.
`printenv` 是外部程序，打印的是当前 shell 传递给子进程的环境变量；
`export` 是 shell 内置命令，列出的是当前 shell 中所有被标记为 export 的变量


## Environment Variables

新建函数文件，
```
polo() {
    cd "$(cat "$HOME/.working_dir")" || return 1
}

macro() {
    pwd > "$HOME/.working_dir"
}
```

并在 `.bashrc` 中启用
```
source "$HOME/.local/functions/macro_and_polo.sh"
```

## Signals and Job Control
1. 
```
sleep 10000
```

`Ctrl-Z` 挂起，输入 `bg` 继续在后台执行

```
pgrep -lf "sleep 10000"
pkill -f "sleep 10000"
```

2.
```bash
pidwait() {
    local pid=$1
    # 轮询直到进程消失
    while kill -0 "$pid" 2>/dev/null; do
        sleep 1
    done
}
```

```
sleep 60 &
pidwait &!
```

## Tmux

![tmux tutorial](https://hamvocke.com/blog/a-quick-and-easy-guide-to-tmux/)
![customize tmux](https://hamvocke.com/blog/a-guide-to-customizing-your-tmux-conf/)


