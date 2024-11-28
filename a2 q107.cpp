#include <stdio.h>

void flip(int num, int n) {
    int arr[100];
    int orgnum = num, i = 0;

    //Extract digits and store in an array
    while (orgnum != 0) {
        int r = orgnum % 10;
        arr[i] = r;
        orgnum /= 10;
        i++;
    }

    int dig = i; // Total number of digits

    //Reverse the array to arrange digits in proper order
    for (int k = 0; k < dig / 2; k++) {
        int temp = arr[k];
        arr[k] = arr[dig - 1 - k];
        arr[dig - 1 - k] = temp;
    }

    // Flip the last 'n' digits
    int start = dig - n; 
    int end = dig - 1;   
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }


    for (int i = 0; i < dig; i++) {
        printf("%d", arr[i]);
    }
    printf("\n");
}

int main() {
    int n, num;

    printf("Enter number: ");
    scanf("%d", &num);

    printf("Enter number of digits to flip: ");
    scanf("%d", &n);

    flip(num, n);
    return 0;
}
