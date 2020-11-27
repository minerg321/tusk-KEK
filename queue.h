#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED
 typedef struct node
    {
    /** Значение ячейки **/
      int data;
    /** Указатель на следуюущую ячейку **/
      struct node *next;
    }node;
    /** Непосредственно сама очередь, указатель на начало и конец очереди **/
     typedef struct queue
    {
    /** Указатель на первый элимент **/
      struct node *head;
    /** Указатель на последний элимент **/
      struct node *tail;
    }queue ;
    /** Инициалиация очереди **/
    void queue_init (queue*);
    /** Проверка на пустоту очереди **/
    int queue_is_empty (queue*);
    /** Очистка очереди **/
    int queue_free (queue*);
    /** Вставка элимента в очередь **/
    int queue_push(queue* , int);
    /** Удаление элимента из очереди и выгрузка его в переменную e **/
    int queue_pop (queue*, int*);
    /** Считывание элимета из головы очереди **/
    int test(queue*);
     /** Удаляет чётные элименты **/
    //void del_odd(queue *q)


#endif // QUEUE_H_INCLUDED
