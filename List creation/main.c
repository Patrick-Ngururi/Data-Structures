#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, i;
    printf("Enter the number of terms you require: ");
    scanf("%d", &a);

    int x[a];

    if(i <= 0){
        printf("Invalid entry");
    }else{
        for(i = 1; i <= a; i++){
            printf("Enter value %d: ", i);
            scanf("%d", &x[i]);
        }
    }
    return 0;
}
