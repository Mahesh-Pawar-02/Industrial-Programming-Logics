import java.io.*;
import java.net.*;

class Client
{
    public static void main(String Arg[]) throws Exception
    {
        System.out.println("Client of Marvellous Chat messanger is running...");

        Socket sobj = new Socket("localhost",2100);
        System.out.println("Client is waiting for server to accept the request..");

        PrintStream ps = new PrintStream(sobj.getOutputStream());

        BufferedReader br1 = new BufferedReader(new InputStreamReader(sobj.getInputStream()));
        BufferedReader br2 = new BufferedReader(new InputStreamReader(System.in));

        System.out.println("Marvellous Chat Messanger started...");

        String str1,str2;

        while(!(str1 = br2.readLine()).equals("end"))
        {
            ps.println(str1);
            System.out.println("Enter message for server : ");
            str2 = br1.readLine();
            System.out.println("Server says : "+str2);
        }

        System.out.println("Thank you for using Marvellous chat messanger...");
        sobj.close();
        ps.close();
        br1.close();
        br2.close();
    }
}