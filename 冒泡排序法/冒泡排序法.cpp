#include<iostream>
using namespace std;
int bubbleSort(int a[], int N) {
	int sw = 0;
	bool flag = 1;
	for (int i = 0; flag; i++) {
		flag = 0;
		for (int j = N - 1; j >= i + 1; j--) {
			//大于为降序，小于为升序。
			if (a[j] < a[j - 1]) {
				//交换相邻元素
				swap(a[j], a[j - 1]);
				flag = 1;
				sw++;
			}
		}
	}
	return sw;
}
int main()
{
	int a[100], n, sw;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sw = bubbleSort(a, n);
	for (int i = 0; i < n; i++) {
		if (i)cout << " ";
		cout << a[i];
	}
	cout << endl;
	cout << sw << endl;
	return 0;
}