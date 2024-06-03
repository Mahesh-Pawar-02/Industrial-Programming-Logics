import java.util.*;
import java.io.*;

class Program319
{
    public static void main(String arg[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the name of Directory : ");
        String DirectoryName = sobj.nextLine();

        boolean bret = false;
        File fobj = new File(DirectoryName);

        bret = fobj.isDirectory();
        if(bret == true)
        {
            System.out.println("Directory is present");

            File Arr[] = fobj.listFiles();
            System.out.println("Number of files in the directory are : "+Arr.length);

            for(int i = 0; i < Arr.length; i++)
            {
                System.out.println(Arr[i].getName());
            }
        }
        else 
        {
            System.out.println("There is no such directory");
        }
    }
}
