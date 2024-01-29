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
        iRet=bobj.CountOne();

        System.out.println("Count of ON bit:"+iRet);        
    }
}

class Bits
{
    public int iNo;

    public Bits(int X)
    {
        this.iNo=X;
    }

    public int CountOne()
    {
        int iCnt=0;
        int iResult=0;
        int iMask=0x00000001;
        
        while(iNo !=0)
        {
            iResult=iNo & iMask;

            if(iResult != 0)
            {
                iCnt++;
            }
            iNo=iNo>>1;     //right shift //if it becomes zero stop as iNo!=0
        }

        return iCnt++;
    }   
}