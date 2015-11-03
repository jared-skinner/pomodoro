#! /bin/bash
#this script is used as a timer for the pomororo method.

message () 
{
	notify-send "$1"
	echo $1
}

count="$1"
work=25
play=3

work_seconds=$(expr $work \* 60)

if (( $# == 0 ))
then
	echo ""
	echo "usage ./pomodoro.sh <n>"
	echo ""
	echo "where <n> is the number of cycles you wish to run pomodoro"
	echo ""

	exit
fi

message "Start working!"

for (( i = 1; i <= count; i++))
do
	sleep $work_seconds

	if (( i < count ))
	then
		for (( j = 0; j < play; j++))
		do
			left=$(expr $play - $j)
			message "Break: $left minutes remaining."
			sleep 60
		done

		message "Back to work!"
	fi
done



#todo:  add in a count down in the terminal
#!/bin/bash
#sek=60
#echo "$sek Seconds Wait!"
#while [ $sek -ge 1 ]
#do
#   echo -ne "One Moment please $sek ... \r"
#   sleep 1
#   sek=$[$sek-1]
#done
#echo
#echo "ready!"
