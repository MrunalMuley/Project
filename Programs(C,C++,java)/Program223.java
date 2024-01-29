import java.util.*;
import LB.Matrix; 

class Program46Q3
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

        iRet=mobj.MaxDiagonal();
        System.out.println("Largest number from both the diagonals: " + iRet);

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

    public int MaxDiagonal()
    {
        int i = 0, j = 0, iMax=0;
        for(i=0;i<Arr.length;i++)
        {
            for(j=0;j<Arr[i].length;j++)
            {
                if(i==j && iMax <(Arr[i][j]))      //first diagonal
                {
                    iMax=Arr[i][j];
                }
                if((Arr[i][Arr[0].length - i - 1])>iMax)   //Arr[i]row of 2D array //second diagonal j=4-0-1=3 , j=4-1-1=2 , j=1 j=0
                {
                    iMax=Arr[i][j];
                }
            }
        }
        return iMax;
    }
}