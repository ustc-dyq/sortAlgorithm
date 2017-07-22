#include<stdio.h>
#include<stdlib.h>

void sort(int n[], int num) {
	for(int i = 1;i < num;i++) {
		for(int j = 0;j < i;j++) {
			if(n[i] < n[j]) {
				int temp = n[i];
				n[i] = n[j];
				n[j] = temp;
			}
		}
	}
	for(int i = 0;i < num;i++) {
		printf("%d ",n[i]);
	}
}

int main() 
{
	int num;
	scanf("%d",&num);
	int *p = new int[num];
	for(int i = 0;i < num;i++) {
		int temp;
		scanf("%d",&temp);
		p[i] = temp;
	}
	sort(p,num);
	system("pause");
	return 0; 
}