#!/bin/bash
max_pid=$(cat /proc/sys/kernel/pid_max)
echo "Max process_id = $max_pid"
