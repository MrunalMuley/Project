import java.util.*;

class Assignment34
{
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);

        int iValue=0;
        int iRet=0;

        System.out.println("Enter the number:");
        iValue=sobj.nextInt();

        Digit dobj=new Digit(iValue);
        iRet=dobj.CountDiff();

        System.out.println("Difference between even and odd digits are:"+iRet);
    }
}

class Digit
{
    public int iNo;

    public Digit(int X)
    {
        this.iNo=X;
    }

    public int CountDiff()
    {
        int iDigit=0;
        int iEven=0;
        int iOdd=0;
        int iDiff=0;

        while(iNo != 0)
        {
            iDigit=iNo%10;
            iNo=iNo/10;
            if(iDigit % 2 == 0)
            {
                iEven=iEven+iDigit;
            }
            else if(iDigit % 2 != 0)
            {
                iOdd=iOdd+iDigit;
            }
        }
        iDiff=iEven-iOdd;
        return iDiff; 
    }
}