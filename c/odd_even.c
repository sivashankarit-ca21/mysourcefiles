#include <stdio.h>
int main() {
    int num,n1,n2;
    printf("Enter an integer: ");
    scanf("%d", &num);
    n1=num/10;
    n2=num%10;
      if(n1 % 2==0 && n2 % 2!=0) {
        printf("%d shankari Even and Odd\n", num);
        }
      else if(n1 % 2 != 0 && n2 % 2 == 0) {
        printf("%d is shankari Odd and Even\n", num);
        }
      else if(n1 % 2 !=0 && n2 % 2 != 0) {
        printf("%d shankari Odd\n", num);
        }
      else  {
         printf("%d shankari Even\n", num);
        }
return 0;
}
