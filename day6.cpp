#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define int long long int 

int32_t main() 
{
	//cout<<"GfG!";
	
    int t;
	cin >> t;
		
	while (t-->0) {
		int n;
		cin >> n;
		
		int a[n];
		for (int& x: a) cin >> x;
		
		vector<int> freq(n, 0);
		
		for (int i = 0; i < n; i++) {
			freq[abs((i+a[i])%n)]++;
		}
		
		bool flag = true;
		for (int i = 0; i < n; i++) {
			if (freq[i] != 1) flag = false;
		}
		
		if (flag) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}