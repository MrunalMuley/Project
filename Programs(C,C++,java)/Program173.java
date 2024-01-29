import java.util.*;

class Assignment35
{
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);

        int iValue1=0;
        int iValue2=0;
        int iSize=0;
        int iCnt=0;
        int iRet=0;

        System.out.println("Enter the number of elements:");
        iSize=sobj.nextInt();

        System.out.println("Enter the start number:");
        iValue1=sobj.nextInt();

        System.out.println("Enter the End number:");
        iValue2=sobj.nextInt();

        int Arr[]=new int[iSize];
        System.out.println("Enter the elements:");
        for(iCnt=0;iCnt<iSize;iCnt++)
        {
            Arr[iCnt]=sobj.nextInt();
        }

        Number nobj=new Number(Arr,iValue1,iValue2);
        nobj.Display();

    }
}

class Number
{
    public int iStart;
    public int iEnd;
    public int Brr[];

    public Number(int []Brr1,int Y,int X)
    {
        this.Brr=Brr1;
        this.iStart=Y;
        this.iEnd=X;
    }

    public void Display()
    {
        int iCnt=0;

        System.out.println("Elememts in given range are:");

        for(iCnt=0;iCnt<Brr.length;iCnt++)
        {
            if(Brr[iCnt]>=iStart && Brr[iCnt]<=iEnd)
            {
                System.out.print(+Brr[iCnt]+"\t");        
            }
            System.out.println();
        }
    }
}