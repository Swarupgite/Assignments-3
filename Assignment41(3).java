import java.util.*;
import java.io.*;

class Assignment41 
{
    public static void main(String args[]) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the name of the file: ");
        String fileName = sobj.nextLine();

        try (BufferedReader reader = new BufferedReader(new FileReader(fileName))) 
        {
            String line;

            System.out.println("File Contents:");

            while ((line = reader.readLine()) != null) 
            {
                System.out.println(line);
            }
        } catch (IOException e) 
        {
            System.out.println("Error reading the file: " + e.getMessage());
        }

        sobj.close();
    }
}
