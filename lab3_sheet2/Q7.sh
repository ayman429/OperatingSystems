echo "Enter a number:"
read number
reverse=0
count=0
sum=0
while [ $(( $number % 10 )) -ne 0 ]
do
reverse=$(( $number % 10 ))
sum=$(( $sum + $reverse ))
if [ $count -ne 0 ]
then
y=$(( $z + $reverse ))
reverse=$y
fi
reverse=$(( $reverse * 10 ))
z=$reverse
count=$(( $count + 1 ))
x=$(( $number / 10 ))
number=$x
done
avg=$(( $sum / $count ))
echo "reverse: "$(( $z / 10 ))
echo "sum of digits: "$sum
echo "average of digits: "$avg
