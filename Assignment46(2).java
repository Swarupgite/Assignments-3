package LB;
import java.util.*;

class Assignment46 
{
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the number of rows: ");
        int rows = scanner.nextInt();

        System.out.print("Enter the number of columns: ");
        int columns = scanner.nextInt();

        Matrix matrixObject = new Matrix(rows, columns);

        matrixObject.Accept();

        System.out.println("Entered matrix:");
        matrixObject.Display();

        System.out.print("Enter the number to find its frequency: ");
        int numberToFind = scanner.nextInt();

        int frequency = AddDiagonal(matrixObject.Arr, numberToFind);
        System.out.println("Frequency of " + numberToFind + ": " + frequency);

        scanner.close();
    }

    public int AddDiagonal(int[][] matrix, int number) 
    {
        int frequency = 0;

        for (int[] row : matrix) 
        {
            for (int element : row) 
            {
                if (element == number) 
                {
                    frequency++;
                }
            }
        }

        return frequency;
    }
}
