#include <iostream>
using namespace std;
int main()
{
	int n , m;
	float sum=0;
	cin >> n;
	cin >> m;
	if ((m < 0) || (n < 0 )|| (m > 10) || (n > 10))
	{
		return 0;
	}
	for (int i = -10; i <= m; i++)
	{
		for (int j = 1; j <= n; j++)
			sum += (float)((i + j) * (i + j) * (i + j) / j / j);
	}
	cout << sum ;
	return 0;
}