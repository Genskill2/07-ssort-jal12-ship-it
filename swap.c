#include <stdio.h>
#include <stdlib.h>

void swap_max(int arr[], int l, int n)
{
	int large = arr[n], index, flag = 0;
	for(int i=n; i<l; i++)
	{
		if(large < arr[i]) {
			large = arr[i];
			index = i;
			flag = 1;
		}
	}
	if(flag)
	{
		arr[index] = arr[n];
		arr[n] = large;
	}
}

void ssort(int arr[], int l)
{
	int i=0;
	do{
		swap_max(arr, l, i);
		i++;
	}while(i<l);
}
