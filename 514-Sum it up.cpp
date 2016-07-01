#include <iostream>
using namespace std;

int input[15];
int t,n;

void recursion(int level, int sum){
    if(sum == t){
        cout << "yes" << endl;
        return;
    }
    if(level == n || sum > t) return;
    
    recursion(level + 1, sum);
    recursion(level + 1, sum + input[level])
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
       
   }
   
   return 0;
}

