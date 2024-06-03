import java.util.*;

class Program385
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iRow = 0, iCol = 0;

        System.out.println("Enter number of rows : ");
        iRow = sobj.nextInt();

        System.out.println("Enter number of columns : ");
        iCol = sobj.nextInt();
        
        int Arr[][] = new int[iRow][iCol];
        int i = 0, j = 0;

        System.out.println("Enter the elements : ");
        //    1       2        3 
        for(i = 0; i < iRow; i++)   // Outer
        {   //     1        2     3   
            for(j = 0; j < iCol; j++)   // Inner
            {
                Arr[i][j] = sobj.nextInt(); // 4
            }
        }

        System.out.println("Entered elements are : ");
        for(i = 0; i < iRow; i++)
        {
            for(j = 0; j < iCol; j++)
            {
                System.out.print(Arr[i][j]+"\t");
            }
            System.out.println();
        }
    }
}