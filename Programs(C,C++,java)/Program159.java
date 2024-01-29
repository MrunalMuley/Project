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

        obj.Reverse();
    }
}

class StringDemo
{
    public String str1;

    public StringDemo(String str2)
    {
        this.str1=str2;
    }

    public void Reverse()
    {
        int iCnt=0;

        char Arr[]=str1.toCharArray();

        System.out.println("Reversed string is:");
        
        for(iCnt=(Arr.length-1);iCnt>=0;iCnt--)
        {
            System.out.print(Arr[iCnt]);
        }
    }
}