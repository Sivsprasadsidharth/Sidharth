 clear
sum=0
echo "Enter a no."
read n
i=0
count=0
while [ $count -le $n ]
do
 sum=`expr $i + $sum`
 i=`expr $i + 2`
count=`expr $count + 1`
done
echo "sum ="$sum

