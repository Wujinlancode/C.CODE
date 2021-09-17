#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
double fun(int n)
{
	int a;
	double sum = 0.0;
	for(a=21;a<n;a++)
	{
		if ((a % 3 == 0) && (a % 7 == 0))
		{
			sum += a;
		}
	}
	return sqrt(sum);
}
 main()
	{
	 void NONO();
	 printf("s=%f\n", fun(1000));
	 NONO();
	}
 void NONO()
 {
	 FILE* fp, * wf;
	 int i, n;
	 double s;
	 fp = fopen("in.dat", "r");
	 wf = fopen("out.dat", "w");
	 for (i = 0; i < 10; i++)
	 {
		 fscanf(fp, "%d", &n);
		 s = fun(n);
		 fprintf(wf, "%f\n", s);
	 }
	 fclose(fp);
	 fclose(wf);
 }