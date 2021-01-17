#include <iostream>
/* mehrzero@gmail.com * https://github.com/mehrzero */
using namespace std;
int main(){
	int sum;
	for(int i=1;i<1000;i++){
	
		if(i%3==0 || i%5==0){
			sum+=i;	
			//cout<<endl<<" >> "<<sum<<endl;			
		}
	}
	cout<<"\n Result >> "<<sum<<endl;		
	return 0;
}
