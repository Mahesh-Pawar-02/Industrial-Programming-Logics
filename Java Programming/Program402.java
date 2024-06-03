import java.util.*;
import LB.Matrix;

class MyMatrix extends Matrix
{
    public MyMatrix(int A, int B)
    {
        super(A,B);
    }

    public int Frequency(int iNo)
    {
        int i = 0, j = 0;
        int iFrequency = 0;

        for(i = 0 ; i < Arr.length; i++)
        {
            for(j = 0 ; j < Arr[i].length; j++)
            {
                if(Arr[i][j] == iNo)
                {
                    iFrequency++;
                }
            }
        }
        return iFrequency;
    }
}

class Program402
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iRow = 0, iCol = 0, iRet = 0;

        System.out.println("Enter number of rows : ");
        iRow = sobj.nextInt();

        System.out.println("Enter number of columns : ");
        iCol = sobj.nextInt();
        
        MyMatrix mobj = new MyMatrix(iRow,iCol);

        mobj.Accept();
        mobj.Display();

        int iValue = 0;

        System.out.println("Enter the number that you want to search : ");
        iValue = sobj.nextInt();

        // Function calls
        iRet = mobj.Frequency(iValue);

        System.out.println("Frequency is : "+iRet);

        mobj = null;
        System.gc();
    }
}