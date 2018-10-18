#!/bin/bash

#eval cmd vs "cmd"

ls /lgw > 0.log 2>&1

cmd="ls /lgw > 0.log 2>&1"
#"ls /lgw > 0.log 2>&1"
#$cmd
eval $cmd

