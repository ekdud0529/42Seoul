cat /etc/passwd | awk -F: '{print $1}' | rev | sort -r | grep -v '#' | awk -v l1=$FT_LINE1 -v l2=$FT_LINE2 "NR >= l1 && NR <= l2" | tr '\n' ',' | sed 's/.$/./g' | sed 's/,/, /g' | tr -d "\n"
