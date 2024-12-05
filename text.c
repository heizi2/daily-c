//求某个日期的天数
//#include<stdio.h>
//int main() {
//	int n, y, d,t=0;
//	int r[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
//	int p[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
//	scanf("%d-%d-%d", &n, &y, &d);
//	if ((n % 400 == 0) || (n % 4 == 0 && 100 != 0))
//	{
//		int i=0;
//		for (i ; i < y - 1 ; i++) {
//			t = r[i] + t;
//		}
//		t = t + d;
//		printf("%d", t);
//	}
//
//	else
//	{
//		int i = 0;
//		for (i; i < y - 1; i++) {
//			t = p[i] + t;
//		}
//		t = t + d;
//		printf("%d", t);
//	}
//}

//#include<stdio.h>
//void mp(int a[], int n);
//int main() {
//	int a[10];
//	int n = 10;
//	int p = 0, q = 0;
//	for (int i = 0; i < 10; i++) {
//		scanf("%d", &a[i]);
//	 }
//	mp(a, n);
//	for (int i = 1; i < 10; i++) {
//		if (a[i] == a[0]) {
//			a[i] = 0;
//			q++;
//		}
//	}
//	a[0] = 0;
//	for (int i = 8; i>=0; i--) {
//		if (a[i] == a[9]) {
//			a[i] = 0;
//			p++;
//		}
//	}
//	a[9] = 0;
//	double m = 0;
//	for (int j = 0; j < 10; j++) {
//		m =m+ a[j];
//		
//	}
//	printf("%lf\n", m / (8 - p - q));
//
//
//}
//
////冒泡排序
//
//void mp(int a[], int n) {
//	for (int i = 0; i < n - 1; i++) {
//		for (int j = 0; j < n - 1 - i; j++) {
//			if (a[j] > a[j + 1]) {
//				int temp;
//				temp = a[j+1];
//				a[j + 1] = a[j];
//				a[j] = temp;
//			}
//		}
//	}
//}
// 
// 
// 求可以被七或十一整除的数
// 
//int m = 0;
//int fun(int a, int b, int r[]) {
//	for (int i = a; i <= b; i++) {
//		
//		if ((i % 7 == 0 || i % 11 == 0) && i % 77 != 0) {
//			r[m] = i;
//			m++;
//		}
//	}
//	return m;
//}
//#include<stdio.h>
//int main() {
//	int a, b;
//	int r[1000] = { 0 };
//	scanf("%d%d", &a, &b);
//	fun(a, b, r);
//	for (int i = 0; i < m; i++) {
//		printf("%d", r[i]);
//		if (i < m - 1)
//			printf(" ");
//	}
//	printf("\n");
//	return 0;
//}


//#include<stdio.h>
//int main() {
//	int r[16];
//	int* p = r;
//	int m;
//	do
//	{
//		scanf("%d", &m);
//	} while (m < 0 || m>65535);
//
//	while (m != 0) {
//		*p = m % 2;
//		m = m / 2;
//		p++;
//	}
//	printf("The binary is:");
//	p--;
//	for (; p >= r; p--)
//	{
//		printf("%d", *p);
//	}
//	return 0;
//}
//#include<stdio.h>
//void sort(int* pa, int n);
//int main() {
//	int a[10] = { 23,12,32,43,123,32,12,32,65,3 };
//	int n;
//	do {
//		printf("please input n:\n");
//		scanf("%d", &n);
//	} while (n < 1 || n>10);
//
//	sort(a, n);
//	for (int q = 0; q < n; q++)
//		printf("%d\t", a[q]);
//	return 0;
//}
//void sort(int* pa, int n)
//{
//	int index, i, j, temp, k;
//	for (k = 0; k < n - 1; k++)
//	{
//		index = k;
//		for (i = k + 1; i < n; i++)
//			if (pa[i] < pa[index])
//				index = i;
//		if (index != k)
//		{
//			temp = pa[index];
//			pa[index] = pa[k];
//			pa[k] = temp;
//		}
//	}
//}

//#include<stdio.h>
//#define col 3
//#define row 3
//void output(int(*pa)[col], int r, int c) {
//	int i, j;
//	for (i = 0; i < r; i++) {
//		for (j = 0; j < c; j++)
//			printf("%d\t", pa[i][j]);
//		printf("\n");
//	}
//}
//int main() {
//	int a[row][col] = { {5,6,7},{10,11,12},{15,16,17} };
//	output(a, row, col);
//	return 0;
//}


//#include<stdio.h>
//int main() {
//	int a = 1;
//	int* const p = &a;
//	int const * p = &a;
//	const int* const p = &a;
//		
//}