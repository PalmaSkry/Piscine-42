find . -type f -name "*.sh" | sed 's/\.sh$//;s#.*/##' | sort -nr #Descending

