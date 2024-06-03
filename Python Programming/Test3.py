def Display(Cnt):
    i = 0

    if(Cnt <= 0):
        print("Invalid input")
        return
        
    for i in range(Cnt):
        print("Jay Ganesh", end = " ")

def main():
    print("Please enter the frequency : ")
    No = int(input())
    Display(No)

if __name__ == "__main__":
    main()