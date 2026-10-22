## 1. 调试 Debug

1. rr 调试器，附着在编译好的程序上. 优势：可以反向调试 `reverse-continue`，基础用法与 gdb 一样

2. strace: 查看进程所进行的系统调用

3. eBPF (extended Berkeley Packet Filter) 允许在内核运行沙箱程序. bpftrace 将 eBPF 追踪简化，只需数条命令便可进行监控

4. topdump: 网络监管

5. gcc 编译选项

    ```
    gcc -fsanitize=address
    ```

    address 可以替换为 memory, thread

6. valgrind: 精确模拟 CPU，逐条解释每行汇编代码



## 2. 性能分析 Profiling

1. time
2. hyperfine: 可以一次执行多个程序，可以执行多次
3. htop
4. perf: 采样分析器，观察程序的运行时间在各个部分的分布