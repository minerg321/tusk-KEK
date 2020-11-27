#include "queue.h"
#include <stdio.h>
#include <stdlib.h>

/** Инициалиация очереди **/
    void queue_init (queue *q)
    {
    q->head = q->tail = NULL;
    }
    /** Проверка на пустоту очереди **/
    int queue_is_empty (queue *q)
    {
    return!q->head;
    }
    /** Очистка очереди **/
    int queue_free (queue*q)
    {
    while(!queue_pop(q, NULL));
    return 0;
    }
    /** Вставка элимента в очередь **/
       int queue_push(queue *q,int e)
    {
        struct node *n=malloc(sizeof(struct node));
        if (!n)return-1;
        n->next=NULL;
        n->data=e;
        if(!q->head)
        q->tail=q->tail=n;
        else
        {
        q->tail->next=n;
        q->tail=n;
        }
        return 0;
    }
/** Удаление элимента из очереди и выгрузка его в переменную e **/
    int queue_pop (queue *q, int *e)
{
    struct node *t = q->head;
    if(!t) return -1;

    if(e)*e = q->head->data;
    if(q->head == q->tail)
    q->head = q->tail = NULL;
    else
    q->head = q->head->next;
    free(t);
    return 0;
}

    /** Считывание элимета из головы очереди **/
    int test(struct queue *q)
    {
      int x;
      x = q->head->data;
      return x;
    }
    /**
    void del_odd(queue *q)
{
    int *el = NULL;
    node *tmp1 = NULL;
    node *r = q->head;
    do
    {
        //printf("%d\n",r->value);
        if(r->value%2!=0)
        {
            if(q->head == r)
            {
                r=r->next;
                queue_pop(q,el);
            }
            else
            {
                if(tmp1)
                {
                tmp1->next=r->next;
                free(r);
                r=tmp1->next;
                }
            }

        }
        else
        {
            tmp1 = r;
            r=r->next;
        }
    }
    while(r!=NULL);
    q->tail = tmp1;
}
 **/
