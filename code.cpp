#include <iostream>
using namespace std;


int main() {
    int n,FLAG=0;
    cout<<"Enter the size of Array";
    cin>>n;

    int A[n];

    cout<<"Enter the values in array";

    for (int i=0;i<n;i++)
        cin>>A[i];



    for (int a=0;a<n;a++)
    {

	for(int b=0;b<n-1;b++)

	{       if(A[b]>A[b+1])

            {FLAG=1;

        A[b]=A[b]+A[b+1];
        A[b+1]=A[b]-A[b+1];
        A[b]=A[b]-A[b+1];

            }



	}
	if(FLAG==0)
	break;
	else
	FLAG=0;

    }


    cout<<"\n  Sorted Array is ";
    for(int c=0;c<n;c++)
        cout<<A[c];

    return 0;
}
