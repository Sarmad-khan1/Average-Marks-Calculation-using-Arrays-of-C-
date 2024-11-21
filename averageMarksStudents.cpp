#include <iostream>
using namespace std;
int main()
{
	system("cls");
	int n;
	cout<<"Enter the number of students: ";
	cin>>n;
	
	int scores[n];
	
	cout<<"The scores for "<<n<<" students: "<<endl;
	for(int i=0; i<n; i++){
		cout<<"Score of student "<<(i+1)<<" : ";
		cin>>scores[i];	 
	}
	int sum=0;
	for(int i=0; i<n; i++)
	{
		sum=sum+scores[i];
	}
	float average = sum/n;
	cout<<"The average marks of students comes out to be: "<<average<<endl;
	return 0;
	
	
}