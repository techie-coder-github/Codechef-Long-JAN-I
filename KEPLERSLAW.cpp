#include <iostream>
#include <cmath>
using namespace std;
class solution{
    public:
    int arr1[4];
    solution(int arr[])
    {
        for(int i=0;i<4;i++)
        {
            arr1[i]=arr[i];
        }
    }
    
    void check_kepler(){
        if(pow(arr1[0],2)/pow(arr1[2],3)==pow(arr1[1],2)/pow(arr1[3],3))
        {
            cout<<"Yes"<<"\n";
        }
        else
        {
            cout<<"No"<<"\n";
        }
    }
        
};
int main() {
    int t;
    cin>>t;
    int arr[4];
	while(t--)
	{
	    for(int i=0;i<4;i++)
	    {
	        cin>>arr[i];
	    }
	    solution ob(arr);
	    ob.check_kepler();
	    
	    
	    
	    
	}
	return 0;
}
