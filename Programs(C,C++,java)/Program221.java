import java.util.*;
import LB.Matrix;

class Program46Q1
{
    public static void main(String Arg[])
    {
        Scanner sobj=new Scanner(System.in);

        int iRow=0,iCol=0,iRet=0;

        System.out.println("Enter number of rows:");
        iRow=sobj.nextInt();

        System.out.println("Enter number of columns:");
        iCol=sobj.nextInt();        

        MyMatrix mobj=new MyMatrix(iRow,iCol);

        mobj.Accept();
        mobj.Display();

        iRet=mobj.AddDiagonal();
        System.out.println("Sum of diagonal elements: " + iRet);

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

    public int AddDiagonal()
    {
        int i = 0, j = 0, iSum=0;
        for(i=0;i<Arr.length;i++)
        {
            for(j=0;j<Arr[i].length;j++)
            {
                if(i==j)
                {
                    iSum=iSum+Arr[i][j];
                }
            }
        }
        return iSum;
    }
}