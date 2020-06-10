#include<stdio.h>
#define s 5

void copy_arr(double array1[], double array2[], unsigned int n);
void copy_ptr(double *a, double *b, unsigned int n);
void copy_ptrs(double *a, double *b, double *n);

int main(void)
{
	double source[5] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
	double target1[5];
	double target2[5];
	double target3[5];
	copy_arr(target1, source, 5);
	copy_ptr(target2, source, 5);
	copy_ptrs(target3, source, source + 5);

	return 0;
}

void copy_arr(double array1[], double array2[], unsigned int n) {
	
	int index;

	for (index = 0; index < n; index++)
		array1[index] = array2[index];

	for (index = 0; index < n; index++)
		printf("target1[%d]=%.2lf\n", index, array1[index]);
	

}

void copy_ptr(double *a, double *b, unsigned int n) {

	int index;

	for (index = 0; index < n; index++)
		*(a + index) = *(b + index);

	for (index = 0; index < n; index++)
		printf("target2[%d]=%.2lf\n", index, a[index]);


}

void copy_ptrs(double *a, double *b, double *n) {
	
	int index;
	double* target = a;
	while (b < n) {
		*target = *b;
		b++;
		target++;
	}

	for (index = 0; index < s; index++)
		printf("target3[%d]=%.2lf\n", index, *(a+index));
}