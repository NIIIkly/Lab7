#include <stdio.h>
#include <math.h>

int countIntersectionPoints(int x1, int y1, int r1, int x2, int y2, int r2) {
    double distance = hypot(x2 - x1, y2 - y1);

    if (distance > r1 + r2 || distance < fabs(r1 - r2))
        return 0;
    if (distance == r1 + r2 || distance == fabs(r1 - r2))
        return 1;
    return 2;
}

int main() {
    int x1, y1, r1, x2, y2, r2;
    scanf("%d%d%d", &x1, &y1, &r1);
    scanf("%d%d%d", &x2, &y2, &r2);
    int result = countIntersectionPoints(x1, y1, r1, x2, y2, r2);
    printf("Кількість точок перетину: %d\n", result);

    return 0;
}
