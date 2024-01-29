
//correct solution practice196.java

import java.util.*;

class Assignment34
{
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);

        int iValue1=0;
        int iValue2=0;
        int iRet=0;

        System.out.println("Enter the number 1:");
        iValue1=sobj.nextInt();

        System.out.println("Enter the number 2:");
        iValue2=sobj.nextInt();

        Bits bobj=new Bits(iValue1,iValue2);
        iRet=bobj.CommonBits();

        System.out.println("Count of common ON bit:"+iRet);        
    }
}

class Bits
{
    public int iNo1;
    public int iNo2;

    public Bits(int X,int Y)
    {
        this.iNo1=X;
        this.iNo2=Y;
    }

    public int CommonBits()
    {
        int iCnt=0;
        int iResult=0;
        int iMask=0x00000001;
        
        while(iNo1 !=0 && iNo2 !=0)
        {
            iResult=iNo1 & iNo2 & iMask;

            if(iResult != 0)
            {
                iCnt++;
            }
            iNo1=iNo1>>1;
            iNo2=iNo2>>1;     
        }

        return iCnt++;
    }   
}