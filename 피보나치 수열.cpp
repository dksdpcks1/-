#include <stdio.h>
int main(void){
    int a=1;
    int b=1;
    int y=2;
 
    for(int n=2;n<10;n++){
        int c=a+b;
        y=y+c;
        if(n<10){
            a=b;
            b=c;
        }
    }
    printf("%d",y);
    return 0;
}
