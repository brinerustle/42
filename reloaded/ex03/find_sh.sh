find . -name "*.sh" | awk -F "." '/.sh/{ print $2 }' | awk -F "/" '{ print $2 }'
