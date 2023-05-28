#include <stdio.h>

int main() 
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array:\n"); 
    for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
    }

    int NonSeven = 0; 
    int BigSeven = 0;
    int sum = 0; 
    int firstPositive = -1;
    int lastPositive = -1; 

    for (int i = 0; i < n; i++) 
    {
    if (arr[i] < 7) 
    {
    NonSeven++; 
    }
    if (arr[i] > 7)
    {
    BigSeven++;
    }
    if (arr[i] > 0) {
    if (firstPositive == -1) 
    {
    firstPositive = i; // Збереження індексу першого додатнього елементу
    }
    lastPositive = i; // Оновлення індексу останнього додатнього елементу
    }
    }

    int Yippee = 1;
    for (int i = 0; i < n; i++) {
    if (arr[i] != 7) 
    {
    Yippee = 0;
    break;
    }
    }
    if (Yippee) 
    {
    printf("Yippee");
    return 0;
    }

    if (firstPositive != -1 && lastPositive != -1) 
    {
    for (int i = firstPositive + 1; i < lastPositive; i++) {
    sum += arr[i]; // Додавання елементів між першим і останнім додатними елементами
    }
    }
    printf("Number of elements less than seven: %d\nNumber of elements greater than seven: %d\n", NonSeven, BigSeven); 
    printf("Sum of elements between the first and last positive elements: %d\n", sum); 
    return 0;
}