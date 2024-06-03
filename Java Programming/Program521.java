import java.util.*;

class Program521
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string : ");
        String str = sobj.nextLine();
    
        System.out.println("Enter the word that we want to search : ");
        String Word = sobj.nextLine();

        Word = Word.trim();
        str = str.trim();

        str = str.replaceAll("\\s+"," ");

        str = str.replaceAll(Word,"");
        str = str.trim();
        
        str = str.replaceAll("\\s+"," ");

        System.out.println("Updated string is : "+str);
    }
}