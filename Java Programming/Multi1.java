class Demo extends Thread
{
    public void run()
    {
        System.out.println("Thread is running...");
    }
}
class Multi1
{
    public static void main(String Arg[])
    {
        System.out.println("Inside main thread...");

        Demo obj1 = new Demo();
        Demo obj2 = new Demo();

        obj1.start();
        obj2.start();
    }
}