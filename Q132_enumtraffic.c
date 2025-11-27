#include <stdio.h>

enum TrafficLight {
    RED,
    YELLOW,
    GREEN
};

void displayAction(enum TrafficLight light) {
    switch (light) {
        case RED:
            printf("The light is RED. Action: Stop\n");
            break;
        case YELLOW:
            printf("The light is YELLOW. Action: Wait\n");
            break;
        case GREEN:
            printf("The light is GREEN. Action: Go\n");
            break;
        default:
            printf("Invalid light state.\n");
            break;
    }
}

int main() {
	printf("name-dev choudhary\nsap id-590028549\nbatch-6\ncource-bca");
    printf("\n----------------------------------------\n");
    enum TrafficLight currentLight;

    printf("Testing all traffic light states:\n");
    
    currentLight = RED;
    displayAction(currentLight);

    currentLight = YELLOW;
    displayAction(currentLight);

    currentLight = GREEN;
    displayAction(currentLight);

    return 0;
}
