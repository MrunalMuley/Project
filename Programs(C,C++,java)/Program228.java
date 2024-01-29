import java.util.*;
import LB.Matrix;

class Program47Q3
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

        mobj.ReverseCol();

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

    public void ReverseCol()
    {
        int i = 0, j = 0;
        
        for(j = 0; j <Arr[0].length; j++)//column
        {
            int iStart=0;   //start index
            int iEnd=Arr[j].length-1;   //end index

            while(iStart<iEnd)
            {
            int temp=Arr[j][iStart];            //swapping
            Arr[iStart][j]=Arr[iEnd][j];
            Arr[iEnd][j]=temp;

            iStart++;
            iEnd--;
            }
        }

        System.out.println("Matrix of reversed columns:");
        for(i = 0; i <Arr.length; i++) 
        {
            for (j = 0; j <Arr[i].length; j++) 
            {
                System.out.print(Arr[i][j]+"\t");
            }
        System.out.println();
        }
    }
}