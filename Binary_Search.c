#include <stdio.h>
int main()
{
    int a[]={1,3,6,9,11,14,16,19,23,43},b,left=0,rigth=9,cen;
    cen=(left+rigth)/2;
    scanf("%d",&b);

    while(left<=rigth)
    {
        /*if(b>a[cen])    left=cen+1;
        else{
            if(b<a[cen])    rigth=cen-1;
            else break;
        }*/
        if(b!=a[cen]) (b>a[cen])?(left=cen+1):(rigth=cen-1);
        else   break;
        cen=(left+rigth)/2;
    }
    printf("Found it!:%d",cen+1);

}
