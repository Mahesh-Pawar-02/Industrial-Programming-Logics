import java.util.*;
import java.io.*;

class Program326
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

            String Header = null;

            // To write the data into packed file
            FileOutputStream fcombine = new FileOutputStream(PackedFile);
            int iRet = 0;
            byte Buffer[] = new byte[1024];
            
            // Travel Directory
            for(int i = 0; i < Arr.length; i++)
            {
                // Create header
                Header = Arr[i].getName() + " " + Arr[i].length();

                // Add extra white spaces at the end of header
                for(int j = Header.length(); j < 100; j++)
                {
                    Header = Header + " ";
                }

                // Convert string header into byte array
                byte hArr[] = Header.getBytes();

                // Write header into packed file
                fcombine.write(hArr,0,100);

                // To read the file from duirectory
                FileInputStream fiobj = new FileInputStream(Arr[i]);

                // write the data into packed file after header
                while((iRet = fiobj.read(Buffer)) != -1 )
                {
                    fcombine.write(Buffer,0,iRet);
                }
                fiobj.close();
            }
        }
        else 
        {
            System.out.println("There is no such directory");
        }
    }
}
