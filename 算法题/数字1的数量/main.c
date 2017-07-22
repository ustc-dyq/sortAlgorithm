#include<stdio.h>
#include<stdlib.h>
#include<math.h>
// 给定一个十进制正整数N，写下从1开始，到N的所有正数，计算出其中出现所有1的个数。

// 例如：n = 12，包含了5个1。1,10,12共包含3个1，11包含2个1，总共5个1。
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