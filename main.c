/**
 |
 */
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    unsigned char R;
    unsigned char G;
    unsigned char B;
} dot;

int main()
{
    unsigned short screen_width = 1024;
    unsigned short screen_height = (screen_width * (3.0 / 4.0));
    dot * screen = malloc(screen_width * screen_height * sizeof(dot));
    dot * xDot;
    for (int h = 0; h < screen_height; h++) {
        for (int w = 0; w < screen_width; w++) {
            xDot = &screen[w + h];
            printf("%d x %d / addr: 0X%p / (R.G.B): %d:%d:%d\n", w, h, xDot, xDot->R, xDot->G, xDot->B);
            break;
        }
    }
    return 0;
}
