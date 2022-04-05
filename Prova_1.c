#include <stdio.h>


int main(){
    char texto[50];
  /*
    printf("Pressione A B C para 2");
    printf("\nPressione D E F para 3");
    printf("\nPressione G H I para 4");
    printf("\nPressione J K L para 5");
    printf("\nPressione M N O para 6");
    printf("\nPressione P Q R S para 7");
    printf("\nPressione T U V para 8");
    printf("\nPressione W X Y Z para 9");*/
    printf("\n\nInforme as letra em minusculo: ");
    scanf("%s", texto);
    

    for (int i = 0;  texto[i] != '\0'; i++) {
       char letra = (texto[i]);
        

        
        if (letra == 'a' || letra == 'b' || letra == 'c') printf("%s\a","#2="); 
        else if (letra == 'd' || letra == 'e' || letra == 'f') printf("%s\a","#3=");
        else if (letra == 'g' || letra == 'h' || letra == 'i') printf("%s\a","#4=");
        else if (letra == 'j' || letra == 'k' || letra == 'l') printf("%s\a","#5=");
        else if (letra == 'm' || letra == 'n' || letra == 'o') printf("%s\a","#6=");
        else if (letra == 'p' || letra == 'q' || letra == 'r' || letra == 'S') printf("%s\a","#7=");
        else if (letra == 't' || letra == 'u' || letra == 'v') printf("%s\a","#8=");
        else if (letra == 'w' || letra == 'x' || letra == 'y' || letra == 'z') printf("%s\a","#9=");
    
        if(letra == 'a' || letra == 'd' || letra == 'g' || letra == 'j' || letra == 'm' || letra == 'p' || letra == 't' || letra == 'w') printf("%s\n", "1");
        else if (letra == 'b' || letra == 'e' || letra == 'h' || letra == 'k' || letra == 'n' || letra == 'q' || letra == 'u' || letra == 'x') printf("%s\n", "2");
        else if (letra == 'c' || letra == 'f' || letra == 'i' || letra == 'l' || letra == 'o' || letra == 'r' || letra == 'v' || letra == 'y') printf("%s\n", "3");
        else if (letra == 's' || letra == 'z') printf("%s\n", "4");
        else printf("%c", texto[i]);
        

    }
    
  
    return 0;
}