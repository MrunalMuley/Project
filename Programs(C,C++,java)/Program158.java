import java.util.*;

class Assignment32Q1
{
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);

        String str=null;
        boolean bRet=false;

        System.out.println("Enter the String:");
        str=sobj.nextLine();

        StringDemo obj=new StringDemo(str);
        
        bRet=obj.ChkVowel();
        if(bRet==true)
        {
            System.out.println("String contains vowels");
        }
        else
        {
            System.out.println("String does not contains vowels");
        }
    }
}

class StringDemo
{
    public String str1;

    public StringDemo(String str2)
    {
        this.str1=str2;
    }

    public boolean ChkVowel()
    {
        int iCnt=0;
        int iCnt1=0;
        int iDiff=0;

        char Arr[]=str1.toCharArray();

        for(iCnt=0;iCnt<Arr.length;iCnt++)
        {
            if((Arr[iCnt]=='a') || (Arr[iCnt]=='e') || (Arr[iCnt]=='i') || (Arr[iCnt]=='o') || (Arr[iCnt]=='u') || (Arr[iCnt]=='A') || (Arr[iCnt]=='E') || (Arr[iCnt]=='I') || (Arr[iCnt]=='O') || (Arr[iCnt]=='U'))
            {
                return true;
            }
        }
        return false;
    }
}