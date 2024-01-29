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
        displayMatrix(matrixObject.Arr);

        System.out.println("Transpose of the matrix:");
        int[][] transposeMatrix = Transpose(matrixObject.Arr, rows, columns);
        displayMatrix(transposeMatrix);

        scanner.close();
    }

    public int[][] Transpose(int[][] matrix, int rows, int columns) 
    {
        int[][] transposeMatrix = new int[columns][rows];

        for (int i = 0; i < rows; i++) 
        {
            for (int j = 0; j < columns; j++) 
            {
                transposeMatrix[j][i] = matrix[i][j];
            }
        }

        return transposeMatrix;
    }

    public static void displayMatrix(int[][] matrix) 
    {
        for (int[] row : matrix) 
        {
            for (int element : row) 
            {
                System.out.print(element + "\t");
            }
            System.out.println();
        }
    }
}
