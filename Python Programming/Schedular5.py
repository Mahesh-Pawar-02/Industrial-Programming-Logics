import datetime
import time
import schedule

def Schedule_Minute():
    print("Schedular executes after each minute : ",datetime.datetime.now())

def Schedule_Hour():
    print("Schedular executes after each hour : ",datetime.datetime.now())

def Schedule_Sunday():
    print("Schedular executes after each Sunday : ",datetime.datetime.now())

def main():
    print("Current time is ", datetime.datetime.now())

    schedule.every(1).minutes.do(Schedule_Minute)
    schedule.every(1).hour.do(Schedule_Hour)
    schedule.every().sunday.do(Schedule_Sunday)


    while True:
        schedule.run_pending()
        time.sleep(1)
        
if __name__ == "__main__":
    main()