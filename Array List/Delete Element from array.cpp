#include<iostream>
using namespace std;

void traverse(int *a, int size){
    for(int i=0; i<size; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main()
{
	int arr[50], size, i, del, count=0;
	cout<<"Enter array size : ";
	cin>>size;

	cout<<"Enter array elements : ";
	for(i=0; i<size; i++){
		cin>>arr[i];
	}

	cout<<"Enter element to be delete : ";
	cin>>del;

	for(i=0; i<size; i++){
		if(arr[i]==del){
			for(int j=i; j<(size-1); j++){
				arr[j]=arr[j+1];
			}
			count++;
			break;
		}
	}

	if(count==0){
		cout<<"\nElement not found..!!"<<endl;
	}
	else{
		cout<<"\nElement deleted successfully..!!\n";
		cout<<"Now the new array is : ";
		traverse(arr, size-1);
	}

	return 0;
}

/** OUTPUT:
Enter array size : 4
Enter array elements : 2 4 6 8
Enter element to be delete : 6

Element deleted successfully..!!
Now the new array is : 2 4 8
**/
