#include <iostream>
using namespace std;

int main() 
{
	int n,k,a;
	int total = 0;
	int i = 0;
	
	cin >> n >> k;
	
	for(i = 0; i < n; i++)
	{
		cin >> a;
		
		total += a;
		k -= min(total,8);
		total -= min(total,8);
		
		//cout << i << ' ' << a << ' ' << k << ' ' << total << endl;
		
		if( k <= 0 )
			break;
	}
	
	if( k <= 0 )
		cout << i+1;
	else
		cout << -1;
	
	 
	// your code goes here
	return 0;
}