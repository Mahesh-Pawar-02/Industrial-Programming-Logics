import java.util.*;

class Program527
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string : ");
        String str = sobj.nextLine();
        str = str.replaceAll("\\s","");

        str = str.toLowerCase();

        char Arr[] = str.toCharArray();
        int iCnt = 0, Frequency = 0;

        HashMap <Character, Integer> hobj = new HashMap<>();

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(hobj.containsKey(Arr[iCnt]))
            {
                Frequency = hobj.get(Arr[iCnt]);
                hobj.put(Arr[iCnt], Frequency+1);
            }
            else
            {
                hobj.put(Arr[iCnt],1);
            }
        }

        System.out.println(hobj);
    }
}