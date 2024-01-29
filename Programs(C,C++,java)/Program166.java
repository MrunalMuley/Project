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
        iRet=dobj.CountOdd();

        System.out.println("Total number of odd digits are:"+iRet);
    }
}

class Digit
{
    public int iNo;

    public Digit(int X)
    {
        this.iNo=X;
    }

    public int CountOdd()
    {
        int iDigit=0;
        int iCnt=0;

        while(iNo != 0)
        {
            iDigit=iNo%10;
            iNo=iNo/10;
            if(iDigit % 2 != 0)
            {
                iCnt++;
            }
        }
        return iCnt;
    }
}