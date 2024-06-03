import java.util.*;

class Program515
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string : ");
        String str = sobj.nextLine();
    
        str = str.trim();

        str = str.replaceAll("\\s+"," ");

        String Arr[] = str.split(" ");

        for(String s : Arr)
        {
            System.out.println(s);
        }

    }
}