/*
Подвиг 4. Продолжите программу. 
В выходной поток fp в бинарном режиме запишите массив data (все элементы).
*/

#include <stdio.h>

int main(void)
{
    short data[] = {79 + 256*80, 81 + 256*82, 83 + 256*84, 85 + 256*86};
    FILE* fp = stdout; // имитация выходного потока
    fwrite(data, sizeof(short), sizeof(data) / sizeof(short), fp);
    
    // fclose(fp);
    
    return 0;
}