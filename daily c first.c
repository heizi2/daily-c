
//#include<stdio.h>                              
//#include<math.h>              ���㲢���s��ֵ��s�ļ��㷽������ʽ������mΪʵ������ֵ�ɼ��̶��롣����ʱ��Ҫ�����һ��ľ���ֵС��1e-4��������������λС����

//int main( )
//{
//	double item, s, sign, m, p;
//	sign = 1;
//	p = 1;
//	item = 1;
//	s = 0;
//	scanf("%lf", &m);
//	while (fabs(item) >= 1e-4)
//	{
//		item = fabs(item) * sign * m / p;
//		s += item;
//		p++;
//		sign =-sign;
//
//	}
//	printf("%.2f\n", s);
//	return 0;
//
//}



////#include<stdio.h>
////#include<math.h>
////int main()
////{
////	int n, k,i,m=0;                           ���㲢���s��ֵ��s�ļ��㷽������ʽ������mΪʵ������ֵ�ɼ��̶��롣����ʱ��Ҫ�����һ��ľ���ֵС��1e-4��������������λС����


////	for (n = 100; n < 1000; n++)
////	{
////		k = (int)sqrt(n);
////		for (i = 2; i <= k; i++)
////		{
////			if (n % i == 0)
////			{
////				break;
////			}
////
////		}
////		if (i > k) {
////			printf("%4d", n);
////			m += 1;
////			if (m % 8 == 0) {
////				printf("\n");
////			}
////
////		}
////	}
////	printf("\n");
////	return 0;
////}

//
//#include<stdio.h>
//void f1(int i);
//int main()
//{
//	int i, n;
//	for (i = 1; i <=5; i++)
//	{
//		f1(i);                                  ��ӡ����������
//		for (n = 1;n <=(11 - 2*i); n++)
//			printf("*");
//		printf("\n");
//
//	}
//	return 0;
//}
//
//void f1 (int i)
//{ 
//	for (; i - 1 != 0; i -= 1)
//		printf(" ");
//}
//#include<stdio.h>
//double Fact(int n);
//int main( )
//{
//	int n;
//	double t;
//	printf("Please inpput n:");
//	scanf("%d", &n);
//	if (n < 0)
//		n = -n;
//	t = Fact(n);
//	printf("%d!=%lf\n", n, t);
//	return 0;
//
//}
//
//double Fact(int n)
//{
//	if (!n)
//		return (1.0);
//	return (n * Fact(n - 1));
//}


//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	double a, b, c;
//	printf("Enter three number:");
//	scanf("%lf%lf%lf", &a, &b, &c);
//	if(a<b)
//		{
//		double n = a;
//		a = b;
//		b = n;
//		}
//	if (a < c)
//	{
//		double n = a;                               �ж�����������
//		a = c;
//		c = n;
//
//	}
//	if (b < c)
//	{
//		double n = b;
//		b = c;
//		c = b;
//	}
//
//	if (a <= 0 || b <= 0 || c <= 0)
//		printf("error input");
//	else
//	{
//		if (b + c > a)
//		{
//			if ((a == b || b == c || a == c) && (a != b) && (b != c) && (a != c))
//				printf("this is a ����������");
//			else if (a == b && a == c && c == b)
//				printf("����һ���ȱ�������");
//			else if (fabs(a * a - b * b - c * c) < 1E-2 && (a != b) && (b != c) && (a != c))
//				printf("����һ��ֱ��������");
//			else if (fabs(a * a - b * b - c * c) < 1E-2 && (a == b || a == c || c == b))
//				printf("����һ������ֱ��������");
//			else
//				printf("����һ��һ��������");
//
//
//		}
//		else
//			printf("this is not a triangle\n");
//	}
//
//}
//#include<stdio.h>
//int fibonacci(int n)
//{
//	if (n <= 1)
//		return n;
//	int a = 0, b = 1, c;
//	for (int i = 2; i <= n; i++)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//	}                                      쳲�����������
//	return b;
//}
//int main()
//{
//	int n;
//	printf("input a number");
//		scanf("%d", &n);
//	
//	
//	double sum = 0;
//	int sign = 1, i = 1;
//	do
//	{
//		sum += sign * (double)fibonacci(i + 2) / fibonacci(i + 1);
//		sign *= -1;
//		i++;
//
//	} while (i <= n);
//	printf("the product is:%lf\n", sum);
//	return 0;
//
//}


			  
//#include<stdio.h>
//#include<math.h>
//int main()
//{                                     �ж����������������
//	int a, b,m=0,k;
//	do {
//		printf("input two number:");
//		scanf("%d%d", &a, &b);
//	} while (a<10 || a>b || b > 1000);
//	for (int i = a; i <= b; i++)
//	{
//		for ( k = 2; k <= (int)sqrt(i); k++)
//		{
//			if (i % k == 0) {
//				break;
//			}
//		}	if (k > (int)sqrt(i))
//			{
//				printf("%4d ", i);
//				m++;
//				if (m % 5 == 0)
//					printf("\n");
//			}
//		
//		
//	}
//	return 0;
//} 
//#include<stdio.h>
//int main()
//{
//	int i,n=0,m=1,o;
//	do {
//		printf("input a number:");
//		scanf("%d",&o);
//	} while (o % 2 == 0);
//	for (i = 1; i <= o/2; i++)
//	{
//		for (int k = i; o/2+1 - k; k++)
//		{
//			printf(" ");
//		}
//		for (int m = 1; m <= 2 * i - 1; m++)               �����������е�����
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 1; i <= o/2; i++)
//	{   for(int q=1;q<=i;q++)
//		printf(" ");
//	    for (int e = 1; e <= o - 2 * i; e++)
//		printf("*");
//
//		printf("\n");
//	}
//	return 0;
//}


//#include<stdio.h>
//double Fact(int n);
//int main()                               �ݹ�������׳�
//{
//	int n;
//	double t;
//	printf("Please input n:\n");
//	scanf("%d", &n);
//	if (n < 0)
//		n = -n;
//	t = Fact(n);
//	printf("%d!=%lf", n, t);
//	return 0;
//}
//double Fact(int n)
//{
//	if (!n)
//		return (1.0);
//		return (n * Fact(n - 1));
//}

	
