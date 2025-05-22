#include <stdio.h> 

int main() {
   
    FILE *evenFile;
    FILE *oddFile;
    int i;

    
    evenFile = fopen("even_number.txt", "w");
    oddFile = fopen("odd_number.txt", "w");
    

    if (evenFile == NULL || oddFile == NULL) {
        printf("Error opening files!\n");
        return 1; 
    }

    
    for ( i = 50; i <= 70; i++) {
       
        if (i % 2 == 0) {
         
            fprintf(evenFile, "%d\n", i);
        } else {
         
            fprintf(oddFile, "%d\n", i);
        }
    }

 
    fclose(evenFile);
    fclose(oddFile);

    printf("even and odd Numbers written to files succesfully.\n");


    return 0;
}
/*OUTPUT
50
52
54
56
58
60
62
64
66
68
70

51
53
55
57
59
61
63
65
67
69
*/