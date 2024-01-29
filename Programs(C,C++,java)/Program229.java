import java.util.*;
import LB.Matrix;

class Program47Q4
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

        bRet=mobj.ChkIdentity();
        if(bRet==true)
        {
            System.out.println("It is an identity matrix");
        }
        else
        {
            System.out.println("It is not an identity matrix");
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

    public boolean ChkIdentity()
    {
        int i = 0, j = 0;
        
        if(Arr.length != Arr[i].length)      //not square matrix//as row length != column length
        {
            return false;
        }

        for(i = 0; i <Arr.length; i++) 
        {
            for (j = 0; j <Arr[i].length; j++) 
            {
                if(i==j && Arr[i][j]!=1)
                {
                    return true;
                }
                else if(i!=j && Arr[i][j] != 0)
                {
                    return false;
                }
            }
        }
        return true;
    }
}