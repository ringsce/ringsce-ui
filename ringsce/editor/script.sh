# Rename all *.txt to *.text
for file in *.html; do 
    mv -- "$file" "${file%.html}.php"
done
