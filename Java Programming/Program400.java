import java.util.*;
import LB.Matrix;

class MyMatrix extends Matrix
{
    public MyMatrix(int A, int B)
    {
        super(A,B);
    }

    public void MaximumRow()
    {
        int i = 0, j = 0, iMax = 0;

        for(i = 0 ; i < Arr.length; i++)
        {
            iMax = Arr[i][0];

            for(j = 0 ; j < Arr[i].length; j++)
            {
                if(Arr[i][j] > iMax)
                {
                    iMax = Arr[i][j];
                }
            }

            System.out.println("Maximum element from Row no "+(i+1)+" is : "+iMax);
        }
    }
}

class Program400
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

        // Function calls
        mobj.MaximumRow();

        mobj = null;
        System.gc();
    }
}