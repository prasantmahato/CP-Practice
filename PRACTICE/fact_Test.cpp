#include <iostream>
#include <string.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--){
        int n; cin>>n;

        int ans1[160]; memset(ans1, 0, sizeof(ans1));
        int ans2[160]; memset(ans2, 0, sizeof(ans2));
        ans1[0] = 1;

        for(int i = 2; i <= n; i++){

            int num = i, pos = 0;
            while(num){
                int dig = num%10;

                for(int j = 0; j < 160; j++){
                    int temp_ans = ans2[pos+j] + ans1[j]*dig;

                    ans2[pos+j] = temp_ans%10;
                    ans2[pos+j+1] += temp_ans/10;
                }

                pos++;
                num /= 10;
            }

            for(int i = 0; i < 160; i++){
                    ans1[i] = ans2[i];
                    ans2[i] = 0;
            }
        }

        int last_dig{160};
        for(int i = 159; i >= 0; i--){
            if(ans1[i] != 0){
                last_dig = i;
                break;
            }
        }

        for(int i = last_dig; i >= 0; i--)
            cout<<ans1[i];

        cout<<"\n";
    }

    return 0;
}