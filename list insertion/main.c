#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[50], element, num, i, position;

    printf("\nEnter the no. of elements: ");
    scanf("%d", &num);

    for(i = 0; i < num; i++){
        scanf("%d", &arr[i]);
    }

    printf("\nEnter the element to be inserted: ");
    scanf("%d", &element);

    printf("\nEnter the location: ");
    scanf("%d", &position);

    //Create space at the specified location
    for(i = num; i >= position; i--){
        arr[i] = arr[i - 1];
    }

    num++;
    arr[position - 1] = element;

    //print tout the result of the insertion
    for(i = 0; i < num; i++){
        printf("\n %d", arr[i]);
    }
    return 0;
}
