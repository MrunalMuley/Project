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
        iRet=dobj.CountRange();

        System.out.println("Total number of digits between 3 and 7 are:"+iRet);
    }
}

class Digit
{
    public int iNo;

    public Digit(int X)
    {
        this.iNo=X;
    }

    public int CountRange()
    {
        int iDigit=0;
        int iCnt=0;

        while(iNo != 0)
        {
            iDigit=iNo%10;
            iNo=iNo/10;
            if((iDigit>=3) && (iDigit<=7))
            {
                iCnt++;
            }
        }
        return iCnt;
    }
}