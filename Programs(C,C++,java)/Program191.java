import java.util.*;

class Assignment34
{
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);

        int iValue1=0;
        int iValue2=0;
        int iRet=0;

        System.out.println("Enter the number:");
        iValue1=sobj.nextInt();

        System.out.println("Enter the Position:");
        iValue2=sobj.nextInt();

        Bits bobj=new Bits(iValue1,iValue2);
        iRet=bobj.OffBit();

        System.out.println("Modified number is:"+iRet);        
    }
}

class Bits
{
    public int iNo;
    public int iPos;

    public Bits(int X,int Y)
    {
        this.iNo=X;
        this.iPos=Y;
    }

    public int OffBit()
    {
        int iResult=0;
        int iMask=0x00000001;
        
        iMask=iMask << (iPos-1);
        
        iResult=iNo & iMask;

        if(iResult == iMask)
        {
            return (iNo ^ iMask);
        }
        else
        {
            return iNo;
        }
    }   
}