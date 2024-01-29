import java.util.*;
import java.io.*;

class Assignment41 
{
    public static void main(String args[]) 
    {
        try {
            Scanner sobj = new Scanner(System.in);

            System.out.println("Enter the name of the file: ");
            String fileName = sobj.nextLine();

            FileInputStream fiobj = new FileInputStream(fileName);

            System.out.println("File is successfully opened.");

            fiobj.close(); 
            sobj.close();
        } 
        catch (FileNotFoundException obj) 
        {
            System.out.println("Unable to open file: " + obj.getMessage());
        } 
        catch (IOException obj) 
        {
            System.out.println("Error: " + obj.getMessage());
        }
    }
}
