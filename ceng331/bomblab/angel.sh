#!/bin/bash
hostname inek31
iptables -t nat -A OUTPUT -p tcp -d 144.122.71.101 --dport 8084  -j DNAT --to-destination 127.0.0.1:1337
