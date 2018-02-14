#include <iostream>
using namespace std;
//please enter only 1 or 2 or 3 not more or less
// Mohamed Wa'el Abdulhadi A'ref 20170260


int main(){
	int x = 21 , y , z ;
	while(x != 1)
	{
		cout<<"Enter a number(Player 1):"<<endl;
		cin>>y;
		if(y>3 || y < 0 || y >= x)
		{
			cout<<"Illegal Number"<<endl;
			break;
		}
		else
		{
			x = x - y ;
			cout<<x<<endl;
			if (x == 1){
				cout<<"Player 2 losess"<<endl;
				break;
			}
			else
			{
				cout<<"Enter a number(Player 2):"<<endl;
		        cin>>z;
				if(z > 3 || z < 0 || z >=x )
				{
					cout<<"Illegal Number"<<endl;
					break;
				}
				x = x - z ;
				cout<<x<<endl;
				if (x == 1){
				    cout<<"Player 1 losess"<<endl;
					break;
			    }
			}
		}

	}
	return 0;
}
