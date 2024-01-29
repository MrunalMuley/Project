import java.util.*;

class Assignment34
{
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);

        int iValue=0;
        int iPos1=0;
        int iPos2=0;
        boolean bRet=false;

        System.out.println("Enter the number :");
        iValue=sobj.nextInt();

        System.out.println("Enter the first position:");
        iPos1=sobj.nextInt();

        System.out.println("Enter the second position :");
        iPos2=sobj.nextInt();

        Bits bobj=new Bits(iValue,iPos1,iPos2);
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
    public int ibPos1;
    public int ibPos2;

    public Bits(int X,int Y,int Z)
    {
        this.iNo=X;
        this.ibPos1=Y;
        this.ibPos2=Z;
    }

    public boolean ChkBit()
    {
        int iCnt=0;
        int iResult1=0,iResult2=0;
        int iMask1=0x00000001;
        int iMask2=0x00000001;
        
        iMask1=iMask1 << (ibPos1-1); 
        iMask2=iMask2 << (ibPos2-1);

        iResult1=iNo & iMask1;
        iResult2=iNo & iMask2;

        if(iResult1!=0 && iResult2!=0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }   
}