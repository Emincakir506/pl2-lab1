#include<stdio.h>
#include<math.h>
int kitleindeks(double k,double b){
	int indeks;
    indeks=k/(b*b);
    if(0<indeks && indeks<18)
    return 1;
    else if(19<indeks && indeks<25)
    return 2;
	else if(26<indeks && indeks<30)
    return 3;
    else  if(30<indeks)
    return 4;
	}
int main()
{    int ind;
	double boy,kilo;
	printf("kilo (kg) giriniz\n");
	scanf("%lf" ,&kilo);
    printf("boy  (m)giriniz\n");
	scanf("%lf" ,&boy);
    ind=kitleindeks(kilo,boy);
    switch(ind){
         case 1 :  printf("thiny");       break;
    	 case 2 :  printf("normal");      break;
    	 case 3 :  printf("fat");         break;
    	 case 4 :  printf("overweight");  break;
        }
}
