#include <iostream>
using namespace std;

int input[15];
int t,n;
int temp[15]={0};
bool none = true;

void recursion(int level, int sum, int ans[], int index){
    if(sum == t){
        int flag=0;
        int tem[15];
        int j=0;
        for(int i = 0; i<=n; i++){
            if(ans[i]){
                tem[j++]=ans[i];
            } 
        }
        for(int i = 0; i<j; i++){
            if(temp[i] != tem[i]) {
                flag = 1;
                break;
            }
        }
        if(!flag) return;
        for(int i = 0; i<j; i++){
            if(i)cout<<"+";
                cout<<tem[i];
                temp[i]=tem[i];
        }
        cout<<endl;
        none = false;
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
//    freopen("input.txt","r",stdin);
   
   while(true){
       cin >> t >> n;
       if(t == 0) break;
       for(int i = 0; i < n; i++){
           cin >> input[i];
       }
       cout<<"Sums of "<<t<< ":" << endl;
       int ans[15]={0};
       none = true;
    //   int index = 0;
       recursion(0,0,ans,0);
       if(none) cout << "NONE" << endl;
       
   }
   
   return 0;
}
