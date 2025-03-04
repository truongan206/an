//giải phương trình bậc 2
#include <stdio.h>
#include<math.h>
// xây dựng hàm tính delta.
float caculate_delta(float a, float b,  float c){
return b*b-4*a*c;
}
int main() {
    while(1){
        float a,b,c,x,x1,x2,delta;
   printf("mời nhập số a b c của hàm bậc 2 có dạng ax^2+bx+c=0:\n");
   scanf("%f %f %f", &a,&b,&c);
   if(a==0){
       printf("mời nhập lại vì a phải khác 0 để hàm bậc 2 có nghĩa:\n");
       continue;
   }
   delta=caculate_delta(a,b,c);
   if(delta<0){
       printf("phương trình vô nghiệm:\n");
   }else if(delta==0){
       x=-b/(2*a);
       printf("phương trình có 1 nghiệm kép:%.2f\n", x);
   }else{
       x1=(-b+sqrt(delta))/(2*a); x2=(-b-sqrt(delta))/(2*a);
       printf("phương trình có 2 nghiệm phân biệt là:%.2f và %.2f\n", x1, x2);
   }
   continue;
    }
    return 0;
}

