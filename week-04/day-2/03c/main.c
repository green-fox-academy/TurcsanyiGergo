#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
    int x;
    int y;
} point_t;

// TODO:
// Create a function the constructs a point
// It should take it's x and y coordinate as parameter

// TODO:
// Create a function that takes 2 Points as a pointer and returns the distance between them
point_t create_point(int point_x, int point_y);
float dist_calc(point_t point_1, point_t point_2);

int main()
{
    int a = 0;
    int b = 0;

    printf("Give me the coordinates of the first number: ");
    scanf("%d", &a);
    scanf("%d", &b);

    point_t point_one = create_point(a, b);
    printf("Type the coordinates of the second number");

    scanf("%d", &a);
    scanf("%d", &b);

    point_t point_two = create_point(a, b);

        float distance = dist_calc(point_one, point_two);
        printf("The distance between these points: %.3f\n", distance);

    return 0;
}
point_t create_point(int point_x, int point_y){
    point_t result;
    result.x = point_x;
    result.y = point_y;

    return result;
}
float dist_calc(point_t point_1, point_t point_2) {
    float dist;
    dist = sqrt(pow (point_2.x - point_1.x, 2) + pow(point_2.y - point_1.y, 2));

    return dist;
}
