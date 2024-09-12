#include <stdio.h>

int main()
{

    int employee_num, work_hour;
    double salary, rate;
    scanf("%d %d %lf", &employee_num, &work_hour, &rate);
    salary = (work_hour * rate);
    printf("NUMBER = %d\nSALARY = U$ %.2lf\n", employee_num, salary);

    return 0;
}