#include <stdio.h>
#include <math.h>


int ktra_SCP(int x)
{
    if(x == pow((int)sqrt(x),2))
        return 1;
    else    
        return 0;
}

int dem_SCPNhoHonX(int x)
{
    int dem = 0;
    
    for(int i = 1; i < x;i++)
    {
        if(ktra_SCP(i) == 1)
            dem++;
    }
    
    return dem;
}

void xuat_SCPNhoHonX(int x)
{
    for(int i = 1; i<x;i++)
    {
        if(ktra_SCP(i) == 1)
            printf("%3d",i);
    }
}

int main(void){
    // Your code here!
    int n;
    do
    {
        printf("\nNhap so nguyen duong n (n>0): ");
        scanf("%d",&n);
        if(n<=0)
            printf("\n n phai lon hon 0 !");
    }while (n <= 0);
    printf("\nCo %d so chinh phuong nho hon %d.\n",dem_SCPNhoHonX(n),n);
    xuat_SCPNhoHonX(n);
    return 0;
    
}
