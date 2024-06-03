import psutil
import time

def CreateLog(FileName = "Marvellous.log"):
    fd = open(FileName, "w")
    separator = "-"*70

    fd.write(separator + "\n")
    fd.write("Marvellous Process Log"+ "\n")
    fd.write("Log file created at : "+time.ctime() + "\n")
    fd.write(separator + "\n")
    
    Arr = GetProcessInfo()

    for data in Arr:
        fd.write("%s \n" %data)
    
    fd.write(separator + "\n")

    fd.close()

def GetProcessInfo():
    listprocess = []    
    for proc in psutil.process_iter(['pid', 'name', 'username']):
        listprocess.append(proc.info)
    
    return listprocess
    
def main():
    CreateLog()

if __name__ == "__main__":
    main()