#include <iostream>
#include <vector>

using namespace std;

int main ()
{
    int m, n;
    cin >> m >> n;
    char a[m][n];
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(a[i][j] == '*') cout << a[i][j] << ' ';
            else {
                int cnt = 0;
                for(int h = i-1; h <= i+1; h++){
                    for(int k=j-1; k <= j+1; k++){
                        if((0 <= h && h <= m-1) && (0 <= k && k <= n-1)){
                            if(a[h][k] == '*') cnt++;
                        }
                    }
                }
                cout << cnt << ' ';
            }
        }
        cout << endl;
    }
    return 0;
}
