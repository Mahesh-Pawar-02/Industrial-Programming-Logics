import sys
import os
import time

def DirectoryWatcher(DirName):

    flag = os.path.isabs(DirName)

    if (flag == False):
        DirName = os.path.abspath(DirName)
        
    exist = os.path.isdir(DirName)

    if(exist == True):
        for foldername, subfoldername, filename in os.walk(DirName):
            for name in filename:
                print(name)
    else:
        print("There is no such directory")
        
def main():
    print("---------------- Directory Watcher -------------------")

    if(len(sys.argv) == 2):
        if(sys.argv[1] == "--h" or sys.argv[1] == "--H"):
            print("This script is used to perform Directory traversal")
            exit()

        if(sys.argv[1] == "--u" or sys.argv[1] == "--U"):
            print("Usage of the script : ")
            print("Name_Of_File  Name_Of_Directory")
            exit()

        try:
            starttime = time.time()
            DirectoryWatcher(sys.argv[1])
            endtime = time.time()

            print("Time required to execute the script is : ",endtime-starttime)

        except Exception as obj2:
            print("Unable to perform the task due to ", obj2)
            
    else:
        print("Invalid option")
        print("Use --h option to get the help and use --u option to get the usage of application")
        exit()
    
    print("--------- Thank you for using our script -------------")
    print("------------- Marvellous Infosystems -----------------")

if __name__ == "__main__":
    main()

# python DirectoryAutomation.py Study

# sys.argv[0]   DirectoryAutomation.py      
# sys.argv[1]   Study

# len(sys.argv)     2    