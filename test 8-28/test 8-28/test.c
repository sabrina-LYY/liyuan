#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//1.模拟实现strncpy    char *strncpy( char *strDest, const char *strSource, size_t count );
#include "assert.h"
//char* my_strncpy(char *dest,const char*src, size_t count)
//{
//	assert(dest&&src);
//	char *ret = dest;
//	while (count--)
//	{
//		*dest++ = *src++;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[20] = "123456789abc";
//	char *p = "abcdef";
//	my_strncpy(arr1, p, 8);
//	printf("%s\n", arr1);
//	return 0;
//}


//2.模拟实现strncat         char *strncat( char *strDest, const char *strSource, size_t count );
//#include"assert.h"
//char*my_strncat(char *dest, const char *src, size_t num)
//{
//	assert(dest&&src);
//	char *ret = dest;
//	while (*dest)
//	{
//		dest++;
//	}
//	while (num--)
//	{
//		*dest++ = *src++;
//	}
//	return ret;
//
//}
//int main()
//{
//	char arr[20] = "abcdef";
//	char *p = "ghi";
//	my_strncat(arr, p, 2);
//	printf("%s\n", arr);
//	return 0;
//}

//3.模拟实现strncmp   int strncmp( const char *string1, const char *string2, size_t count );

int my_strncmp(const char*arr1, const char*arr2, size_t num)
{
	int ret = 0;
	assert(arr1&&arr2);
	while ((*arr2) && !(ret = *(arr1)-*(arr2)))
	{
		arr1++;
		arr2++;
	}
	if (ret<0)
		return ret = -1;
	else if (ret>0)
		return ret = 1;
	return (ret);
}
int main()
{
	char*p1 = "abcgef";
	char*p2 = "abcdgh";
	int ret=my_strncmp(p1, p2, 5);
	printf("%d\n", ret);
	return 0;
}
