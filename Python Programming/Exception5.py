
def main():
    Ans = 0

    try:
        print("Enter first numebr : ")
        No1 = int(input())

        print("Enter second numebr : ")
        No2 = int(input())

        Ans = No1 / No2
    
    except ZeroDivisionError as zobj:
        print("Exception occured ",zobj)
    
    except ValueError as vobj:
        print("Exception occured : ",vobj)
        
    except Exception as eobj:
        print("Exception occured ",eobj)

    finally:
        print("Inside finally block")

    print("Division is : ",Ans)
    
if __name__ == "__main__":
    main()