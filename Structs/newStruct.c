

#include <stdio.h>
#include <string.h>

/*

struct Car
{
    char logo[50];
    char color[50];
    int yearOfProduction;
    int saleRate;
    int noOfVehicle[10];
};

*/

typedef struct
{
    char tradeMark[50];
    char color[50];
    char size[50];
    int noOfItemsAvailable;

} Clothes;

typedef struct
{
    int x;
    int y;
} Point;

void printClothes(Clothes T_shirt);

int main()
{
    // struct Car Mercedis;

    Clothes T_shirt;

    /*

    strcpy(Mercedis.logo, "Mercedis");
    strcpy(Mercedis.color, "Black");
    Mercedis.yearOfProduction = 1865;
    Mercedis.saleRate = 85;

    Mercedis.noOfVehicle[0] = 1;
    Mercedis.noOfVehicle[1] = 2;
    Mercedis.noOfVehicle[2] = 3;
    Mercedis.noOfVehicle[3] = 4;

    */

    strcpy(T_shirt.tradeMark, "Marka");
    strcpy(T_shirt.color, "Red");
    strcpy(T_shirt.size, "XL");
    T_shirt.noOfItemsAvailable = 10;

    /*

    printf("Car logo is %s\n", Mercedis.logo);
    printf("The color of the car is %s\n", Mercedis.color);
    printf("Year of production is %d\n", Mercedis.yearOfProduction);

    */

    /*

    printf("T_shirt trade mark is %s\n", T_shirt.tradeMark);
    printf("The color of T_sirt is %s\n", T_shirt.color);
    printf("The size of T_shirt is %s\n", T_shirt.size);
    printf("Number of T_shirt available is %d\n", T_shirt.noOfItemsAvailable);

    */

    /*

    for (int i = 0; i < 4; i++)
    {
        printf("Number of vehicle is %d\n", Mercedis.noOfVehicle[i]);
    }

    */

    // printClothes(T_shirt);

    Point p1 = {1, 2};
    Point p2 = {.x = 10, .y = 20};

    // printf("p1.x = %d\n", p1.x);
    // printf("p1.y = %d\n", p1.y);

    printf("p2.x = %d\n", p2.x);
    printf("p2.y = %d\n", p2.y);

    return 0;
};

void printClothes(Clothes T_shirt)
{
    printf("T_shirt trade mark is %s\n", T_shirt.tradeMark);
    printf("The color of T_sirt is %s\n", T_shirt.color);
    printf("The size of T_shirt is %s\n", T_shirt.size);
    printf("Number of T_shirt available is %d\n", T_shirt.noOfItemsAvailable);
}