cat /etc/passwd | cut -d : -f 1 | sed '/^#/d' | awk 'NR%2==0' | rev | sort -r | awk "NR >= $FT_LINE1 && NR <= $FT_LINE2" | tr '\n' ',' | rev | cut -c 2- | rev | sed 's/.$/./g' | tr -d '\n' 
