echo "Enter a number of seconds: "
read number
hour=$(( $number / 3600 ))
m=$(( $number % 3600 ))
minute=$(( $m / 60 ))
second=$(( m  % 60  ))
echo Equivalent period = $hour:$minute:$second
