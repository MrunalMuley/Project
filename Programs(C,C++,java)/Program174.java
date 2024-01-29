import java.util.*;

class Assignment35Q56
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
        iRet=aobj.Product();

            System.out.println("Product of all odd elements:"+iRet);
    }
}

class ArrayDemo
{
    public int []Brr;

    ArrayDemo(int []Brr1)
    {
        this.Brr=Brr1;
    }

    public int Product()
    {
        int iCnt=0;
        int iMulti=1;
        
        for(iCnt = 0; iCnt < Brr.length; iCnt++)
        {
            if(Brr[iCnt]%2 !=0)
            {
                iMulti=iMulti*Brr[iCnt];
            }
        }
        return iMulti;
    }
}