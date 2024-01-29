import java.util.*;

class Assignment34
{
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);

        int iValue=0;
        int iSize=0;
        int iCnt=0;
        boolean bRet=false;

        System.out.println("Enter the number which you want to find:");
        iValue=sobj.nextInt();

        System.out.println("Enter the number of elements:");
        iSize=sobj.nextInt();

        int Arr[]=new int[iSize];
        System.out.println("Enter the elements:");
        for(iCnt=0;iCnt<iSize;iCnt++)
        {
            Arr[iCnt]=sobj.nextInt();
        }

        Number nobj=new Number(Arr,iValue);
        bRet=nobj.Check();
        
        if(bRet==true)
        {
            System.out.println("Element is present");
        }
        else
        {
            System.out.println("Element is not present");
        }
    }
}

class Number
{
    public int iNo;
    public int Brr[];

    public Number(int []Brr1,int Y)
    {
        this.Brr=Brr1;
        this.iNo=Y;
    }

    public boolean Check()
    {
        int iCnt=0;
        for(iCnt=0;iCnt<Brr.length;iCnt++)
        {
            if(iNo==Brr[iCnt])
            {
                return true;
            }
        }
        return false;
    }
}