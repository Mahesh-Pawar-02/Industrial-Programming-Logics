i = 1

def DisplayR(No):
    global i

    if(No >= 1):
        print(No)
        No = No - 1
        DisplayR(No)
    
def main():
    print("Enter the number : ")
    Value = int(input())

    DisplayR(Value)
    
if __name__ == "__main__":
    main()