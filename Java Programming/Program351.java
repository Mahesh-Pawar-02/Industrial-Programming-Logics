import java.util.*;
import java.io.*;

class Program351
{
    public static void main(String arg[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the name of packed file that you want to unpack : ");
        String PackedFile = sobj.nextLine();

        File fobj = new File(PackedFile);
        FileInputStream fiobj = new FileInputStream(fobj);

        byte Header[] = new byte[100];

        fiobj.read(Header,0,100);
        String Hstr = new String(Header);

        String str = Hstr.trim();
        String Tokens[] = str.split(" ");


        File NewFile = new File(Tokens[0]);
        NewFile.createNewFile();

        int FileSize = Integer.parseInt(Tokens[1]);

        byte Buffer[] = new byte[FileSize];
        fiobj.read(Buffer,0,FileSize);

        FileOutputStream foobj = new FileOutputStream(NewFile);
        foobj.write(Buffer,0,FileSize);
    }
}