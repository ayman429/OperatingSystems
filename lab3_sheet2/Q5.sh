echo "Enter a number: "
read num
m=$num/2
flag=0
for (( i=2;i<=m;i++ ))
do
     if [ $(( $num % $i )) -eq 0  ]
     then
           echo "number is not prime"
           flag=1
           break 
     fi
done
if [ $flag -eq 0 ]
then
echo "number is prime"
fi
