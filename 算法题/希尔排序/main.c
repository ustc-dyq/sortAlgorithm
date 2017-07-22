#include<stdio.h>
#include<stdlib.h>
void shellSort(int a[], int n, int dk) {
	for(int i = dk;i < n; i++){
		if(a[i] < a[i-dk]) {
			int j = i-dk;
			int x = a[i];
			a[i] = a[i-dk];
			while(x < a[j]) {
				a[j+dk] = a[j];
				j = j - dk;
			}
			a[j+dk] = x;
		}
	}
}
void shellSort(int a[], int n) {
	int dk = n/2;
	while(dk >= 1) {
		shellSort(a,n,dk);
		dk = dk/2;
	}
}
int main() {

	int a[8] = {3,1,5,7,2,4,9,6};
	shellSort(a,8);
	for(int i = 0;i < 8;i++) {
		printf("%d ", a[i]);
	}
	system("pause");
    return 0;
}