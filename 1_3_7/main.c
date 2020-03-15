#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c,x1,x2,x3;
    scanf("%i%i%i",&a,&b,&c);
    if(a!=0){
        float delta=pow(b,2)-4*a*c;
        if(delta>0){
            x1=(-b-sqrt(delta))/(2*a);
            x2=(-b+sqrt(delta))/(2*a);
            printf("%f",x1);
            printf("%f",x2);
        }
        if(delta==0){
            x1=-b/(2*a);
            printf("%f",x1);
        }
        if(delta<0){
            printf("Nie ma rozwiazania");
        }
    }
	if(a=0){
        if(b!=0){
            x3=(-c)/b;
            printf("%f",x3);
        }
        if(b=0){
            if(c!=0){
                printf("Nie ma rozwiazania");
            }
			else{
            printf("Posiada nieskonczenie wiele rozwiazan");
            }
        }
    }
    return 0;
}
