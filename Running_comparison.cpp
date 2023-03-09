#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,ans=0;
        int a[n],b[n];
        for(int i = 0;i<n;i++){
            cin >> a[i];
        }
        for(int i = 0;i<n;i++){
            cin >> b[i];
        }

        for(int j = 0;j<n;j++){
            if(a[i] > b[i])
            {   
                if(a[i] <= 2*b[i]){
                    ans++;
                }
              
            }
            if(a[i] < b[i])
            {   
                if(2*a[i] >= b[i]){
                    ans++;
                }
              
            }
            else{
                ans++;    
            }
            
        }
        cout << ans << endl;
    }
}