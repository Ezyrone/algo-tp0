//
// Created by Jory Grzeszczak 
// TP-0
//

#include <stdio.h>

int add(int,int); //signature ou prototype de fonction add
int sum_elements_array(int arr[20], int n); // protorype de la fonction sum_elements_array

// definition de la fonction main
int main()
{
    int arr[20], size, result;
    int a;
    printf("Hello, World!\n");
    a=add(2,3);
    printf("%d\n",a);
    scanf("%d",&size);
    for (int i=0; i<size; i++) {
        scanf("%d",&arr[i]);
    }
    result=sum_elements_array(arr, size);
    printf("La somme des éléments est : %d\n",result);
    return 0;
}

// definition de la fonction add
/* 
* paramètres : a et b entiers
* complexité temporelle : O(1)
*/
int add(int a, int b) {
    return a+b;
}

// definition de la fonction sum_elements_array
/* 
* paramètres : un tableau d'entiers de taille n
* complexité temporelle : O(n)
*/
int sum_elements_array(int arr[20], int n) {
    int i, sum=0;
    for (i=0; i<n; i++) {
        sum+=arr[i];
    }
    return sum;
}