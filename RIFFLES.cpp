#include <iostream>
#include <queue>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k,flag;
        queue <int> q1;
        queue <int> q2;
        cin>>n>>k;
        for(int i=1;i<=n;i++)
        {
            q1.push(i);
        }
        while(k--)
        {
            int size=q1.size();
            flag=1;
            for(int i=0;i<size;i++)
            {
                if(flag==1)
                {
                    q1.push(q1.front());
                    q1.pop();
                    flag=0;
                }
                else
                {
                    q2.push(q1.front());
                    q1.pop();
                    flag=1;
                    
                }
                    
            }
            while(!q2.empty())
            {
                q1.push(q2.front());
                q2.pop();
            }
                
        }
        while(!q1.empty())
        {
            cout<<q1.front()<<" ";
            q1.pop();
        }
        cout<<"\n";
            
            
            
            
            
        }
       return 0;         
}
    
	
