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

        int iRet = AddDiagonal(matrixObject.Arr);
        System.out.println("Sum of diagonal elements: " + iRet);

        scanner.close();
    }

    public int AddDiagonal(int[][] matrix) 
    {
        int sum = 0;
        int minSize = Math.min(matrix.length, matrix[0].length);

        for (int i = 0; i < minSize; i++) 
        {
            sum += matrix[i][i];
        }

        return sum;
    }
}
