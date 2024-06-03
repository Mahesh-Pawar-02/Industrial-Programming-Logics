import java.util.*;
import java.io.*;

class Program321
{
    public static void main(String arg[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);
        boolean bret = false;

        System.out.println("Enter the name of Directory : ");
        String DirectoryName = sobj.nextLine();

        System.out.println("Enter the name of packed file that you want to create : ");
        String PackedFile = sobj.nextLine();

        File fobjPack = new File(PackedFile);

        bret = fobjPack.createNewFile();
        if(bret == false)
        {
            System.out.println("Unable to create packed file...");
            return;
        }

        File fobj = new File(DirectoryName);

        bret = fobj.isDirectory();
        if(bret == true)
        {
            System.out.println("Directory is present");

            File Arr[] = fobj.listFiles();
            System.out.println("Number of files in the directory are : "+Arr.length);

            for(int i = 0; i < Arr.length; i++)
            {
                System.out.println("File name : "+ Arr[i].getName() + " File size : "+Arr[i].length());
            }
        }
        else 
        {
            System.out.println("There is no such directory");
        }
    }
}
