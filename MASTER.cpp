#include <iostream>
#include<unordered_set>
#include <string>
using namespace std;

int count_distinct(int i,int j,int arr[])
{
    int count=0;
    unordered_set <int> s;
    for(int k=i;k<=j;k++)
    {
        s.insert(arr[k]);
    }
    return s.size();
    
    
}
int main() {
	int n,q,arr[n];
	int index,val,k,num,flag;
	cin>>n>>q;
	for(int i=0;i<n;i++)
	{
	    cin>>arr[i];
	}
	while(q--)
	{
	    cin>>flag;
	    if(flag==1)
	    {
	        
	        cin>>index>>val;
	        arr[index-1]=val;
	        
	    }
	    
	    else{
	        num=0;
	        cin>>k;
	        for(int i=1;i<=k;i++)
	        {
	            for(int j=i;j<=k;j++)
	            {
	                num=num+count_distinct(i-1,j-1,arr);
	            }
	            
	        }
	        cout<<num<<"\n";
	        
	    }
	    
	    
	}
	return 0;
}
