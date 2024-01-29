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

        ReverseRow(matrixObject.Arr, rows, columns);

        System.out.println("\nMatrix after reversing each row:");
        matrixObject.Display();

        scanner.close();
    }

    public void ReverseRow(int[][] matrix, int rows, int columns) 
    {
        for (int i = 0; i < rows; i++) 
        {
            int start = 0;
            int end = columns - 1;

            while (start < end) 
            {
                int temp = matrix[i][start];
                matrix[i][start] = matrix[i][end];
                matrix[i][end] = temp;

                start++;
                end--;
            }
        }
    }
}
