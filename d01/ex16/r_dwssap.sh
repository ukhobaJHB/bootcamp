export FT_LINE1=3
export FT_LINE2=16

cat /etc/passwd | sed '/^#/d' | sed g\;n | cut -d':' -f1 | rev | sort -r | sed -n "$FT_LINE1,${FT_LINE2}p" | tr '\n' ',' | sed 's/,/, /g' | sed 's/.$//' | sed 's/.$//' | sed 's/$/./'
