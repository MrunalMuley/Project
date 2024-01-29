import java.util.*;

class Assignment34
{
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);

        int iValue=0;
        boolean bRet=false;

        System.out.println("Enter the number :");
        iValue=sobj.nextInt();

        Bits bobj=new Bits(iValue);
        bRet=bobj.ChkBit();

        if(bRet==true)
        {
            System.out.println("Bits are ON"); 
        }
        else
        {
            System.out.println("Bits are OFF"); 
        }       
    }
}

class Bits
{
    public int iNo;

    public Bits(int X)
    {
        this.iNo=X;
    }

    public boolean ChkBit()
    {
        int iCnt=0;
        int iResult=0;
        int iMask=0x00000900;
        
        iResult=iNo&iMask;

        if(iResult==iMask)
        {
            return true;
        }
        else
        {
            return false;
        }
    }   
}