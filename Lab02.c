#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_CTYPE, "Russian");
    const int norm_day=38;
    const float mnz_hours=1.5;
    float x = 500;
    float A = 56;
    float hours_after = A - norm_day;
    float pay = norm_day * x;
    float pay_after = hours_after * mnz_hours*x;
    float total_pay = pay + pay_after;
    printf("Работник зарабатывает %.1f руб. за каждый из 38 часов своей работы. Ему платят в 1,5 раза больше за каждый час сверх 38 часов. Какую сумму он получит, если работает %.1f часов? (а должно быть заведомо больше 38 часов).\n", x, A);
    printf("Всего заплатят: %.1f рублей\n", total_pay);
}