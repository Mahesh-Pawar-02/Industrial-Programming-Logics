
class StringDemo
{
    public static void main(String Arg[])
    {
        String str1 = "Hello";
        String str2 = new String("Hello");
        String str3 = "Hello";
        String str4 = "Marvellous";
        String str5 = new String("Hello");
        String str6 = new String("World");
        String str7 = "World";
        String str8 = "World";

        System.out.println("Length of str1 is : "+str1.length());

        System.out.println(str1.toUpperCase());
    }
}