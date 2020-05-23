#include <cstdio>
#include <iostream>
using namespace std;
const int max_n = 1000;

int main() {
	double p[max_n] = {0};
	int x,k,count = 0;
	double y;
	cin >> k;
	for(int i=0;i<k;i++) {
		cin >> x >> y;
		p[x] += y;
	}
	cin >> k;
	for(int i=0;i<k;i++) {
		cin >> x >> y;
		p[x] += y;
	}
	for(int i=0;i<max_n;i++) {
		if(p[i]!=0) count++;
	}
	printf("%d",count);
	for(int i=max_n;i>=0;i--) {
		if(p[i]!=0) printf(" %d %.1f",i,p[i]);
	}
	return 0;
}
