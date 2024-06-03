import java.util.*;
import java.io.*;

class Program316
{
    public static void main(String arg[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the name of source file which is existing : ");
        String SourceFile = sobj.nextLine();

        System.out.println("Enter the name of destination file that we want to create : ");
        String DestFile = sobj.nextLine();

        File fobj = new File(SourceFile);
        if(! fobj.exists())
        {
            System.out.println("Source file is not existing...");
            return;
        }

        File fobj1 = new File(DestFile);
        fobj1.createNewFile();

        FileInputStream fiobj = new FileInputStream(SourceFile);
        FileOutputStream foobj = new FileOutputStream(DestFile);

        byte Buffer[] = new byte[1024];
        int iRet = 0;

        while((iRet = fiobj.read(Buffer)) != -1)
        {
            foobj.write(Buffer,0,iRet);
        } 

        fiobj.close();
        foobj.close();
    }
}
