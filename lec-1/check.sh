#!/usr/bin/sh
set -x

if [ -f ~/tmp/test.txt ]
then
    echo "File exists."
else
    echo "File doesn't exist."
fi
