def Display(Cnt):
    i = 0

    if(Cnt <= 0):
        print("Invalid input")
        return
        
    while(i < Cnt):
        print("Jay Ganesh", end = " ")
        i = i + 1

def main():
    print("Please enter the frequency : ")
    No = int(input())
    Display(No)

if __name__ == "__main__":
    main()