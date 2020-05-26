#include <stdio.h>
#include <stdlib.h>
struct trojkat
{
    int a;
    int b;
    int c;
};
void foo(struct trojkat troj1,struct trojkat *troj2)
{
    *troj2=troj1;
}
int main()
{
    struct trojkat troj1={.a=3,.b=3,.c=3};
    struct trojkat troj2={.a=5,.b=5,.c=5};
    foo(troj1,&troj2);
    return 0;
}
