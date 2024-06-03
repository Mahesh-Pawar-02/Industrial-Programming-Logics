import os

def main():
    print("Enter the name of file that you want to create : ")
    Fname = input()

    if os.path.exists(Fname):
        print("Unable to create file as file is already existing")

    else:
        open(Fname, "x")
        print("File gets succesfully created")

if __name__ == "__main__":
    main()

# Absolute path : C:/Sagar/Desktop/Python/Automations/Marvellous.txt
# Relative path : Automations/Marvellous.txt