import os

def main():
    print("Enter the name of file that you want to open : ")
    Fname = input()

    if os.path.exists(Fname):
        fobj = open(Fname, "r")
        print("File is succesfully opened")
        print(fobj)
        
    else:
        print("Unable to open file as file is not present in the current directory")


if __name__ == "__main__":
    main()
