#include <iostream>
#include <cmath>
using namespace std;
int no_of_infected(int n, int d){
    int long long inf;
    if(d<=10)
    {
        inf=(int) pow(2,d);
        
    }
    else
    {
        inf=(int) pow(3,d-10) * (int) pow(2,10);
    }
    if(inf>n)
    {
        return n;
    }
    return inf;
    
    
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,d;
	    cin>>n>>d;
	    cout<<no_of_infected(n,d)<<"\n";
	    
	}
	return 0;
}
