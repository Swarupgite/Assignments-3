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

        ReverseColumn(matrixObject.Arr, rows, columns);

        System.out.println("\nMatrix after reversing each column:");
        matrixObject.Display();

        scanner.close();
    }

    public void ReverseColumn(int[][] matrix, int rows, int columns) 
    {
        for (int j = 0; j < columns; j++) 
        {
            int start = 0;
            int end = rows - 1;

            while (start < end) 
            {
                int temp = matrix[start][j];
                matrix[start][j] = matrix[end][j];
                matrix[end][j] = temp;

                start++;
                end--;
            }
        }
    }
}
