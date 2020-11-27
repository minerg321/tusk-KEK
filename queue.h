#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED
 typedef struct node
    {
    /** �������� ������ **/
      int data;
    /** ��������� �� ���������� ������ **/
      struct node *next;
    }node;
    /** ��������������� ���� �������, ��������� �� ������ � ����� ������� **/
     typedef struct queue
    {
    /** ��������� �� ������ ������� **/
      struct node *head;
    /** ��������� �� ��������� ������� **/
      struct node *tail;
    }queue ;
    /** ������������ ������� **/
    void queue_init (queue*);
    /** �������� �� ������� ������� **/
    int queue_is_empty (queue*);
    /** ������� ������� **/
    int queue_free (queue*);
    /** ������� �������� � ������� **/
    int queue_push(queue* , int);
    /** �������� �������� �� ������� � �������� ��� � ���������� e **/
    int queue_pop (queue*, int*);
    /** ���������� ������� �� ������ ������� **/
    int test(queue*);
     /** ������� ������ �������� **/
    //void del_odd(queue *q)


#endif // QUEUE_H_INCLUDED
