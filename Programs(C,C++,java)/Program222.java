import java.util.*;
import LB.Matrix;

class Program46Q2
{
    public static void main(String Arg[])
    {
        Scanner sobj=new Scanner(System.in);

        int iRow=0,iCol=0,iNo=0,iRet=0;

        System.out.println("Enter number of rows:");
        iRow=sobj.nextInt();

        System.out.println("Enter number of columns:");
        iCol=sobj.nextInt();  

        System.out.println("Enter the number :");
        iNo=sobj.nextInt();      

        MyMatrix mobj=new MyMatrix(iRow,iCol,iNo);

        mobj.Accept();
        mobj.Display();

        iRet=mobj.Frequency();
        System.out.println("Frequency of given elements: " + iRet);

        mobj = null;
        System.gc();

    }
}

class MyMatrix extends Matrix
{
    public MyMatrix(int A, int B, int C)
    {
        super(A,B,C);        //from parent to child
    }

    public int Frequency()
    {
        int i = 0, j = 0, iCnt=0;
        for(i=0;i<Arr.length;i++)
        {
            for(j=0;j<Arr[i].length;j++)
            {
                if((Arr[i][j])==iNo)
                {
                    iCnt++;
                }
            }
        }
        return iCnt;
    }
}
