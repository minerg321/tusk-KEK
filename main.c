#include <stdio.h>
#include <stdlib.h>
#include "queue.h"
#include <locale.h>
int main()
{
setlocale(LC_CTYPE, "RUS");
printf("Введите количество элементов в очереди: ");
int i,k,el;
queue x;
queue_init (&x);
node *j;
scanf("%i", &k);
for (i = 0; i < k; i++)
{
scanf("%i", &el);
queue_push(&x,el);
}
printf("кек");
//del_odd(&x);
j=x.head;
while (j!=x.tail)
{
printf("%i\n", j->data);
j = j->next;
}
    return 0;
}



