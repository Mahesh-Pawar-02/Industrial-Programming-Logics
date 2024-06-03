import java.util.*;
import LB.Matrix;

class MyMatrix extends Matrix
{
    public MyMatrix(int A, int B)
    {
        super(A,B);
    }

    public void UpdateMatrix()
    {
        int i = 0, j = 0;

        for(i = 0 ; i < Arr.length; i++)
        {
            for(j = 0 ; j < Arr[i].length; j++)
            {
                if((Arr[i][j] % 2) != 0)
                {
                    Arr[i][j] = (Arr[i][j]) + 1;
                }
            }
        }
    }
}

class Program405
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
        mobj.UpdateMatrix();

        System.out.println("Updated matrix is : ");
        mobj.Display();

        mobj = null;
        System.gc();
    }
}