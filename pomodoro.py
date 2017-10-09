
import argparse
import time
import winsound


def parse_args():
    parser = argparse.ArgumentParser(description='pomodoro', prog="pomodoro.py")
    parser.add_argument('-v', '--version', action='version', version='%(prog)s 0.0.1.0')
    parser.add_argument('-f', help='A pomodoro timer for better work efficiency.')
    parser.add_argument('-c', help='The number of cycles to run for.  If not provided it will run indefinitely.')
    parser.add_argument('-w', default='20', help='The number of minutes to work for.')
    parser.add_argument('-b', default='5', help='The number of minutes to take a break for.')
    args = parser.parse_args()
    return args


def countdown(heading, t):
    while t:
        mins, secs = divmod(t, 60)
        timeformat = '{:02d}:{:02d}'.format(mins, secs)
        print(heading + " " + timeformat, end='\r')
        time.sleep(1)
        t -= 1

def pom_cycle(work_time, break_time):
    winsound.Beep(440, 500)
    heading = "Get to work! "
    countdown(heading, work_time * 60)
    winsound.Beep(440, 500)
    heading = "Take a break!"
    countdown(heading, break_time * 60)


def main():
    args = parse_args()

    print("Starting Timer!")

    work_time = int(args.w)
    break_time = int(args.b)

    if args.c is not None:
        count = int(args.c)
        for i in range(count):
            pom_cycle(work_time, break_time)
    else:
        while True:
            pom_cycle(work_time, break_time)


if __name__ == "__main__":
    main()
