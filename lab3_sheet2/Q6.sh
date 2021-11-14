count=0
avg=0
while [ 0 ]
do
while [ 0 ]
do
echo "Enter a positive integer:"
read number
if [ $number -lt 0 ]
then
   echo Error,
else
  break
fi
done
avg=$(( $avg + $number ))
if [ $number -eq 0 ]
then
     break
else
count=$(( $count + 1 ))
fi
done
if [ $avg -eq 0 ]
then
    echo "NO AVERAGE"
else
avg=`echo "scale=2;$avg / $count" | bc`
   echo "Averag=" $avg
fi

