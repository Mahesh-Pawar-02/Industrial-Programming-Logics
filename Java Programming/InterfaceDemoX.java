// One class can implements multiple interfaces
interface Demo
{
    void fun();
}

interface Hello
{
    void gun();
}

class Marvellous implements Demo, Hello
{
    public void fun()
    {}
    public void gun()
    {}
}