import java.io.*;

class ReadFile
{
    public static void main(String arg[]) 
    {
        try
        {
            FileInputStream fobj = new FileInputStream("PPA.txt");
            int i = 0;

            while((i = fobj.read()) != -1)
            {
                System.out.print((char)i);
            }
            System.out.println();
        }
        catch(Exception obj)
        {}
    }
}