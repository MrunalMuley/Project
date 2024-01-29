import java.util.*;

class Assignment32Q1
{
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);

        int iSize=0,iCnt=0;
        int iRet=0;

        System.out.println("Enter the number of elements:");
        iSize=sobj.nextInt();
        
        int Arr[]=new int[iSize];

        System.out.println("Enter Elements:");
        for(iCnt=0;iCnt<iSize;iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }

        ArrayDemo aobj=new ArrayDemo(Arr);
        iRet=aobj.Difference();

        System.out.println("Difference between even and odd elements:"+iRet);
    }
}

class ArrayDemo
{
    public int []Brr;

    ArrayDemo(int []Brr1)
    {
        this.Brr=Brr1;
    }

    public int Difference()
    {
        int iCnt=0,iEven=0,iOdd=0;
        int iDiff=0;

        System.out.print("Given elements are:\t");
        for(iCnt = 0; iCnt < Brr.length; iCnt++)
        {
            System.out.print(Brr[iCnt]+"\t");

            if(Brr[iCnt]%2 ==0)
            {
                iEven=iEven+Brr[iCnt];
            }
            else
            {
                iOdd=iOdd+Brr[iCnt];
            }
        }
        System.out.println();

        iDiff=iEven-iOdd;
        return iDiff;  
    }
}