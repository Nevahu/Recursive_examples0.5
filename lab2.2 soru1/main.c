#include <stdio.h>
#include <stdlib.h>

int Toplam(int x)
{
    if(x==0)
        return; //Base-case

    else
    {
        return x + Toplam(x-1); //Recursive k�sm�
    }
}

int main()
{
    int a;
    printf("Bir dogal sayi giriniz: ");
    scanf("%d", &a);           // Kullan�c�dan say� al
    printf("0'dan %d 'e kadar olan sayilarin toplami = %d \n", a, Toplam(a));
    return 0;
}
