#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_USERS 100
#define NAME_LENGTH 50
#define EMAIL_LENGTH 50
#define PASSWORD_LENGTH 20

typedef struct {
    char name[NAME_LENGTH];
    char email[EMAIL_LENGTH];
    char password[PASSWORD_LENGTH];
} User;

// Função para registrar usuário
void register_user(User users[], int *user_count) {
    if (*user_count >= MAX_USERS) {
        printf("Limite de usuários alcançado.\n");
        return;
    }

    User new_user;

    printf("NOME: ");
    scanf("%[^\n]%*c", new_user.name);

    printf("EMAIL: ");
    scanf("%[^\n]%*c", new_user.email);

    printf("SENHA: ");
    scanf("%[^\n]%*c", new_user.password);

    users[*user_count] = new_user;
    (*user_count)++;

    printf("\n--- Usuário registrado ---\n");
    printf("NOME: %s\n", new_user.name);
    printf("EMAIL: %s\n", new_user.email);
    printf("SENHA: %s\n", new_user.password);  // Cuidado: não imprima senhas em produção
    printf("\n");
}

int main() {
    User users[MAX_USERS];
    int user_count = 0;

    printf("=== Registro de Usuários ===\n");
    register_user(users, &user_count);

    return 0;
}