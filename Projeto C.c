#include <stdio.h>
#include <string.h>

struct livro{
    char nome[50];
    char autor[50];
    int ano;
};

int main(){
    struct livro livros[2];
    for(int i = 0; i < 2; i++){
    

  
    printf("digite o titulo do livro %d:   \n", i+1);
    fgets(livros[i].nome, sizeof(livros[i].nome), stdin);
    livros[i].nome[strcspn(livros[i].nome, "\n")] = '\0';
    printf("digite o nome do autor do livro %d: \n", i+1);
    fgets(livros[i].autor, sizeof(livros[i].autor), stdin);
    livros[i].autor[strcspn(livros[i].autor, "\n")] = '\0';

    printf("digite o ano do livro %d: \n", i+1);
    scanf("%d", &livros[i].ano);
   getchar();
    if(livros[i].ano >= 2000){
        printf("%s\n", livros[i].nome);
        printf("Esse livro foi publicado depois dos anos 2000");
    }
}
    return 0;
}