// Hesap Makinesi Programi. Kullaniciya toplama, cikarma, carpma ve bolme islemlerinden birini secme imkani sunar.
// Kullanici iki sayi girdikten sonra secilen islemi uygular ve sonucu ekrana yazdirir.
// Bu program Karamanoglu Mehmetbey Universitesi Yazılım Gelistirme Bölümünden Göksel tarafindan yazilmistir. 

#include <stdio.h>

int main() {
    int secim;
    float sayi1, sayi2;

    printf("1 - Toplama\n");
    printf("2 - Cikarma\n");
    printf("3 - Carpma\n");
    printf("4 - Bolme\n");
    printf("Seciminiz: ");
    scanf("%d", &secim);

    printf("Birinci sayi: ");
    scanf("%f", &sayi1);

    printf("Ikinci sayi: ");
    scanf("%f", &sayi2);

    switch(secim) {
        case 1:
            printf("Sonuc: %.2f\n", sayi1 + sayi2);
            break;
        case 2:
            printf("Sonuc: %.2f\n", sayi1 - sayi2);
            break;
        case 3:
            printf("Sonuc: %.2f\n", sayi1 * sayi2);
            break;
        case 4:
            if(sayi2 != 0)
                printf("Sonuc: %.2f\n", sayi1 / sayi2);
            else
                printf("0'a bolunemez!\n");
            break;
        default:
            printf("Gecersiz secim!\n");
    }

    return 0;
}