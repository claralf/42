#!/bin/sh
ifconfig | grep "eth" | awk '{print$2}'
