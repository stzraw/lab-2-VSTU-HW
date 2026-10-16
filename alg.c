#include <locale.h>
#include <stdio.h>

int hw();

int main()
{
    setlocale(LC_CTYPE, "RUS");
    hw();
    return 0;
}

int hw()
{
    double X;
    double total;
    double tips;
	
    X = 5500.0;

    total = 4 * X;
    tips = total * 0.15;

    printf("Счёт на одного человека: %.2f руб.\n", X);
    printf("Общий счёт на 4 человек: %.2f руб.\n", total);
    printf("Чаевые официанту (15%%): %.2f руб.\n", tips);
    return 0;
}
