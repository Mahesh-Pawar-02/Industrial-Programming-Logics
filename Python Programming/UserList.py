
def main():
    print("Enter nunmber of elements that you eant to insert in the list : ")
    size = int(input())

    Arr = list()

    print("Enter the elements : ")

    for i in range(size):
        no = int(input())
        Arr.append(no)

    print("Entered elements are : ",Arr)

if __name__ == "__main__":
    main()