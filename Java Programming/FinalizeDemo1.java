class Employee
{
    public String Name;
    public int Salary;
    public int Age;
    public String Address;

    Employee(String str, int amount, int A, String addr)
    {
        this.Name = str;
        this.Salary = amount;
        this.Age = A;
        this.Address = addr;
    }

    protected void finalize()
    {
        System.out.println("Inside Finalize method...");
    }

    void Display()
    {
        System.out.println("Emplyee name : "+this.Name);
        System.out.println("Emplyee Age : "+this.Age); 
        System.out.println("Emplyee Salary : "+this.Salary);
        System.out.println("Emplyee Address : "+this.Address);                       
    }
}

class FinalizeDemo1
{
    public static void main(String arg[])
    {
        Employee eobj = new Employee("Amit",78000,28,"Karve Road Pune");
        eobj.Display();
        eobj = null;
        
        System.gc();
    }
}