echo "Enter your gross salary: "
read salary
if [ $salary -ge 2000  ]
then
tax=$(( $salary * 15 / 100 ))
NewSalary=$(( $salary - $tax ))
echo "Your net salary after tax reduction: " $NewSalary

elif [ $salary -ge 1000 -a $salary -lt 2000 ]
then
tax=$(( $salary * 10 / 100 ))
NewSalary=$(( $salary - $tax ))
echo "Your net salary after tax reduction: " $NewSalary
else
echo salary $salary
fi
