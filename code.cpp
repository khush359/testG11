#include<iostream>
using namespace std;

int search(int arr[],int n,int x){
	int i,index;
 for(i=0; i<n; i++)
    {
        if(arr[i]==x)
        {
            cout<< i;
            break;
        }
        else{
        	cout<<"Element not found";
		}
    }
    cout<<"\nFound at Index No."<<index;
    cout<<endl;	
}
int main()
{
	int n;
	cout<<"Enter number";
	cin>>n;
    int arr[n], i, num;
    cout<<"Enter "<<n<<" Numbers: ";
    for(i=0; i<n; i++)
        cin>>arr[i];
    cout<<"\nEnter a Number to Search: ";
    cin>>num;
   int result=search(arr,n,num);
    return 0;
}
