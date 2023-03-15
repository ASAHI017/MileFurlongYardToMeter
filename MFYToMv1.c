#include <conio.h>
#include <stdio.h>

int main(){
    int i;
    double a[2], m;
    

    puts("[1]マイル、[2]ハロン、[3]ヤードの値をメートル[m]単位に変換し、\
    \n合計の距離を計算します。半角でキー入力するとプログラムが開始します。\n");
    
    getch();

    for (i=0; i<=2; i++){
        a[i] = 0;
    }

    for (i=0; i<=2; i++){
        printf("[%d]\n", i+1);
        scanf("%lf", &a[i]);

        if (a[i] == '\0' && !(a[i] == 0)){
            printf("ERROR\n キーを押すとプログラムが終了します");
            break;
        }
    }

    if (i < 2 || a[2] == '\0' && a[2] != 0){
        getch();
    } else {
        printf("距離は%.4lf[m]です。半角でキー入力するとプログラムが終了します",\
        (a[0]*1609.34)+(a[1]*(1609.34 / 8))+(a[2]*0.91));
        getch();
    }
}