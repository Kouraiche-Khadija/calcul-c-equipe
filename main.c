#include <stdio.h>
int produit(int a,int b){ 
    return a*b;
}  
float moyenne( int a,int b){ 
    return (float)(a+b)/2.0;
}
int main(){ 
    printf(" Projet collaboratif - version main\n");
    int c=produit(4,5);
    printf(" Le produit est:%d\n",c);
    float m=moyenne(10,15);
    printf("la moyenne est :%.2f\n",m);
    return 0;
}