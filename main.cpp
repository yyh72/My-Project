#include <iostream>
using namespace std;

void mysort(int arr[],int len)
{
	for(int i=len-1;i>0;i--)
	{
		for(int j=0;j<i;j++)
		{
			if(arr[j] > arr[j+1])
			{
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}

int main()
{
	int arr[] = {12,4,5,16,9,33,11};
	int len = sizeof(arr)/sizeof(arr[0]);
	
	mysort(arr,len);
	
	for(auto x : arr)
	{
		cout << x << " ";
	}
	cout << endl;

	return 0;
}
