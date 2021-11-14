echo "Enter a number: "
read num
echo "Enter a power: "
read power
Result=1
for(( i=0;i<power;i++ ))
do
    Result=$(( $Result * $num ))
done
echo "Result=" $Result
