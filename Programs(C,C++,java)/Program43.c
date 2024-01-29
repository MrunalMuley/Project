//Write a program which accept distance in kilometre and convert it into meter. (1 kilometre = 1000 Meter)

# include <stdio.h>
# define Mtr 1000

int KMtoMeter(int iNo)
{
    int iAns=0;
    iAns=iNo*Mtr;
    return iAns;
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter distance in kilometer:");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("Calculation is meters is %d",iRet);

    return 0;
}