import java.util.*;
import LB.Matrix; 

class Program46Q5
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

        mobj.SwapRows();
        System.out.println("Swapped matrix is:");
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

    public void SwapRows()
    {
        int i = 0;
        for ( i = 0; i < Arr.length - 1; i =i+2) 
        {
            int[] temp = Arr[i];   //swapping
            Arr[i] = Arr[i + 1];
            Arr[i + 1] = temp;
        }
    }
}