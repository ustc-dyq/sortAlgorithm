#include<stdio.h>
#include<stdlib.h>
#include<math.h>
// ����һ��ʮ����������N��д�´�1��ʼ����N��������������������г�������1�ĸ�����

// ���磺n = 12��������5��1��1,10,12������3��1��11����2��1���ܹ�5��1��
int func(int x, int y, int z) 
{ 
	int sum = 0;
    int i = 0;
	while(i < (x-1)) {
		sum = sum * 10 + pow(10.0,i);
		i++;
	}
	if(x > 1) {
		if(y > 1) {
		sum = sum * y + pow(10.0,(x-1));
	} else if(y == 1){
		sum += z * 1 +1;
		}
	} else {
		if(y >= 1) {
			sum += 1;
		}
	}
	
	return sum;
}


void main() 
{
	int num;
	scanf("%d",&num);
	int sum = 0;
	for(int i = 1;i < 10;i++){
		int cs = num / pow(10.0,i);
		if(cs == 0) {
			for(int j = i;j > 0;j--) {
				cs = num / pow(10.0,(j-1));
				if(cs == 0) {
					continue;
				}
				num = num % (int)pow(10.0,(j-1));
				sum += func(j,cs,num);
			}
			printf("%d",sum);
			break;
		}
	}
	system("pause"); 
}