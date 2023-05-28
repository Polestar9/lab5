#include <stdio.h>

int main() 
{
    int n;
    printf("Enter the size of the array: "); 
    scanf("%d", &n);

    int arr[n];
    int sum = 0;
    int negative = 0;

    if (n <= 0) 
    {
    printf("You cannot have an empty, nor negative count array.");
    return 0;
    }

    printf("Enter the elements of the array:\n"); 
    for (int i = 0; i < n; i++) 
    {
    scanf("%d", &arr[i]);
    sum += arr[i]; // Додавання поточного елементу до суми
    if (arr[i] < 0) {
    negative++; // лічильник
    }
    }

    float average = (float)sum / n; // Обчислення середнього арифметичного

    if (negative > average) 
    { 
    printf("The number of negative elements is greater than the average.\nIncreasing each element of the array by 10: ");
    for (int i = 0; i < n; i++) 
    {
    arr[i] += 10;
    printf("%d ", arr[i]); // Виведення збільшеного елементу
    }
    printf("\nAverage is: %f", average);
    } 
    else if (negative == average) 
    {
    printf("The number of negative elements is equal to the average. \nAverage is: %f", average);
    } 
    else 
    {
    printf("The number of negative elements is not greater than the average.\nOutputting zeroes: ");
    for (int i = 0; i < n; i++) 
    {
    printf("0 ");
    }
    printf("\nAverage is: %f\n", average);
    }
    return 0;
}