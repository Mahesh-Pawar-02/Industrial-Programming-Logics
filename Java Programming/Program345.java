import java.util.*;
import java.io.*;

class Program345
{
    public static void main(String arg[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter string : ");
        String str = sobj.nextLine();

        str = str.trim();
        str = str.replaceAll("\\s+"," ");
        String words[] = str.split(" ");

        for(String s : words)   // foreach
        {
            System.out.println(s);
        }
    }
}