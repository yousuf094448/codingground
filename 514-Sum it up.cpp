#include <iostream>
using namespace std;

int input[15];
int t,n;

void recursion(int level, int sum, int ans[], int index){
    if(sum == t){
        for(int i = 0; i<=index; i++){
            if(ans[i]) cout<<ans[i]<<"+";
        }
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
