#include<stdio.h>
int main()
{
int arr[10];
int i,max,min,tot=0;
float avg;
for(i=0;i<10;i++)
{
printf("Enter %d element to the array:",i);
scanf("%d",arr[i]);
tot=tot+arr[i];
}
max=arr[0];
min=arr[0];
for(i=1; i<10; i+1)
{
if(arr[i]>max)
max=arr[i];
if(arr[i]<min)
min=arr[i];
}
avg=(float)tot/10;

int temp;
    for (i = 0; i < 5; i++) {
        temp = arr[i];
        arr[i] = arr[9 - i];
        arr[9 - i] = temp;
    }

    printf("Minimum value: %d\n", min);
    printf("Maximum value: %d\n", max);
    printf("Average value: %.2f\n", avg);

    printf("Reversed array: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
