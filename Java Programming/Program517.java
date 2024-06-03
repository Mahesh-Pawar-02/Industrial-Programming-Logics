import java.util.*;

class Program517
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string : ");
        String str = sobj.nextLine();
    
        str = str.trim();

        str = str.replaceAll("\\s+"," ");

        String Arr[] = str.split(" ");

        int iCnt = 0;
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            System.out.println("Word is : "+ Arr[iCnt] + " having length : "+ Arr[iCnt].length());
        }

    }
}