
def CheckEven(A):
    if(A%2 == 0):
        return True
    else:
        return False

def main():
    Ret = CheckEven(10)
    if(Ret == True):
        print("Its even number")
    else:
        print("Its odd number")
        
if __name__ == "__main__":
    main()