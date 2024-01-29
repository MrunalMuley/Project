import java.util.*;

class Assignment36
{
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);

        String str=null;
        String str1=null;
        int iNo=0;
        String sRet=null;

        System.out.println("Enter the String:");
        str=sobj.nextLine();

        System.out.println("Enter the another String which you want to concat:");
        str1=sobj.nextLine();

        System.out.println("Enter the number of chracters:");
        iNo=sobj.nextInt();

        StringDemo obj=new StringDemo(str,str1,iNo);

        sRet=obj.StrNCatX();

        System.out.println("Cocatenated string is:"+sRet);
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

    public String StrNCatX()
    {
        int iCount=0;

        char Arr[]=dest.toCharArray();
        
        for(iCount=0;iCount<iCnt && iCount<Arr.length ;iCount++)
        {
            src=src+dest.charAt(iCount);
        }
        return src;
    }
}