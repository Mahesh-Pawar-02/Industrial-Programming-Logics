import java.util.*;

class Program524
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string : ");
        String str = sobj.nextLine();
        str = str.replaceAll("\\s","");

        str = str.toLowerCase();

        char Arr[] = str.toCharArray();

        int Frequeny[] = new int[26];
        int iCnt = 0;

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            Frequeny[((int)Arr[iCnt]) - 'a']++;
        }
    }
}