/*
Подвиг 5. Продолжите программу. Из потока fp в бинарном режиме прочитайте данные в массив data. 
Выведите в консоль в одну строчку через пробел прочитанные значения из массива data (в порядке считывания). 
Выводить нужно только прочитанные из потока fp значения, помещенные в массив data, а не все значения элементов массива.

Sample Input:
OPQRSTUV

Sample Output:
20559 21073 21587 22101
*/

#include <stdio.h>

int main(void)
{
    short data[10] = {0};
    FILE* fp = stdin; // имитация входного потока
    size_t length = 0;
    
    while(fread(&data[length], sizeof(short), 1, fp) == 1) {
        length = length + 1;
    }
    
    for(int i = 0; i < length; i = i + 1) {
        printf("%hd ", data[i]);
    }
    // fclose(fp);

    return 0;
}