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

        int[] columnSums = AddColumn(matrixObject.Arr);

        System.out.println("\nAddition of elements for each column:");
        for (int i = 0; i < columnSums.length; i++) 
        {
            System.out.println("Column " + (i + 1) + ": " + columnSums[i]);
        }

        scanner.close();
    }

    public int[] AddColumn(int[][] matrix) 
    {
        int rows = matrix.length;
        int columns = matrix[0].length;

        int[] columnSums = new int[columns];

        for (int j = 0; j < columns; j++) {
            for (int i = 0; i < rows; i++) {
                columnSums[j] += matrix[i][j];
            }
        }

        return columnSums;
    }
}
