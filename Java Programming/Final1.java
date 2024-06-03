class Demo
{
    public int A;
    public final int B;
    Demo()
    {
        A = 11;
        B = 21;
    }
    Demo(int i, int j)
    {
        A = i;
        B = j;
    }  
}

class Final1
{
    public static void main(String arg[])
    {
        Demo dobj = new Demo();
        System.out.println("Value of A : "+dobj.A);
        System.out.println("Value of B : "+dobj.B);
        dobj.A++;
        //dobj.B++;

        Demo dobj2 = new Demo(51,101);
        System.out.println("Value of A : "+dobj2.A);
        System.out.println("Value of B : "+dobj2.B);

    }
}