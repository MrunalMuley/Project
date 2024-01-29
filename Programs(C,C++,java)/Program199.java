import java.util.*;

class Assignment34
{
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);

        int iValue=0;
        int iNo1=0;
        int iNo2=0;
        int iRet=0;

        System.out.println("Enter the number :");
        iValue=sobj.nextInt();

        System.out.println("Enter the first position:");
        iNo1=sobj.nextInt();

        System.out.println("Enter the last position :");
        iNo2=sobj.nextInt();

        Bits bobj=new Bits(iValue,iNo1,iNo2);
        iRet=bobj.ToggleBitRange();

        System.out.println("Modified number is:"+iRet);           
    }
}

class Bits
{
    public int iNo;
    public int iStart;
    public int iEnd;

    public Bits(int X,int Y,int Z)
    {
        this.iNo=X;
        this.iStart=Y;
        this.iEnd=Z;
    }

    public int ToggleBitRange()
    {
        int iCnt=0;
        int iResult=0;
        int iMask=0x00000001;
        
        iResult=iNo;

        for(iCnt=iStart; iCnt<=iEnd;iCnt++)
        {
            iMask=1<<iCnt;
            iResult=iResult ^ iMask;
        }
        return iResult;
    }   
}