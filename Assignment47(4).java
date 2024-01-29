package LB;
import java.util.Scanner;

class Assignment47 
{
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the order of the square matrix: ");
        int order = scanner.nextInt();

        Matrix matrixObject = new Matrix(order, order);

        System.out.println("Enter the matrix elements:");
        matrixObject.Accept();

        System.out.println("Entered matrix:");
        matrixObject.Display();

        boolean result = ChkIdentity(matrixObject.Arr, order, order);

        System.out.println("Is the matrix an identity matrix? " + result);

        scanner.close();
    }

    public boolean ChkIdentity(int[][] matrix, int rows, int columns) 
    {
        if (rows != columns) 
        {
            return false;
        }

        for (int i = 0; i < rows; i++) 
        {
            for (int j = 0; j < columns; j++) 
            {
                if (i == j && matrix[i][j] != 1) 
                {
                    return false;
                } else if (i != j && matrix[i][j] != 0) 
                {
                    return false;
                }
            }
        }

        return true;
    }
}
