#include <iostream>

using namespace std;



int main() {

	int t;

	cin>>t;

	while(t--){

	int c=0,p=-1;

    string s; 
    cin>>s;
    int n=s.length();
    if(n==1) 
        {
            cout<<"No"<<endl;
            continue;
        
        }

    for(int i=0;i<=n;i++) 
        if(s[i]=='1') 
        {
            c++;
            p=i+1;
            
        }

    if(c==0 ||(c==1&&p==n)) 
        cout<<"No"<<endl;

    else
        cout<<"Yes"<<endl;



	}

	return 0;


}