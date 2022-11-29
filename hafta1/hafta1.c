// hafta1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

    #include <stdio.h>

int main() {


    // iki sayýnýn toplamýný bulma

    /*int a;
    int b;
    int toplam;


    printf("Birinci Sayiyi Giriniz:");
    scanf_s("%d", & a);

    printf("Ikinci Sayiyi Giriniz:");
    scanf_s("%d", &b);

    toplam = a + b;

    printf("Toplam: %d", toplam);
    */







    //sayýlarýn degerlerini degiþtirme

    /*int A;
    int B;
    int C;

    printf("Birinci Sayiyi Giriniz:");
    scanf_s("%d", &A);

    printf("Ikinci Sayiyi Giriniz:");
    scanf_s("%d", &B);

    C = A;
    A = B;
    B = C;
    
    printf("Degistikten Sonra Birinci Sayi: %d\n ", A);
    printf("Degistikten Sonra Ikinci Sayi: %d", B);*/


    //ortalama hesaplama

    //float a; //a ogrenci numarasý 
    //float b; //b vize notu %40
    //float c; //c final notu %60
    //float d; //d ortalama

    //printf("Ogrenci Numaranizi Giriniz:");
    //scanf_s("%f", &a);

    //printf("Vize Notunuzu Giriniz:");
    //scanf_s("%f", &b);
    ////printf("Vize Notu: %f", b);

    //printf("Final Notunuzu Giriniz:");
    //scanf_s("%f", &c);
    ////printf("Final Notu: %f", c);

    //d = (b * 40 / 100) + (c * 60 / 100);

    //printf("Ogrenci Numaraniz: %f\n", a);
    //printf("Ortalamaniz: %f", d);




    // cevre ve alan hesaplama 


   /* int r; 
    int pi; 
    int islemturu;
    int alan;
    int cevre;

    printf("Yaricapi Giriniz:");
    scanf_s("%d", &r);

    printf("Bir Sayi Giriniz:");
    scanf_s("%d", &islemturu);

    pi = 3;

    if (islemturu==1)
    {
        cevre = 2 * pi * r;
        printf("Dairenin Cevresi: %d", cevre);
    }
    else if (islemturu==2)
    {
        alan = pi * r * r;
        printf("Dairenin Alani: %d", alan);

    }
     
    else
    {
        printf("Yanlis Giris");
    }*/

    //Klavyeden girilen bir para miktarýný en az banknot kullanarak oluþturmak
    //istediðimizde içinde kaç tane 100, 50, 20 ve 10’luk olduðunu bulan programý C
    //dili ile yazýnýz.Not: Klavyeden girilen para miktarý 10’un katlarý olmalýdýr.


    int para, yuz, elli, yirmi, on, kalan1, kalan2, kalan3,toplam;

    printf("Para Miktarini Giriniz:");
    scanf_s("%d", &para);
    printf("Para Miktari: %d\n", para);

    if (para>=100)
    {
        kalan1 = para % 100;
        yuz = para / 100;

        printf("Yuzluk Banknot Miktari: %d\n", yuz);

        if (kalan1>=50)
        {
            elli = kalan1 / 50;
            kalan2 = kalan1 % 50;

            printf("Ellilik Banknot Miktari: %d\n", elli);

            if (kalan2>=20)
            {
                kalan3 = kalan2 % 20;
                yirmi = kalan2 / 20;

                printf("Yirmilik Banknot Miktari: %d\n", yirmi);

                if (kalan3>=10)
                {
                    on = kalan3 / 10;

                    printf("Onluk Banknot Miktari: %d\n", on);
                }
            }
            else
            {
                on = kalan2 / 10;
                printf("Onluk Banknot Miktarý: %d\n", on);
            }
 
        }
        else if (kalan1>=20)
        {
            yirmi = kalan1 / 20;
            kalan3 = kalan1 % 20;

            printf("Yirmilik Banknot Miktari: %d\n", yirmi);

            if (kalan3 >= 10)
            {
                on = kalan3 / 10;

                printf("Onluk Banknot Miktari: %d\n", on);
            }
        }
        else
        {
            on = kalan1 / 10;
            printf("Onluk Banknot Miktarý: %d\n", on);
        }

        
    }
    else if (para>=50)
    {
        elli = para / 50;
        kalan2 = para % 50;
        printf("Ellilik Banknot Miktari: %d\n", elli);

        if (kalan2>=20)
        {
            yirmi = kalan2 / 20;
            kalan3 = kalan2 % 20;
            printf("Yirmilik Banknot Miktari: %d\n", yirmi);


            if (kalan3 >= 10)
            {
                on = kalan3 / 10;

                printf("Onluk Banknot Miktari: %d\n", on);
            }
        }
        else
        {
            on = kalan2 / 10;
            printf("Onluk Banknot Miktari: %d\n", on);
        }
    }
    else if (para>=20)
    {
        yirmi = para / 20; 
        kalan1= para % 20;
        printf("Yirmilik Banknot Miktari: %d\n", yirmi);
        
        if (kalan1>=10)
        {
            on = kalan1 / 10;

            printf("Onluk Banknot Miktari: %d\n", on);
        }
    }
    else if (para>=10)
    {
        on = para / 10;
        printf("Onluk Banknot Miktari: %d\n", on);

    }

    return 0;
}

   
    


