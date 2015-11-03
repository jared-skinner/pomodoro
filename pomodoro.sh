#! /bin/bash

#this script is used as a timer for the pomororo method.

count="$1"

for (( i = 1; i <= $count; i++))
do
	notify-send "start working!"
	sleep 1500

	if (( i < count ))
	then
		notify-send "break! - 5 minutes remaining"

		sleep 60
		notify-send "4 minutes remaining"

		sleep 60
		notify-send "3 minutes remaining"

		sleep 60
		notify-send "2 minutes remaining"

		sleep 60
		notify-send "1 minutes remaining"

		sleep 60
		notify-send "back to work!"
	fi
done
