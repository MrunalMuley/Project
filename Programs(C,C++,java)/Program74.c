//Accept N numbers from user and accept Range, Display all elements from that range

#include<stdio.h>
#include<stdlib.h>

int Range(int Arr[], int iLength, int iStart, int iEnd)
{
    int iCnt = 0;

    for(iCnt = 0;iCnt<iLength; iCnt++)
    {
        if ((Arr[iCnt]>=iStart) && (Arr[iCnt]<=iEnd))
        {
           printf("Expected range is%d\t",Arr[iCnt]);
        }
    }
}

int main()
{
    int iSize = 0,iCnt = 0,iValue1=0, iValue2=0;
    int *p = NULL;
    int iRet=0;

    printf("Enter number of elements:\n");
    scanf("%d",&iSize);

    printf("Enter the starting point :\n");
    scanf("%d",&iValue1);

    printf("Enter the ending point :\n");
    scanf("%d",&iValue2);

    p = (int *)malloc(iSize * sizeof(int));
    
    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements:\n ",iSize);
    for(iCnt = 0;iCnt<iSize; iCnt++)
    {
        printf("Enter element %d :",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iRet=Range(p, iSize, iValue1, iValue2);

    free(p);
    
    return 0;
}