import java.util.*;

class Program519
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string : ");
        String str = sobj.nextLine();
    
        str = str.trim();

        str = str.replaceAll("\\s+"," ");

        String Arr[] = str.split(" ");
        
        int iMax = 0;
        String MaxStr = "";
        int iCnt = 0;
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt].length() >= iMax)
            {
                iMax = Arr[iCnt].length();
                MaxStr = Arr[iCnt];
            }
        }

        System.out.println("Largest word is : "+MaxStr+" having length : "+iMax);
    }
}