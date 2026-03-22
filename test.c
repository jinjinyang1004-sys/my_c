#include <stdio.h>
int main(){
    printf("Hello C World\n");
    printf("int= %d\n",sizeof(int));
    printf("char= %d\n",sizeof(char));
    printf("float =%d\n",sizeof(float));
    printf("double =%d\n",sizeof(double));
    int a=0;
    printf("a=%d\n",a);
    a=10000*10000*100;
    printf("a=%d\n",a);
    long long b;  //宣告為長整數
    b=(long long)10000*10000*10000; //等號右邊強轉為長整數
    printf("b=%lld\n",b); //%lld 代表長整數輸出

}
