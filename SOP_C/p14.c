#include <stdio.h>

int main() {
	float w,l,h;

	printf("Jednostki muszą być zgodne!\n");
	printf("Podaj szerokość prostopadłościanu:\n");
	scanf("%f", &w);
	printf("Podaj długość prostopadłościanu:\n");
	scanf("%f", &l);
	printf("Podaj wysokość prostopadłościanu:\n");
	scanf("%f", &h);
	printf("Objętość wynosi %f j^3\n", w*l*h);
}
