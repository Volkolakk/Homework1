#include <stdio.h>
#include <limits.h>

int main(void)
{
    int number; // Огранчение: Входные числа не более 2^30
    char number10[sizeof(int) * CHAR_BIT + 1] = {};
    int i=0;
    
    scanf_s("%9d", &number);// Принимаем число от -99999999 до 999999999

    while (getchar() != '\n') { // Проверка на корректность введенных данных
        printf("try again write correct number\n");
        while (getchar() != '\n');
        scanf_s("%d", &number);
    }
   
    while (i <= (sizeof(int) * CHAR_BIT -1)) { //Цикл записывает число в двоичной системе в массив 
        if (number & (1 << i))
            number10[(sizeof(int)* CHAR_BIT -1)-i] = '1';
        else
            number10[(sizeof(int)* CHAR_BIT -1)-i] = '0';
        i++;
    }

    printf("Answer:  %s", number10); //Печатаем ответ
}
