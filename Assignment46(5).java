package LB;
import java.util.Scanner;

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

        SwapRows(matrixObject.Arr);

        System.out.println("\nMatrix after swapping consecutive rows:");
        matrixObject.Display();

        scanner.close();
    }

    public void SwapRows(int[][] matrix) 
    {
        int rows = matrix.length;

        int columns = matrix[0].length;

        for (int i = 0; i < rows - 1; i += 2) 
        {
            for (int j = 0; j < columns; j++) 
            {
                int temp = matrix[i][j];
                matrix[i][j] = matrix[i + 1][j];
                matrix[i + 1][j] = temp;
            }
        }
    }
}
