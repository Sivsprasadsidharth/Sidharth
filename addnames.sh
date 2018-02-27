if [ $# -ne 2 ]
then
echo "Invalid no. of Arg."
exit
else 
 echo $1 $2
fi

if [ ! -f $1 ]
then
echo "Does not exist"
exit
else
 echo "File exists"
fi

if grep "$2" "$1" 
then
    echo "User already exists"
else 
 echo "$2" >> "$1"
     
fi
