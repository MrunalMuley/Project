import java.util.*;
import LB.Matrix; 

class Program47Q2
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

        mobj.ReverseRow();

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

    public void ReverseRow()
    {
        int i = 0, j = 0;
        
        for(i=0;i<Arr.length;i++)
        {
            int iStart=0;   //start index
            int iEnd=Arr[i].length-1;   //end index

            while(iStart<iEnd)
            {
            int temp=Arr[i][iStart];            //swapping
            Arr[i][iStart]=Arr[i][iEnd];
            Arr[i][iEnd]=temp;

            iStart++;
            iEnd--;
            }
        }

        System.out.println("Matrix of reversed rows:");
        for(i = 0; i <Arr.length; i++) 
        {
            for (j = 0; j <Arr[i].length; j++) 
            {
                System.out.print(Arr[i][j] +"\t");
            }
        System.out.println();
        }
    }
}