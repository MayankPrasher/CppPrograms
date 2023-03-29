#include<stdio.h>
// #include<conio.h>

int main(){

    int A0_h ,A0_w, A1_h, A1_w, A2_h, A2_w, A3_h, A3_w, A4_h, A4_w, A5_h, A5_w, A6_h, A6_w, A7_h, A7_w, A8_h, A8_w;
    A0_h = 1189 ;
    A0_w = 841;
    A1_h = A0_w;
    A1_w = A0_h/2;
    printf("\nA0 : %dmm X %dmm",A0_h,A0_w);
    printf("\nA1 : %dmm X %dmm",A1_h,A1_w);
    A2_h = A1_w;
    A2_w = A1_h/2;
    printf("\nA2 : %dmm X %dmm",A2_h,A2_w);
    A3_h = A2_w;
    A3_w = A2_h/2;
    printf("\nA3 : %dmm X %dmm",A3_h,A3_w);
    A4_h = A3_w;
    A4_w = A3_h/2;
    printf("\nA4 : %dmm X %dmm",A4_h,A4_w);
    A5_h = A4_w;
    A5_w = A4_h/2;
    printf("\nA5 : %dmm X %dmm",A5_h,A5_w);
    A6_h = A5_w;
    A6_w = A5_h/2;
    printf("\nA6 : %dmm X %dmm",A6_h,A6_w);
    A7_h = A6_w;
    A7_w = A6_h/2;
    printf("\nA7 : %dmm X %dmm",A7_h,A7_w);
    A8_h = A7_w;
    A8_w = A7_h/2;
    printf("\nA8 : %dmm X %dmm",A8_h,A8_w);

    return 0;
}