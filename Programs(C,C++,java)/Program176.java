import java.util.*;

class Assignment36
{
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);

        String str=null;
        String str1=null;
        boolean bRet=false;

        System.out.println("Enter the String:");
        str=sobj.nextLine();

        System.out.println("Enter the another String which you want to compare:");
        str1=sobj.nextLine();

        StringDemo obj=new StringDemo(str,str1);

        bRet=obj.StrCmpX();

        if(bRet==true)
        {
            System.out.println("Both strings are same");
        }
        else
        {
            System.out.println("Both strings are not same");
        }
    }
}

class StringDemo
{
    public String src;
    public String dest;

    public StringDemo(String X,String Y)
    {
        this.src=X;
        this.dest=Y;
    }

    public boolean StrCmpX()
    {
        if(src.equals(dest))          //equals method to compare data of string 
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}