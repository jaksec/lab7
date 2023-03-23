#include <stdio.h>

void bubbleSort(int arr[], int n) {
    
    int x;
    int y;
    int temp;
    
    int numswap[n];
    
    for (x = 0; x < n; x++) {
        numswap[x] = 0;
    }

    for (x = 0; x < n-1; x++) 
    { 
        for (y = 0; y < n-x-1; y++) 
        {
            if (arr[y] > arr[y+1]) 
            {
                temp = arr[y];
                arr[y] = arr[y+1];
                arr[y+1] = temp;
                numswap[y]++;
            }
        }
    }
    
    printf("\nThe number of swaps in each index: ");

    printf("\n\n");

    for (int r = 0; r < n; r++)
    {
        printf("%d ", r);
    }

    printf(" (index)");

    printf("\n\n");

    for (int s = 0; s < n; s++) 
    {
        printf("%d ", numswap[s]);
    }

    printf(" (swaps)");

    printf("\n");
}

int main() 
{ 
    int arr[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    bubbleSort(arr, n);
    
    return 0;
}