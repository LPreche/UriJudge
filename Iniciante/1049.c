#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
char animal[50],animal1[50],animal2[50];
scanf("%s %s %s",animal,animal1,animal2);

if(strcmp(animal,"vertebrado")== 0){
    if (strcmp(animal1,"ave") == 0){
        if(strcmp(animal2,"carnivoro")== 0)
            printf("aguia\n");
        if(strcmp(animal2,"onivoro")== 0)
            printf("pomba\n");
    }
    if(strcmp(animal1,"mamifero")== 0){
        if(strcmp(animal2,"onivoro")== 0)
            printf("homem\n");
        if(strcmp(animal2,"herbivoro")== 0)
            printf("vaca\n");
    }
}
if(strcmp(animal,"invertebrado")== 0){
    if (strcmp(animal1,"inseto") == 0){
        if(strcmp(animal2,"hematofago")== 0)
            printf("pulga\n");
        if(strcmp(animal2,"herbivoro")== 0)
            printf("lagarta\n");
    }
    if(strcmp(animal1,"anelideo")== 0){
        if(strcmp(animal2,"hematofago")== 0)
            printf("sanguessuga\n");
        if(strcmp(animal2,"onivoro")== 0)
            printf("minhoca\n");
    }
}
    
    return 0;
}