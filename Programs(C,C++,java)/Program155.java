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
        
        iRet=obj.CountCapital();

        System.out.println("Count of capital letters:"+iRet);
    }
}

class StringDemo
{
    public String str1;

    public StringDemo(String str2)
    {
        this.str1=str2;
    }

    public int CountCapital()
    {
        int iCnt=0,iCnt1=0;

        char Arr[]=str1.toCharArray();

        for(iCnt=0;iCnt<Arr.length;iCnt++)
        {
            if((Arr[iCnt]<='Z') && (Arr[iCnt]>='A'))
            {
                iCnt1++;
            }
        }
        return iCnt1;
    }
}