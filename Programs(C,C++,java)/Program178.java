import java.util.*;

class Assignment36
{
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);

        String str=null;

        System.out.println("Enter the String:");
        str=sobj.nextLine();

        StringDemo obj=new StringDemo(str);
        
        obj.StrRevTogX();
    }
}

class StringDemo
{
    public String str1;

    public StringDemo(String X)
    {
        this.str1=X;
    }

    public void StrRevTogX()
    {
        int iCnt=0;
        
        char Arr[]=str1.toCharArray();

        StringBuilder reversed = new StringBuilder();

        for(iCnt=Arr.length-1;iCnt>=0;iCnt--)
        {
            if(Character.isUpperCase(Arr[iCnt]))
            {
                Arr[iCnt]=Character.toLowerCase(Arr[iCnt]);
            }
            else if(Character.isLowerCase(Arr[iCnt]))
            {
                Arr[iCnt]=Character.toUpperCase(Arr[iCnt]);  
            }
            reversed.append(Arr[iCnt]);
        }
           
        System.out.println("Reversed and toggled string is:"+reversed.toString());
    }
}