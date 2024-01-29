import java.util.*;
import java.io.*;

class Assignment41
{
    public static void main(String arg[])  
    {
       Scanner sobj = new Scanner(System.in);

       System.out.println("Enter the name of file : ");
       String FileName = sobj.nextLine();

       try
       {
            File fobj = new File(FileName);

            boolean bret = false;
            bret = fobj.exists();

            if(bret)     // if(bret == true)
            {
               System.out.println("Name of Size is : "+fobj.length()); 
            }
       }
       catch(Exception obj)
       {
            System.out.println("Exception occured");
       }
       
    }
}