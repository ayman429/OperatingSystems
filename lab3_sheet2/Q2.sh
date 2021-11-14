echo "Enter a temperature in degrees Celsius:"
read temp
t=$(( $temp * 9 / 5 ))
t=$(( $t + 32 ))
echo "temperature in degress Fahrenheit: "$t
