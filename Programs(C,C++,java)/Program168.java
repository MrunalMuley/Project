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
        iRet=dobj.Multiply();

        System.out.println("Multiplication of all digits is:"+iRet);
    }
}

class Digit
{
    public int iNo;

    public Digit(int X)
    {
        this.iNo=X;
    }

    public int Multiply()
    {
        int iDigit=0;
        int iMulti=1;

        while(iNo != 0)
        {
            iDigit=iNo%10;
            iNo=iNo/10;

            iMulti=iMulti*iDigit;
        }
        return iMulti;
    }
}