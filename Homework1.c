
#include <stdio.h>

int main()
{
    int number; // ����������: ������� ����� �� ����� 2^30
    char number10[sizeof(int) * 8 + 1];
    number10[sizeof(int) * 8] = '\0';
    int i = 0;

    scanf_s("%9d", &number);// ��������� ����� �� -99999999 �� 999999999

    while (getchar() != '\n') { // �������� �� ������������ ��������� ������
        printf("try again write correct number\n");
        while (getchar() != '\n');
        scanf_s("%d", &number);
    }

    while (i <= (sizeof(int) * 8 - 1)) { //���� ���������� ����� � �������� ������� � ������ 
        if ((number & (1 << i)) != 0)
            number10[(sizeof(int) * 8 - 1) - i] = '1';
        else
            number10[(sizeof(int) * 8 - 1) - i] = '0';
        i++;
    }

    printf("Answer:  %s", number10); //�������� �����
}