#!/usr/bin/env bash

i=0
while ./return_code_demo.sh >> output.log 2>> error.log; [ $? -ne 1 ]
do
    ((i++))
done
echo "共循环 $i 次，脚本返回 1，退出"
