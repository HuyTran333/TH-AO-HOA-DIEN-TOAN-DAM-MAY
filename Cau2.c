#include <stdio.h>
#include <math.h>


int KiemTraSCP(int a)
{
    int x=sqrt(a);
    if(x*x==a) return x;
    else return 0;
}

int DemSCP(int b)
{
    int tong=0;
    for(int i=1;i<b;i++)
    {
        if(KiemTraSCP(i))
        {
            printf("%d ",i);
            tong=tong+1;
        }
    }
    return tong;
    
}


int main(void){
    // Your code here!
   int n;
   printf("Hay nhap so nguyen n: \n");
   scanf("%d", &n);
   int tongSCP=DemSCP(n);
   printf("\nTong so chinh phuong la: %d ",tongSCP);
   
}
