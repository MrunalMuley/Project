import java.util.*;
import LB.Matrix; 

class Program47Q1
{
    public static void main(String Arg[])
    {
        Scanner sobj=new Scanner(System.in);

        int iRow=0,iCol=0;

        System.out.println("Enter number of rows:");
        iRow=sobj.nextInt();

        System.out.println("Enter number of columns:");
        iCol=sobj.nextInt();        

        MyMatrix mobj=new MyMatrix(iRow,iCol);

        mobj.Accept();
        mobj.Display();

        mobj.TransposeMatrix();
        System.out.println("Transpose matrix is:");
        mobj.Display();
        
        mobj = null;
        System.gc();

    }
}

class MyMatrix extends Matrix
{
    public MyMatrix(int A, int B)
    {
        super(A,B);        //from parent to child
    }

    public void TransposeMatrix()
    {
        int i = 0, j = 0;
        int[][] transposedMatrix = new int[Arr[0].length][Arr.length];    //new matrix with arr[j][i]
        for(i=0;i<Arr.length;i++)
        {
            for(j=0;j<Arr[i].length;j++)
            {
                transposedMatrix[j][i] = Arr[i][j]; //new matrix = given matrix
            }
        }
        Arr=transposedMatrix;
    }
}