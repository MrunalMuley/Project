import java.util.*;
import LB.Matrix;

class Program47Q5
{
    public static void main(String Arg[])
    {
        Scanner sobj=new Scanner(System.in);

        int iRow=0,iCol=0;
        boolean bRet=false;

        System.out.println("Enter number of rows:");
        iRow=sobj.nextInt();

        System.out.println("Enter number of columns:");
        iCol=sobj.nextInt();        

        MyMatrix mobj=new MyMatrix(iRow,iCol);

        mobj.Accept();
        mobj.Display();

        bRet=mobj.ChkSparse();
        if(bRet==true)
        {
            System.out.println("It is an Sparse matrix");
        }
        else
        {
            System.out.println("It is not an Sparse matrix");
        }

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

    public boolean ChkSparse()
    {
        int i = 0, j = 0,iCnt=0;

        for(i = 0; i <Arr.length; i++) 
        {
            for (j = 0; j <Arr[i].length; j++) 
            {
                if((Arr[i][j]/2)==0 )
                {
                    iCnt++;
                }
            }
        }
        int compare=(Arr.length * Arr[0].length)/2; //whether half of the elements of whole matrix

        return iCnt>compare;        //are more zero's    so it returns true
    }
}