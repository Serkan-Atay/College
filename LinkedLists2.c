#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct person {
    char firstname[30];
    char lastname[30];
    unsigned long phonenumber;
    struct person *next;
};

void print_menu(short *selection) {    
    printf("Bitte Auswahl treffen:\n");
    printf("1) Alle Eintraege anzeigen\n");
    printf("2) Neuen Eintrag hinzufuegen\n");
    printf("3) Eintrag loeschen\n");
    printf("4) Eintrag bearbeiten\n");
    printf("0) Programm beenden\n");
    printf("Auswahl: ");
    
    scanf("%hd", selection);
}

struct person* add_person(struct person *firstPerson) {
    struct person *p;
    p = malloc(sizeof(struct person));
    
    printf("\nNeuen Eintrag hinzufuegen\n");
    printf("Vorname: ");
    scanf("%s", p->firstname);
    printf("Nachname: ");
    scanf("%s", p->lastname);
    printf("Telefonnummer: ");
    scanf("%lu", &p->phonenumber);
    p->next = firstPerson;
    
    printf("\n");
    return p;
}

struct person* delete_person(struct person *firstPerson) {
    struct person* curr = firstPerson;
    struct person* prev = NULL;
    char f_name[30], l_name[30];
    
    if (firstPerson == NULL) {
        printf("\nTelefonbuch leer!\n\n");
        return firstPerson;
    }
    
    printf("\nWen moechten Sie loeschen?\n");
    printf("Vorname: ");
    scanf("%s", f_name);
    printf("Nachname: ");
    scanf("%s", l_name);

    while (curr != NULL) {
        if (strcmp(curr->firstname,f_name) == 0 && strcmp(curr->lastname,l_name) == 0) {
            printf("Person wird geloescht: %s, %s\n\n", curr->lastname, curr->firstname);
            if (prev == NULL) {
                firstPerson = curr->next;
                free(curr);
            } else {
                prev->next = curr->next;
                free(curr);
            }
        }
        
        prev = curr;
        curr = curr->next;
    }
    
    return firstPerson;
}

struct person* edit_person(struct person *firstPerson) {
    struct person* curr = firstPerson;
    char f_name[30], l_name[30];
    
    if (firstPerson == NULL) {
        printf("\nTelefonbuch leer!\n\n");
        return firstPerson;
    }
    
    printf("\nWen moechten Sie bearbeiten?\n");
    printf("Vorname: ");
    scanf("%s", f_name);
    printf("Nachname: ");
    scanf("%s", l_name);

    while (curr != NULL) {
        if (strcmp(curr->firstname,f_name) == 0 && strcmp(curr->lastname,l_name) == 0) {
            printf("Neuer Vorname: ");
            scanf("%s", curr->firstname);
            printf("Neuer Nachname: ");
            scanf("%s", curr->lastname);
            printf("Telefonbuch: ");
            scanf("%lu", &curr->phonenumber);
            
            break;
        }
        
        curr = curr->next;
    }
    
    return firstPerson;
}
struct person* reverseList(struct person *firstPerson) {
    struct person *curr;
    struct person *prev, *newcurr;
    struct person *newnext = NULL;
    
    while (curr != NULL) {
        // add entry to beginning of new list
        newcurr = curr;
        newcurr->next = newnext;
        newnext = newcurr;
        
        // remove entry from old list and advance pointer
        prev = curr;
        curr = curr->next;
        free(prev);
        
    }
    return newcurr;
}

void print_phonebook(struct person *firstPerson) {
    struct person *curr = firstPerson;
    
    if (firstPerson == NULL) {
        printf("\nTelefonbuch leer\n\n");
        return;
    }
    
    printf("\nTelefonbuch anzeigen\n");
    
    while (curr != NULL) {
        printf("%s, %s: %lu\n", curr->lastname, curr->firstname, curr->phonenumber);
        curr = curr->next;
    }
    printf("\n");
}
    
int main() {
    struct person *firstPerson = NULL;
    
    
    short menuSelection = -1;
    while (menuSelection != 1 && menuSelection != 2 && menuSelection != 0) {
        print_menu(&menuSelection);
        if (menuSelection == 1) {
            print_phonebook(firstPerson);
            menuSelection = -1;
        } else if (menuSelection == 2) {
            firstPerson = add_person(firstPerson);
            menuSelection = -1;
        } else if (menuSelection == 3) {
            firstPerson = delete_person(firstPerson);
            menuSelection = -1;
        } else if (menuSelection == 4) {
            firstPerson = edit_person(firstPerson);
            menuSelection = -1;
        } else if (menuSelection == 5) {
            firstPerson = reverseList(firstPerson);
            menuSelection = -1;
        } else if (menuSelection == 0) {
            return 0;
        }
    }
}
