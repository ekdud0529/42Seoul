cat /etc/passwd | awk -F: '{print $1}' | sort -r | grep -v '^#' | tr '\n' ','
