#include <stdlib.h>
#include <stdio.h>
#include <string.h>
//  don't know why instructors worked.
// error: variable-sized object may not be initialized
// warning: excess elements in arry initializer
int main()
{
    FILE *file_ptr = fopen("./employee_details.csv", "w");

    if (file_ptr == NULL) {
        printf("The file could not be opened\n");

        return EXIT_FAILURE;
    }

    const int num_records = 3;

    char* name_1 = "Alvin Johnson,";
    char* name_2 = "Deola Vas,";
    char* name_3 = "Kevin Wilson";

    char* name_1_ptr = (char*)malloc((strlen(name_1) + 1) * sizeof(char));
    char* name_2_ptr = (char*)malloc((strlen(name_2) + 1) * sizeof(char));
    char* name_3_ptr = (char*)malloc((strlen(name_3) + 1) * sizeof(char));

    strcpy(name_1_ptr, name_1);
    strcpy(name_2_ptr, name_2);
    strcpy(name_3_ptr, name_3);

    char* department_1 = "Production";
    char* department_2 = "Sales";
    char* department_3 = "Marketing";

    char* department_1_ptr = (char*)malloc((strlen(department_1) + 1) * sizeof(char));
    char* department_2_ptr = (char*)malloc((strlen(department_2) + 1) * sizeof(char));
    char* department_3_ptr = (char*)malloc((strlen(department_3) + 1) * sizeof(char));

    strcpy(department_1_ptr, department_1);
    strcpy(department_2_ptr, department_2);
    strcpy(department_3_ptr, department_3);

    char* id_1 = "EPRO2109";
    char* id_2 = "ESAL1901";
    char* id_3 = "EMAR1721";

    char* id_1_ptr = (char*)malloc((strlen(id_1) +1) * sizeof(char));
    char* id_2_ptr = (char*)malloc((strlen(id_2) +1) * sizeof(char));
    char* id_3_ptr = (char*)malloc((strlen(id_3) +1) * sizeof(char));

    strcpy(id_1_ptr, id_1);
    strcpy(id_2_ptr, id_2);
    strcpy(id_3_ptr, id_3);

    char* name[num_records][15];
    char* department[num_records][15] ;
    char* id[num_records][15] ;
    int age[num_records] ;

    name[0]={name_1};
    name[1]= name_2;
    name[2]= name_3;

    department[0]= department_1_ptr;
    department[1]= department_2_ptr;
    department[2]= department_3_ptr;

    id[0]= id_1_ptr;
    id[1]= id_2_ptr;
    id[2]= id_3_ptr; 

    age[0]= 25;
    age[1]= 31;
    age[2]= 21;    

    fprintf(file_ptr, "ID, Name, Department, Age\n");

    for (int i = 0; i < num_records; i++) {
        fprintf(file_ptr, "%s, %s, %s, %d\n", id[i], name[i], department[i], age[i]);
    }

    fclose(file_ptr);

    free(name_1_ptr);
    free(name_2_ptr);
    free(name_3_ptr);

    return EXIT_SUCCESS;
}