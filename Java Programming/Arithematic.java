package Marvellous;

public class Arithematic
{
    public int iValeue1;
    public int iValeue2;

    public Arithematic(int A, int B)
    {
        this.iValeue1 = A;
        this.iValeue2 = B;
    }

    public int Addition()
    {
        int iSum = 0;
        iSum = this.iValeue1 + this.iValeue2;
        return iSum;
    }
}
