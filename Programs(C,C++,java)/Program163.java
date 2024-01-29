import java.util.*;

class Assignment32Q1
{
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);

        int iSize=0,iCnt=0;

        System.out.println("Enter the number of elements:");
        iSize=sobj.nextInt();
        
        int Arr[]=new int[iSize];

        System.out.println("Enter Elements:");
        for(iCnt=0;iCnt<iSize;iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }

        ArrayDemo aobj=new ArrayDemo(Arr);
        aobj.Display();
    }
}

class ArrayDemo
{
    public int []Brr;

    ArrayDemo(int []Brr1)
    {
        this.Brr=Brr1;
    }

    public void Display()
    {
        int iCnt=0;

        System.out.println("Numbers are divisible by 3 and 5 :");
        
        for(iCnt = 0; iCnt < Brr.length; iCnt++)
        {
            if((Brr[iCnt]%5 ==0) && (Brr[iCnt]%3==0))
            {
                System.out.print("\t"+Brr[iCnt]);
            }
        }
        System.out.println();
    }
}