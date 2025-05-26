#include <stdio.h>
#include <string.h>

struct Laptop {
    char company_name[50];
    char processor[50];
    float price;
};

int main() {
    int n; 

    printf("Enter the number of laptops: ");
    scanf("%d", &n);

    struct Laptop laptops[n];

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for laptop %d:\n", i + 1);

        printf("Enter company name: ");
        scanf(" %s", laptops[i].company_name); 

        printf("Enter processor: ");
        scanf(" %s", laptops[i].processor);
        
        printf("Enter price: ");
        scanf("%f", &laptops[i].price);
    }

    printf("\nLaptop Details:\n");
    for (int i = 0; i < n; i++) {
        printf("\nLaptop %d:\n", i + 1);
        printf("Company Name: %s\n", laptops[i].company_name);
        printf("Processor: %s\n", laptops[i].processor);
        printf("Price: %.2f\n", laptops[i].price);
    }

    return 0;
}