#include <iostream>

using namespace std;

bool check(int n)
{
	int so_dao = 0;
	while( n > 0){
		int res = n % 10;
		so_dao = so_dao * 10 + res;
		n /= 10;
	}
	if(n == so_dao) return true;
	return false;
}

int main(){
	int num;
	cin >> num;
	for(int i = 0; i < num; i ++){
		int a, b;
		cin >> a >> b;
		int cnt = 0;
		for(int j = a; j <= b; j++){
			if(check(j)) cnt++;
		}
		cout << cnt << endl;
	}
  return 0;
}

