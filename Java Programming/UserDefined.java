import java.util.*;

class AgeInvalid extends Exception
{
    public AgeInvalid(String str)
    {
        super(str);
    }
}

class UserDefined
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter your age : ");
        int iAge = sobj.nextInt();

        try
        {
            if(iAge < 18)
            {
                AgeInvalid aobj = new AgeInvalid("Your age is below 18");
                throw aobj;
            }
            else
            {
                System.out.println("Login Succesful..");
            }
        }
        catch(AgeInvalid obj)
        {
            System.out.println("Inside catch block");
            System.out.println(obj);
        }
    }
}