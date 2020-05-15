#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.h>
//
//#define MAXN 20
//typedef enum { 
//	false,
//	true 
//} bool;
//
//bool palindrome(char* s);
//
//int main()
//{
//	char s[MAXN];
//
//	scanf("%s", s);
//	if (palindrome(s) == true)
//		printf("Yes\n");
//	else
//		printf("No\n");
//	printf("%s\n", s);
//
//	return 0;
//}
//bool palindrome(char* s)
//{
//	int i, n;
//	n = strlen(s);
//	if (n % 2)
//	{
//		for (i = 0; i < (n - 1) / 2; i++)
//		{
//			if (s[i] == s[n - 1 - i])
//				continue;
//			else
//				return false;
//		}
//	}
//	else
//	{
//		for (i = 0; i < n / 2; i++)
//		{
//			if (s[i] == s[n - 1 - i])
//				continue;
//			else
//				return false;
//		}
//	}
//	return true;
//}
//#include<stdio.h>
//int search(int* list, int n, int x);
//void main()
//{
//	int a[10], repeat, n, x, u, i, j;
//	scanf("%d", &repeat);
//	for (i = 1; i <= repeat; i++)
//	{
//		scanf("%d", &n);
//		for (j = 0; j < n; j++)
//			scanf("%d", &a[j]);
//		scanf("%d", &x);
//		u = search(a, n, x);
//		if (u == -1)
//			printf("Not found\n");
//		else
//			printf("index = %d\n", u);
//	}
//}
//int search(int* list, int n, int x)
//{
//	int index = -1, i;
//	for (i = 0; i < n; i++)
//		if (*(list + i) == x) 
//		{
//			index = i;
//			break;
//		}
//	return index;
//}
//#include <stdio.h>
//void bubbleSort(int* b, int n);
//int main()
//{
//    int n, i;
//    int* p, a[80];
//    scanf("%d", &n);
//    for (i = 0; i < n; i++) 
//    { 
//        scanf("%d", &a[i]);
//    }
//    p = a;
//    bubbleSort(p, n);
//    for (i = 0; i < n; i++) 
//    {
//        printf("%d ", a[i]);
//    }
//}
//void bubbleSort(int* b, int n) 
//{
//    int i, * p, t,j;
//   
//    for (i = 0; i < n-1; i++) 
//    {
//        p = b;
//        for (j = 0; j < n-i-1 ; j++)
//        {
//            if (*p > *(p + 1))
//            {
//                t = *p;
//                *p = *(p + 1);
//                *(p + 1) = t;
//            }
//            p = p + 1;
//        }
//    }
//}
//#include<stdio.h>
//int main()
//{
//	char a[41];
//	char b[41];
//	gets(a);
//	gets(b);
//	char* p, * q;
//	p = a;
//	q = b;
//	while (*p != '\0')
//	{
//		p++;
//	}
//	while (*q != '\0')
//	{
//		*p++ = *q++;
//	}
//	*p = '\0';
//	puts(a);
//}
#include <stdio.h>
#include <string.h>
//#define MAX 5
//#define MAX_LINE 10
//
//int main()
//{
//    int i, j;
//    char name[MAX][MAX_LINE];
//    char temp[2][100];
//
//    for (i = 0; i < MAX; i++)
//        scanf("%s", &name[i]);
//    strcpy(temp[0], name[0]);
//
//    for (i = 1; i < MAX; i++)
//        if (strcmp(temp[0], name[i]) < 0)
//            strcpy(temp[0], name[i]);
//    printf("Max is:");
//    printf(" %s", temp[0]);
//
//    return 0;
//}
#include<stdio.h>
#include<string.h>
void max_min(int a[], int len, int* pmax, int* pmin);
int main() 
{
    int n, i, max, min, len = 0;
    int* pmax, * pmin;
    int a[10000];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        len++;
    }
    max_min(a, len, &max, &min);
    printf("max = %d\nmin = %d", max, min);
    return 0;
}
void max_min(int a[], int len, int* pmax, int* pmin) 
{
    int i;
    *pmax = a[0];
    *pmin = a[0];
    for (i = 1; i < len; i++)
    {
        if (*pmax < a[i])
            *pmax = a[i];
        if (*pmin > a[i])
            *pmin = a[i];
    }
}

