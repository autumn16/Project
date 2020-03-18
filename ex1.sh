read -p "" name
if [ -z "$name" ]
then
      echo "input is NULL"
fi
#line 1, 
OUTPUT="$(lshw)"
cat > ex1.txt << EOL
${name} 
${OUTPUT}
EOL


