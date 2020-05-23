#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	double a[1000] = {0};
	int x,m,n,cnt=0;
	double y;
	cin >> m;
	for(int i=0;i<m;i++) {
		cin >> x >> y;
		a[x] += y;
	}
	cin >> n;
	for(int i=0;i<n;i++) {
		cin >> x >> y;
		a[x]+=y;
	}
	for(int i=0;i<1000;i++) {
		if(a[i]!=0) cnt++;
	}
	cout << cnt;
	for(int i=999;i>=0;i--) {
		if(a[i]!=0)
			cout << " " << i << " " << a[i];
	}
	return 0;
}
