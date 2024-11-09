#include <stdio.h>
#include <conio.h>
#define z 1 // ��������� ������������ � ���������������
#define SQR(x) ((x) * (x)) // ������ � ���������� � ���������� �������� �����
#define MAX(y, z) ((y) > (z) ? (y) : (z)) // ������ ���������� ���������� � ���� �����
#define MIN(y, z) ((y) < (z) ? (y) : (z)) // ������ ���������� ���������� � ���� �����
#define ABS(x) ((x) >= 0 ? (x) : -(x)) // ������ ���������� ������ �����
#define ADD(y, z) ((y) + (z)) // ������ ��� ���������� ����
#define RIZN(y, z) ((y) - (z)) // ������ ��� ���������� ������

// ��������� ����������� �� �������� ������ �����
#define PRINTI(w) puts("control output"); \
 printf(#w"=%d\n", w)

// ��������� ����������� �� �������� ������� �����
#define PRINTR(w) puts("result :"); \
 printf(#w"=%f\n", (float)w)

int main()
{
    puts("Lab 9.2.1 Using macros and preprocessing directive");
    int x, y, w; // ���� ��� ����������
    int n_kvadr, modul, max_val; // ������� ���� ��� ��������� ���������� ���������
    char ch; // ������� �� ������������ ��������� ��������

    do
    {
#if z == 1
        puts("Input 2 integer numbers");
        (void)scanf_s("%d", &x); // �������� ����� x
        PRINTI(x);
        (void)scanf_s("%d", &y); // �������� ����� y
        PRINTI(y);

        // г����� �� x � y
        int rizn_xy = RIZN(x, y);
        PRINTI(rizn_xy);

        // ������� ������
        n_kvadr = SQR(rizn_xy);
        PRINTI(n_kvadr);

        // ��������� �������� ������
        modul = ABS(rizn_xy);
        PRINTI(modul);

        // �������� �� ��������� ������ �� ���������� ���������
        max_val = MAX(n_kvadr, modul);
        PRINTI(max_val);

        // ��������� ����������
        w = max_val;
        PRINTI(w);

#else // ���� z �� ������� 1

        puts("Input 2 integer numbers");
        (void)scanf_s("%d", &x); // �������� ����� x
        PRINTI(x);
        (void)scanf_s("%d", &y); // �������� ����� y
        PRINTI(y);

        // г����� �� x � y
        int rizn_xy = RIZN(x, y);
        PRINTI(rizn_xy);

        // г����� �� y � x
        int rizn_yx = RIZN(y, x);
        PRINTI(rizn_yx);

        // ̳���� �� ��������
        int min_val = MIN(rizn_xy, rizn_yx);
        PRINTI(min_val);

        // ��������� ����������
        w = min_val;
        PRINTI(w);

#endif // ���������� ����� ������ ���������

        puts("Repeat? y /n ");
        ch = _getch();
    } while (ch == 'y');

    return 0;
}
