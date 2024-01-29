package LB;
import java.util.Scanner;

class Assignment47 
{
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the number of rows: ");
        int rows = scanner.nextInt();

        System.out.print("Enter the number of columns: ");
        int columns = scanner.nextInt();

        Matrix matrixObject = new Matrix(rows, columns);

        System.out.println("Enter the matrix elements:");
        matrixObject.Accept();

        System.out.println("Entered matrix:");
        matrixObject.Display();

        boolean result = ChkSparse(matrixObject.Arr, rows, columns);

        System.out.println("Is the matrix a sparse matrix? " + result);

        scanner.close();
    }

    public boolean ChkSparse(int[][] matrix, int rows, int columns) 
    {
        int countZeros = 0;
        int threshold = (rows * columns) / 2; 

        for (int i = 0; i < rows; i++) 
        {
            for (int j = 0; j < columns; j++) 
            {
                if (matrix[i][j] == 0) 
                {
                    countZeros++;
                }
            }
        }

        return countZeros > threshold;
    }
}
