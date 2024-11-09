#include <stdio.h>
#include <conio.h>
#define z 1 // директива препроцесора – макровизначення
#define SQR(x) ((x) * (x)) // макрос з параметром – визначення квадрата числа
#define MAX(y, z) ((y) > (z) ? (y) : (z)) // макрос визначення найбільшого з двох чисел
#define MIN(y, z) ((y) < (z) ? (y) : (z)) // макрос визначення найменшого з двох чисел
#define ABS(x) ((x) >= 0 ? (x) : -(x)) // макрос визначення модуля числа
#define ADD(y, z) ((y) + (z)) // макрос для обчислення суми
#define RIZN(y, z) ((y) - (z)) // макрос для обчислення різниці

// виведення повідомлення та значення цілого числа
#define PRINTI(w) puts("control output"); \
 printf(#w"=%d\n", w)

// виведення повідомлення та значення дійсного числа
#define PRINTR(w) puts("result :"); \
 printf(#w"=%f\n", (float)w)

int main()
{
    puts("Lab 9.2.1 Using macros and preprocessing directive");
    int x, y, w; // змінні для розрахунків
    int n_kvadr, modul, max_val; // допоміжні змінні для зберігання результатів обчислень
    char ch; // відповідь чи продовжувати виконання програми

    do
    {
#if z == 1
        puts("Input 2 integer numbers");
        (void)scanf_s("%d", &x); // введення числа x
        PRINTI(x);
        (void)scanf_s("%d", &y); // введення числа y
        PRINTI(y);

        // Різниця між x і y
        int rizn_xy = RIZN(x, y);
        PRINTI(rizn_xy);

        // Квадрат різниці
        n_kvadr = SQR(rizn_xy);
        PRINTI(n_kvadr);

        // Абсолютна величина різниці
        modul = ABS(rizn_xy);
        PRINTI(modul);

        // Максимум між квадратом різниці та абсолютною величиною
        max_val = MAX(n_kvadr, modul);
        PRINTI(max_val);

        // Результат обчислення
        w = max_val;
        PRINTI(w);

#else // якщо z не дорівнює 1

        puts("Input 2 integer numbers");
        (void)scanf_s("%d", &x); // введення числа x
        PRINTI(x);
        (void)scanf_s("%d", &y); // введення числа y
        PRINTI(y);

        // Різниця між x і y
        int rizn_xy = RIZN(x, y);
        PRINTI(rizn_xy);

        // Різниця між y і x
        int rizn_yx = RIZN(y, x);
        PRINTI(rizn_yx);

        // Мінімум між різницями
        int min_val = MIN(rizn_xy, rizn_yx);
        PRINTI(min_val);

        // Результат обчислення
        w = min_val;
        PRINTI(w);

#endif // завершення блоку умовної компіляції

        puts("Repeat? y /n ");
        ch = _getch();
    } while (ch == 'y');

    return 0;
}
