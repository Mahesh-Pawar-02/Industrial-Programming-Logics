import java.util.*;
import java.io.*;

class Program353
{
    public static void main(String arg[]) throws Exception
    {
        byte Header[] = new byte[100];
        int FileSize = 0;
        String str = null;
        Scanner sobj = new Scanner(System.in);
        int iRet = 0;

        System.out.println("Enter the name of packed file that you want to unpack : ");
        String PackedFile = sobj.nextLine();

        File fobj = new File(PackedFile);
        FileInputStream fiobj = new FileInputStream(fobj);

        while((iRet = fiobj.read(Header,0,100)) > 0)
        {
            String Hstr = new String(Header);

            str = Hstr.trim();
            String Tokens[] = str.split(" ");

            File NewFile = new File(Tokens[0]);
            NewFile.createNewFile();

            FileSize = Integer.parseInt(Tokens[1]);

            byte Buffer[] = new byte[FileSize];
            fiobj.read(Buffer,0,FileSize);

            FileOutputStream foobj = new FileOutputStream(NewFile);
            foobj.write(Buffer,0,FileSize);
        }
    }
}