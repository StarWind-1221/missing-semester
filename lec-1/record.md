5. 
```
ls /nonexistent /tmp 1>output-redirect.txt 2>error-redirect.txt 
```

6.
```
[ -d /tmp/mydir ] || mkdir /tmp/mydir
```

13.
```
find ~ -type f -name '*.*' | awk -F. '{print $NF}' | sort | uniq -c | sort -rn | head -5
 ```

14.
```
find ~/ -type f -name "*.sh" | xargs wc -l
```

15.
```
curl -s https://missing.csail.mit.edu/ | grep -E '<a href="/2026/[^"]+'
```

16.
```
curl -s https://microsoftedge.github.io/Demos/json-dummy-data/64KB.json | jq '.[] | select (.version>6) | .name'
```

17.
```
printf 'a 50 x\nb 150 y\nc 200 z\n' | awk 'BEGIN{OFS=" "} $2 > 100 {print $3, $2, $1}'
```
