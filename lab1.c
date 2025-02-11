#include <stdio.h>

void printAllRecords() {
    printf("You have entered the Print all records function\n");
}

void addRecord() {
    int partNum;
    char partName[50];
    float partSize;
    char partSizeMetric[10];
    float partCost;

    printf("Part number ->\n");
    scanf("%d", &partNum);

    printf("Part name ->\n");
    scanf(" %[^\n]", partName);

    printf("Part size ->\n");
    scanf("%f", &partSize);

    printf("Part size metric ->\n");
    scanf(" %[^\n]", partSizeMetric);

    printf("Part cost ->\n");
    scanf("%f", &partCost);

    printf("You entered\n");
    printf("Part number = %d\n", partNum);
    printf("Part name = %s\n", partName);
    printf("Part size = %.2f\n", partSize);
    printf("Part size metric = %s\n", partSizeMetric);
    printf("Part cost = $%.2f\n", partCost);
}

void deleteRecord() {
    printf("You have entered the delete last record function\n");
}

void numRecords() {
    printf("You have entered the Print number of records function\n");
}

void dataBaseSize() {
    printf("You have entered the Print database size function\n");
}

void numChanges(int *modifications) {
    int choice;
    printf("Please choose 1 or 2\n");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Modified the database %d times", *modifications);
    }

    else {
        (*modifications)++;
        printf("You have modified the database %d times", *modifications);
    }

}

void menu() {
    
    int looper = 6;
    int selection;
    int modifications = 0;

    while (looper <= 6) {

        printf("\nMenu\n");
        printf("1) Print all records\n");
        printf("2) Add record\n");
        printf("3) Delete the last record\n");
        printf("4) Print number of records\n");
        printf("5) Print databse size\n");
        printf("6) Print number of changes\n");
        printf("7) Exit\n");
        printf("Please enter your selection >");
        scanf("%d", &selection);

        switch (selection) {
            case 1:
                printAllRecords();
                break;

            case 2:
                addRecord();
                break;

            case 3:
                deleteRecord();
                break;
            
            case 4:
                numRecords();
                break;
                
            case 5:
                dataBaseSize();
                break;
            
            case 6:
                numChanges(&modifications);
                break;
            
            case 7:
                printf ("Exiting\n");
                looper = selection;
                break;
        }
    }
}

int main () {
    menu();
    return 0;
}