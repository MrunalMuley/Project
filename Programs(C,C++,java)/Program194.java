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

        Bits bobj=new Bits(iValue);
        iRet=bobj.ToggleBit();

        System.out.println("Modified number is:"+iRet);        
    }
}

class Bits
{
    public int iNo;

    public Bits(int X)
    {
        this.iNo=X;
    }

    public int ToggleBit()
    {
        int iResult=0;
        int iMask=0xf000000f;
        
        iResult= iNo ^ iMask;
        
        return iResult;
    }   
}