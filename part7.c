//#include <stdio.h
int main() {
    float x, y;
    printf("Enter the x-coordinate: ");
    scanf("%f", &x);
    printf("Enter the y-coordinate: ");
    scanf("%f", &y);
    if (x == 0 && y == 0) {
        printf("The point is at the origin");
    } else if (x == 0) {
        printf("The point is on the y-axis");
    } else if (y == 0) {
        printf("The point is on the x-axis");
    } else if (x > 0 && y > 0) {
        printf("The point is in quadrant I");
    } else if (x < 0 && y > 0) {
        printf("The point is in quadrant II");
    } else if (x < 0 && y < 0) {
        printf("The point is in quadrant III");
    } else {
        printf("The point is in quadrant IV");
    }
    return 0;
}

