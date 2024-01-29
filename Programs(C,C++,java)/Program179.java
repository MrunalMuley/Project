import java.util.*;

class Assignment36
{
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);

        String str=null;
        boolean bRet=false;

        System.out.println("Enter the String:");
        str=sobj.nextLine();

        StringDemo obj=new StringDemo(str);
        
        bRet=obj.StrPallindrome();
        if(bRet==true)
        {
            System.out.println("Given string shows pallindrome");
        }
        else
        {
            System.out.println("Given string does not shows pallindrome");
        }
    }
}

class StringDemo
{
    public String str1;

    public StringDemo(String X)
    {
        this.str1=X;
    }

    public boolean StrPallindrome()
    {
        int iCnt=0;
        
        char Arr[]=str1.toCharArray();

        StringBuilder reversed = new StringBuilder();

        for(iCnt=Arr.length-1;iCnt>=0;iCnt--)
        {
            reversed.append(Arr[iCnt]);
        }
        if(reversed.toString().equals(str1))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}