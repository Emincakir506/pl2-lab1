#include<stdio.h>

int hesapla(int array[],int size, int pn, int sn)
{
	int i,sum=0,failst;
	float avg;
	
	for (i = 0; i < sn; i++) {

		printf("enter the note of number");
		scanf("%d", &array[i]);
	}
	for (i = 0; i < sn; i++)
	  {
		if (array[i] < pn)
			failst++;
	  }
	for (i = 0; i < sn; i++)
	{
		sum += array[i];
	}
	avg = sum / sn;
	printf("average :%f\n", avg);
	return failst;
}
int main()
{
	int i = 100, array[100],sn,pn ,failst;
	printf("enter student number\n");
	scanf("%d", &sn);
	printf("enter passing note\n");
	scanf("%d", &pn);
	failst = hesapla( array,i, pn, sn);
	printf("fail student number : %d", failst);
}
