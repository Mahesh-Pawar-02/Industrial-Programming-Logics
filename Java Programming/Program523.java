import java.util.*;

class Program523
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string : ");
        String str = sobj.nextLine();
    
        str = str.trim();
        str = str.replaceAll("\\s+"," ");

        String Arr[] = str.split(" ");

        StringBuffer output = new StringBuffer();

        StringBuffer word = null;

        int iCnt = 0;
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            word = new StringBuffer(Arr[iCnt]);
            output.append(word.reverse()).append(" ");
        }

        System.out.println(output);
    }
}