import psutil

def DisplayProcess():
    print("List of running processess are : ")

    print("_________________________________________________________")
    
    for proc in psutil.process_iter(['pid', 'name', 'username']):
        print(proc.info)
    
    print("_________________________________________________________")

def main():
    DisplayProcess()

if __name__ == "__main__":
    main()