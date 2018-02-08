#include <stdio.h>
#include <math.h>
int main() {
    int n,i;
    float x[1000], total=0, rata, rata_2=0, sd;


printf ("jumlah data (maksimum 1000 buah) : ");
scanf("%d",&n);
printf("\n");
for (i=0;i<n;i++){
    printf("nilai data ke %d ? ",i+1);
    scanf("%f", &x[i]);
    total = total + x[i];
}
rata = total /n;
for (i=0;i<n;i++)
{rata_2+=((x[i]-rata)*(x[i]-rata));}
    sd= sqrt(rata_2/n);
   
    printf("\n");
    printf("jumlah data = %d\n",n);
    printf("total nilai = %.2f\n",total);
    printf("rata-rata nilai = %.2f\n",rata);
    printf("deviasi standart = %.2f\n",sd);
	return 0;
}
