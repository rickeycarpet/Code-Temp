#include<stdio.h>
#include<conio.h>
void insertionSort(int arr[], int n)
{
    int i,j,k;
    for(i=1; i<n; i++)
    {
        k=arr[i];
        j=i-1;
    while(j>=0 && arr[j]>k)
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=k;
    }
}
void print(int arr[], int n)
{
    int i;
    for(i=0; i<n; i++)
        printf("%d", arr[i]);
    printf("\n ");
}
int main()
{
    int arr[]={10,15,89,85,23};
    int n=sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr,n);
    print(arr,n);
    return 0;
}
