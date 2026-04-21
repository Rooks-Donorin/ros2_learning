#!/bin/bash

echo "Hello $USER"
echo "today is: $(date)"
echo "Your Linux kernel version is: $(uname -r)"
echo ""
echo "Disk space remaining:"
df -h ~ | grep -v "Filesystem"
echo ""
echo "All currently running processes that contain the word 'bash' are:"
ps aux | grep bash
