#include <stdio.h>
#include <stdlib.h>
struct trojkat
{
    int a;
    int b;
    int c;
};
int foo(struct trojkat tr)
{
    return tr.a+tr.b+tr.c;
}
int main()
{
    struct trojkat tr={.a=5,.b=3,.c=2};
    printf("%d",foo(tr));
    return 0;
}
