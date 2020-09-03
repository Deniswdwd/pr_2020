/* @file   пр.cpp
* @author Максютенко Д.Б., гр. 515a
* @date   22 июнь 2020
* @brief  практика
*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*  функция отвечает за выполнение операций
над вводимыми элементами для последующих
действий с получеными значениями
*/
void operations(float a1, float a2, float b1, float b2, float c1, float c2, float x1, float x2)
{
    double ab, bc, ca;
    ab = (a1-x1)*(b2-a2) - (b1-a1)*(a2-x2);
    bc = (b1-x1)*(c2-b2) - (c1-b1)*(b2-x2);
    ca = (c1-x1)*(a2-c2) - (a1-c1)*(c2-x2);
    fas (ab, bc, ca);
    return 0;
}
/* функция отвечает за распределение
и вывод соответствующей строки
*/
void fas(double ab, double bc, double ca)
{
    if (ab == 0)
        printf("your point on line AB\n");
    else if (bc == 0)
        printf("your point on line BC\n");
    else if (ca == 0)
        printf("your point on line CA\n");
        else
         if (((ab>0)&&(bc>0)&&(ca>0))||((ab<0)&&(bc<0)&&(ca<0)))
            printf("point inside");
         else printf("point outside");
         return 0;
}

int main()
{
    float  a1,a2,b1,b2,c1,c2,x1,x2;
    printf("input point A \n");
    scanf("%f%f", &a1, &a2);
    printf("input point B \n");
    scanf("%f%f", &b1,&b2);
    printf("input point C \n");
    scanf("%f%f", &c1,&c2);
    printf("input your point \n");
    scanf("%f%f", &x1,&x2);
    operations(a1, a2, b1, b2, c1, c2, x1, x2);
    return 0;
}
