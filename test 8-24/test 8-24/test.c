#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//1.һ��������ֻ�����������ǳ���һ�Σ� �����������ֶ����������Ρ��ҳ����������֣����ʵ�֡�
//int main()
//{
//	int arr[10] = { 7, 5, 1, 4, 2, 2, 4, 6, 7, 1 };
//	int i = 0;
//	int j = 0;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		for (j = 0; j < sz; j++)
//		{
//			if (i != j&&arr[i] == arr[j])
//				break;                            //������û���ҵ���ȵľ;�ѭ��
//		}
//		if (j == sz)
//			printf("%d ", arr[i]);
//                   
//	}     
//		
//	return 0;
//}


//2.����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ�����ʵ�֡�

//int main()
//{
//	int money = 20;
//	int bottle = 20;
//	int empty = bottle;
//	while (empty > 1)
//	{
//		bottle += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d\n", bottle);
//	return 0;
//}

#include<string.h>

//3.ģ��ʵ��strcpy
//char *my_strcpy(char *dest,const char *src)
//{
//	char *ret = dest;
//	while (*dest++ = *src++)
//		;
//	return ret;
//}
//
//int main()
//{
//	char dest[20] = { 0 };
//	const char *p = "abcdef";
//	my_strcpy(dest, p);
//		printf("%s\n", dest);
//	return 0;
//}

//4.ģ��ʵ��strcat
//char *strcat( char *strDestination, const char *strSource );
//
//char *my_strcat(char *dest, const char *src)
//{
//	char *ret = dest;
//	while (*dest)
//	{
//		*dest++;
//	}
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//
//}
//int main()
//{
//	char dest[20] = "hello ";
//	const char *p = "world";
//	my_strcat(dest, p);
//	printf("%s\n", dest);
//	return 0;
//}

//3.ʵ��strstr 
//char *strstr( const char *string, const char *strCharSet );

//char *my_strstr(const char *s1, const char*s2)
//{
//	const char*p1 = s1;
//	const char*p2 = s2;
//	const char*start = p1;
//	while (*start)
//	{
//		p1 = start;
//		p2 = s2;
//		while (*p1 && *p2 && *p1 == *p2)
//
//		{
//			p1++;
//			p2++;
//		}
//		if (*p2 == 0)
//		{
//			return (char *)start;
//		}
//		start++;
//	}
//	return NULL;
//}
//int main()
//{
//	char arr[] = "abcdefabcdef";
//	char *ret = my_strstr(arr, "efa");
//	if (ret != NULL)
//	{
//		printf("�ҵ���\n");
//	}
//	else
//		printf("�Ҳ���\n");
//	return 0;
//}

//4.ʵ��strchr 
//char *strchr( const char *string, int c );

//char *my_strchr(const char *s1, const char str)
//{
//	while (*s1)
//	{
//		if (*s1 == str)
//			return (char *)s1;
//		else
//			s1++;
//	}
//	return NULL;
//}
//int main()
//{
//	char arr[] = "abdjijkmn";
//	char *ret = my_strchr(arr, 'j');
//	if (ret != NULL)
//		printf("�ҵ��ˣ�%x\n", ret);
//	else
//		printf("�Ҳ���\n");
//	return 0;
//}

//5.ʵ��strcmp 

//int strcmp( const char *string1, const char *string2 );

//#include<assert.h>
//int my_strcmp(const char *p1, const char *p2)
//{
//	assert(*p1&&*p2);
//	while (*p1 == *p2)
//	{
//		if (*p1 == '/0')
//			return 0;
//		p1++;
//		p2++;
//	}
//		if (*p1 > *p2)
//			return 1;
//		else if (*p1 < *p2)
//			return -1;
//}
//int main()
//{
//	char arr1[] = "abcdefgh";
//	char arr2[] = "abcdefg";
//	int ret=my_strcmp(arr1, arr2);
//	printf("%d\n", ret);
//	return 0;
//}

//

//6.ʵ��memcpy 
//void *memcpy(void *dest, const void *src, size_t n);
//
//#include<assert.h>
//void* my_memcpy(void *str, const void *dest, size_t n)
//{
//	assert(str&&dest);
//	char*p1 =(char *) str;
//	const char*p2 =(char *) dest;
//	void *ret = p1;
//	while (n--)
//	{
//		*p1 = *p2;
//		p2++;
//		p1++;
//		
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[] = "abcdefgh";
//	char arr2[] = "wahaha";
//	void *ret=my_memcpy(arr1, arr2, 4);
//	printf("%s\n", (char*)ret);
//	return 0;
//}

//7.ʵ��memmove
//void *memmove( void *dest, const void *src, size_t count );
#include<assert.h>
void* my_memmove(void *dest, const void *src, size_t n)
{
	assert(src&&dest);
	char*p1 = (char *)dest;
	const char*p2 = (char *)src;
	void *ret = p1;
	if (dest > src)
	{
		while (n--)
		{
			*p1++ = *p2++;
		}
		return ret;
	}
	else 
	{
		while (n--)
		{
			*(p1 + n) = *(p2 + n);
			
		}
		return ret;
	}
}
int main()
{
	char arr[] = "abcdefgh123456";
	/*my_memmove(arr+3, arr, 4);
	printf("%s\n", arr);*/
	my_memmove(arr , arr+3, 4);
	printf("%s\n", arr);
	return 0;
}