#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

typedef struct nose Nose;

struct nose {
    char *opcion[30];
    char *msg[50];
};

void set_menu (Nose menu){
    printf("Ingrese el nombre de la opcion: ");
    fgets(*menu.opcion, 30, stdin);
    printf("Ingrese el mensaje de la opcion: ");
    fgets(*menu.msg, 50, stdin);
    
}

void show_menu (Nose *vector, int n){
    int counter = 0;
    for (vector; vector < n; ++vector){
        printf("%i) Opcion: %s", counter, *vector.opcion);
    }
}

void set_vector (Nose *vector){
    for (size_t i = 0; i < 4; i++){
        printf("Ingrese el nombre de la opcion: ");
        fgets(vector[i].opcion, 30, stdin);
        printf("Ingrese el mensaje de la opcion: ");
        fgets(vector[i].msg, 50, stdin);
    }
}

int main (void){
    printf("Bienvenido al menu de opciones\n");
    Nose menu;
    Nose (*vector)[4];
    // set_menu(menu);
    set_vector(&vector);
    show_menu(&vector, 4);
    return 0;
}


// Version de Bruno
// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>
// #include <stdbool.h>
// #include <string.h>

// typedef enum{
//     OPCION_PRIMERA,
//     OPCION_SEGUNDA,
//     OPCION_TERCERA,
// } options_t;

// typedef struct {
//     options_t option;
//     char option_string[256];
// } menu_t;

// void initialize_struct(menu_t *option){
//     int option_num;
//     char option_txt[256];
//     printf("Ingrese el número de opción: ");
//     scanf("%d", &option_num);
//     option->option = option_num;
//     printf("Ingrese el texto que acompaña a la opción: ");
//     scanf("%s", option_txt);
//     strcpy(option->option_string, option_txt);
//     return;
// }

// menu_t print_menu(menu_t *menu, size_t menu_items){
//     int i;
//     for (size_t i = 0; i < menu_items; i++){
//         printf("%d-%s\n", menu[i].option, menu[i].option_string);
//     }
//     printf("Seleccione una opción del menú: ");
//     scanf("%d", &i);
//     i -= 1;
//     return menu[i];

// }


// int main (void)
// {
//     menu_t selected_option;
//     menu_t menu[] = {
//         {1, "Opcion 1"},
//         {2, "Opcion 2"},
//         {3, "Opcion 3"},
//     };
//     selected_option = print_menu(menu, sizeof(menu)/sizeof(menu[0]));
//     printf("Option number selected: %d\nOption text: %s\n", selected_option.option, selected_option.option_string);
//     return 0;
// }