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

        int iRet = MaxDiagonal(matrixObject.Arr);
        System.out.println("Largest number from both diagonals: " + iRet);

        scanner.close();
    }

    public int MaxDiagonal(int[][] matrix)
    {
        int max = Integer.MIN_VALUE;

        for (int i = 0; i < matrix.length; i++) 
        {
            if (matrix[i][i] > max) 
            {
                max = matrix[i][i];
            }
        }

        for (int i = 0; i < matrix.length; i++) 
        {
            if (matrix[i][matrix.length - 1 - i] > max) 
            {
                max = matrix[i][matrix.length - 1 - i];
            }
        }

        return max;
    }
}
