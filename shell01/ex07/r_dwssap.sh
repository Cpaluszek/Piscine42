#!/bin/bash
cat /etc/passwd | sed -E '/^#/d' | awk 'NR%2!=1' | cut -f1 -d ":" | rev | sort -r | awk 'NR=='$FT_LINE1',NR=='$FT_LINE2'' | tr '\n' ',' | sed 's/.$/./' | tr -d '\n'
