#include <stdio.h>
int main()
{
    int i, n, a = 0, b = 1, next;
    scanf("%d", &n);
    if(n==0) puts("0");
    else{

    for (i = 1; i <= n; ++i)
    {
      if(a<=n){
        printf("%d\n",a);
        next = a + b;
        a = b;
        b = next;
      }
    }
  }
    return 0;

}
