import time
import random

def countdown(minutes):
    seconds = minutes * 60
    while seconds > 0:
        mins, secs = divmod(seconds, 60)
        timer = '{:02d}:{:02d}'.format(mins, secs)
        print(timer, end="\r")
        time.sleep(1)
        seconds -= 1
    print("Time's up!")

def main():
    print("欢迎使用专注时钟！")
    while True:
        try:
            minutes = random.randint(1, 10)
            break
        except ValueError:
            print("无效的输入，请重新输入一个整数值。")
    countdown(minutes)

if __name__ == '__main__':
    main()
