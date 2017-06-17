cat $1 |  grep -i "nicolas\tbomber" | cut -f3 | grep -i -v "san*"
