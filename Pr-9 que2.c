#include <stdio.h>
#include <string.h> 

struct Student {
    int roll_no;
    char name[50];
    int chem_marks;
    int maths_marks;
    int phy_marks;
    float percentage; 
};

int main() {

    struct Student students[5];
    int i;

    printf(" Mark Sheet Generation Program \n\n");


    for (i = 0; i < 5; i++) {
        printf("Enter details for student %d:\n", i + 1);

        printf("Roll No: ");
        scanf("%d", &students[i].roll_no);
        getchar(); 
        printf("Name: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = 0; 

        printf("Chemistry Marks (out of 100): ");
        scanf("%d", &students[i].chem_marks);

        printf("Maths Marks (out of 100): ");
        scanf("%d", &students[i].maths_marks);

        printf("Physics Marks (out of 100): ");
        scanf("%d", &students[i].phy_marks);

      
        students[i].percentage = (float)(students[i].chem_marks + students[i].maths_marks + students[i].phy_marks) / 300.0 * 100.0;

        printf("\n");
    }


    printf("\n--- Student Mark Sheets ---\n");
    printf("--------------------------------------------------------------------------------\n");
    printf("Roll No.\tName\t\tChemistry\tMaths\t\tPhysics\t\tPercentage\n");
    printf("--------------------------------------------------------------------------------\n");

    for (i = 0; i < 5; i++) {
        printf("%d\t\t%-15s\t%d\t\t%d\t\t%d\t\t%.2f%%\n",
               students[i].roll_no,
               students[i].name,
               students[i].chem_marks,
               students[i].maths_marks,
               students[i].phy_marks,
               students[i].percentage);
    }
    printf("--------------------------------------------------------------------------------\n");

    return 0;
}
/*output
 Mark Sheet Generation Program

Enter details for student 1:
Roll No: 121
Name: raj patel
Chemistry Marks (out of 100): 89
Maths Marks (out of 100): 86
Physics Marks (out of 100): 84

Enter details for student 2:
Roll No: 122
Name: divya sharma
Chemistry Marks (out of 100): 69
Maths Marks (out of 100): 98
Physics Marks (out of 100): 78

Enter details for student 3:
Roll No: 123
Name: piyush mishra
Chemistry Marks (out of 100): 72
Maths Marks (out of 100): 87
Physics Marks (out of 100): 93

Enter details for student 4:
Roll No: 124
Name: vatsal patel
Chemistry Marks (out of 100): 68
Maths Marks (out of 100): 96
Physics Marks (out of 100): 85

Enter details for student 5:
Roll No: 125
Name: sagar trivedi
Chemistry Marks (out of 100): 95
Maths Marks (out of 100): 86
Physics Marks (out of 100): 54


--- Student Mark Sheets ---
--------------------------------------------------------------------------------
Roll No.        Name            Chemistry       Maths           Physics         Percentage
--------------------------------------------------------------------------------
121             raj patel       89              86              84              86.33%
122             divya sharma    69              98              78              81.67%
123             piyush mishra   72              87              93              84.00%
124             vatsal patel    68              96              85              83.00%
125             sagar trivedi   95              86              54              78.33%
--------------------------------------------------------------------------------

--------------------------------

*/