//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int a[100] = { 0 };
//	int i, j;
//	int k = 1;
//	float h;
//	for (i = 0; i < 100; i++)
//	{
//
//		printf("数値を入力:> ");
//		scanf(" %d", &a[i]);
//		k = a[i];
//		if (k == 0)
//		{
//			break;
//		}
//		else if (k < 0)
//		{
//			printf("間違えました。（数値＜0不可）もう一回入力してください。\n");
//			i--;
//		}
//	}
//	printf("数値一覧: ");
//	for (j = i-1; j >= 0; j--)
//	{
//		
//		printf("%d ",a[j]);
//		k = a[j] + k;
//	}
//	h = (float)k / i;
//	printf("\n合計: %d\n平均: %.2f", k,h);
//	return 0;
//}

//Hokuriku University

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char cs[20] = {'H','o','k','u','r','i','k','u',' ','U','n','i','v','e','r','s','i','t','y'};
	char ch[20] = { 0 };
	int i, j, v;
	char c, d;
	int b = 1;
	int a = 0;
	int len = strlen(cs);  //lenはchの長さ
	while (b)
	{
		for (v = 0; v < len; v++)
		{
			ch[v] = cs[v];
			if (v == 20)
			{
				ch[v] = '\0';
			}
		}
		printf("挿入前の文字列：");
		puts(cs);
		printf("どの位置の文字の前に挿入しますか？");
		scanf("%d", &a);
		if (a < 0 || a > len)
		{
			printf("位置指定が正しくありません\n---------------------------\n");
		}
		else if (a >= 0 && a <= len)
		{
			printf("挿入後の文字列：");
			for (i = 0; i < len; i++)
			{
				if (i == a)
				{
					c = ch[i];
					ch[i] = '*';
					printf("%c", ch[i]);
					for (j = i+1; j < len + 1 ; j++)
					{
						d = ch[j];
						ch[j] = c;
						c = d;
						printf("%c", ch[j]);
					}
					printf("\n\n---------------------------\n");
					break;
				}
				printf("%c", ch[i]);
			}
			printf("もう一回やりませんか（1.もう一回　0.終わり）：");
			scanf("%d", &b);
			printf("\n---------------------------\n");
		}
	}
	return 0;
}