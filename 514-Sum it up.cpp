#include <iostream>
using namespace std;

int input[15];
int t,n;
int temp[15]={0};

void recursion(int level, int sum, int ans[], int index){
    if(sum == t){
        int flag=0;
        int tem[15];
        // for( i = 0; i<=n; i++){
        //     cout<<temp[i]<<" "<<ans[i]<<endl;
        //     if(temp[i]!=ans[i]) break;
        // }
        // if(i==n) return;
        int j=0;
        for(int i = 0; i<=n; i++){
            //temp[i]=ans[i];
            if(ans[i]){
                // if(flag)cout<<"+";
                tem[j++]=ans[i];
                // flag=true;
            } 
        }
        for(int i = 0; i<j; i++){
            if(temp[i] != tem[i]) {
                flag = 1;
                break;
            }
        }
        if(!flag) return;
        // j=0;
        flag=0;
        for(int i = 0; i<j; i++){
            if(i)cout<<"+";
                cout<<tem[i];
                temp[i]=tem[i];
                // flag=1;
        }
        // for(int i = 0; i<=n; i++){
        //   // temp[i]=ans[i];
        //     if(ans[i]){
        //         if(flag)cout<<"+";
        //         cout<<ans[i];
        //         temp[j++]=ans[i];
        //         flag=1;
        //     } 
        // }
        cout<<endl;
        return;
    }
    if(level == n || sum > t) return;
    
    index++;
   
    ans[index] = input[level];
    //cout<<input[level];
    recursion(level + 1, sum + input[level], ans, index);
    ans[index] = 0;
    recursion(level + 1, sum, ans, index);
}

int main()
{
   freopen("input.txt","r",stdin);
   
   while(true){
       cin >> t >> n;
       if(t == 0) break;
       for(int i = 0; i < n; i++){
           cin >> input[i];
       }
       cout<<"sum of "<<t<<endl;
       int ans[15]={0};
    //   int index = 0;
       recursion(0,0,ans,0);
       
   }
   
   return 0;
}
