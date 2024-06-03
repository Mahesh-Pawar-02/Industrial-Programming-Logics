def Addition(Data):
    Sum = 0

    for no in Data:
        Sum = Sum + no
    
    return Sum

def main():
    print("Enter nunmber of elements that you eant to insert in the list : ")
    size = int(input())

    Arr = list()
    print("Enter the elements : ")

    for i in range(size):
        no = int(input())
        Arr.append(no)

    print("Entered elements are : ",Arr)

    Result = Addition(Arr)
    print("Sumation of all elements : ",Result)
    
if __name__ == "__main__":
    main()