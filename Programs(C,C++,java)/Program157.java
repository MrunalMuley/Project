import java.util.*;

class Assignment32Q1
{
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);

        String str=null;
        int iRet=0;

        System.out.println("Enter the String:");
        str=sobj.nextLine();

        StringDemo obj=new StringDemo(str);
        
        iRet=obj.CountDiff();

        System.out.println("Difference between small and capital letters:"+iRet);
    }
}

class StringDemo
{
    public String str1;

    public StringDemo(String str2)
    {
        this.str1=str2;
    }

    public int CountDiff()
    {
        int iCnt=0;
        int iSmall=0,iCapital=0;
        int iDiff=0;

        char Arr[]=str1.toCharArray();

        for(iCnt=0;iCnt<Arr.length;iCnt++)
        {
            if((Arr[iCnt]<='z') && (Arr[iCnt]>='a'))
            {
                iSmall++;
            }
            else if((Arr[iCnt]<='Z') && (Arr[iCnt]>='A'))
            {
                iCapital++;
            }
        }
        iDiff=iSmall-iCapital;
        return iDiff;
    }
}