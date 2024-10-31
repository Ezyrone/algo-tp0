//
// Created by Jory Grzeszczak 
// TP-0
//

/*
* Sujet : Ecrire une fonction pour chaque points qui font les choses suivantes :
* 1 - La somme de n éléments d’un tableau (approches itérative et récursive)
* 2 - factorial=> par l'approche itérative et l'approche récursive
* 3 - Algorithmes de recherche (c.f. support de cours avec le même nom) 
*       i. recherche linéaire 
*       ii. recherche par dichotomie (itérative, récursive) 
* 4 - Renverser les éléments du tableau de type int[] 
*       e.g. Input: 22 33 5 66 7 
*       Output: 7 66 5 33 22 
* 5 - Affichez le nieme élément du séquence Fibonacci 
* 6 - Renverser une string et afficher s'il s'agit d'un palindrome ou non (exemple : kayak est un palindrome)
* 7 - Dans une string str, trouver une autre string substring. si substring est une sous partie de string str, votre fonction doit retourner l'index correspondant à l'élément (exemple: substring="her", str ="I am here" )
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <stdbool.h>


int add(int,int); //signature ou prototype de fonction add
int sum_elements_array(int arr[20], int n); // protorype de la fonction sum_elements_array
int linear_search(int arr[20], int n, int x); // prototype de la fonction linear_search
int dicotomie_search(int arr[20], int n, int x); // prototype de la fonction dicotomie_search
int reverse_string(char str[20]); // prototype de la fonction reverse_string
int reverse_array(int arr[20], int n); // prototype de la fonction reverse_array
int fibonacci(int n); // prototype de la fonction fibonacci
int palindrome(char str[20]); // prototype de la fonction palindrome
int substring(char str[20], char substring[20]); // prototype de la fonction substring

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

// definition de la fonction linear_search
/* 
* paramètres : un tableau d'entiers de taille n et un entier x
* complexité temporelle : O(n)
*/
int linear_search(int arr[20], int n, int x) {
    for (int i=0; i<n; i++) {
        if (arr[i]==x) {
            return i;
        }
    }
    return -1;
}

// definition de la fonction dicotomie_search
/* 
* paramètres : un tableau d'entiers de taille n et un entier x
* complexité temporelle : O(log n)
*/
int dicotomie_search(int arr[20], int n, int x) {
    int low = 0, high = n-1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == x) {
            return mid;
        } else if (arr[mid] > x) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return -1;
}

// definition de la fonction reverse_string
/* 
* paramètres : un tableau d'entiers de taille n et un entier x
* complexité temporelle : O(n)
*/
int reverse_string(char str[20]) {
    int i, j;
    for (i=0, j=strlen(str)-1; i<j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    return 0;
}

// definition de la fonction reverse_array
/* 
* paramètres : un tableau d'entiers de taille n et un entier x
* complexité temporelle : O(n)
*/
int reverse_array(int arr[20], int n) {
    int i, j;
    for (i=0, j=n-1; i<j; i++, j--) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    return 0;
}

// definition de la fonction fibonacci
/* 
* param"';s : un entier n
* complexité temporelle : O(n)
*/
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}  

// definition de la fonction palindrome
/* 
* paramètres : un tableau d'entiers de taille n et un entier x
* complexité temporelle : O(n)
*/
int palindrome(char str[20]) {
    int i, j;
    for (i=0, j=strlen(str)-1; i<j; i++, j--) {
        if (str[i] != str[j]) {
            return 0;
        }
    }
    return 0;
}

// definition de la fonction substring
/* 
* paramètres : un tableau d'entiers de taille n et un entier x
* complexité temporelle : O(n)
*/
int substring(char str[20], char substring[20]) {
    char c = str[0];
    int i=0, j;
    int k;
    while (c!='\0') {
        j=0;
        k=0;
        while (c==substring[0] && substring[j]!='\0'&& str[k]!='\0'&& k!=-1) {
            if (str[k]==substring[j]) {
                k++;
                j++;
            };
        }
        if (j==strlen(substring)) {
            return i;
        }
        i++;
        c = str[i];
    }
    return -1;  
    
}
