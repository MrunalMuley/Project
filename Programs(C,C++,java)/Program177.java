import java.util.*;

class Assignment36
{
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);

        String str=null;
        String str1=null;
        int iNo=0;
        boolean bRet=false;

        System.out.println("Enter the String:");
        str=sobj.nextLine();

        System.out.println("Enter the another String which you want to concat:");
        str1=sobj.nextLine();

        System.out.println("Enter the number of chracters:");
        iNo=sobj.nextInt();

        StringDemo obj=new StringDemo(str,str1,iNo);

        bRet=obj.StrNCmpX();

        if(bRet==true)
        {
            System.out.println("Strings are equal");
        }
        else
        {
            System.out.println("Strings are not equal");
        }
    }
}

class StringDemo
{
    public String src;
    public String dest;
    public int iCnt;

    public StringDemo(String X,String Y,int Z)
    {
        this.src=X;
        this.dest=Y;
        this.iCnt=Z;
    }

    public boolean StrNCmpX()
    {
        int iCount=0;

        char Arr[]=dest.toCharArray();
        
        for(iCount=0;iCount<iCnt && iCount<Arr.length ;iCount++)
        {
            if(src.charAt(iCount) == dest.charAt(iCount))
            {
                return true;
            }
        }
        return false;
    }
}