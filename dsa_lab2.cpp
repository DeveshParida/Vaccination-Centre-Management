#include <iostream>
using namespace std;

class queue
{
    public:
    int q[10];
    int front, rear;
    queue()
    {
        for (int i = 0; i < 10; i++)
            q[i] = 0;
    }
};

void insert(struct queue *queue1, struct queue *queue2, struct queue *queue3, int item);

int dequeue(queue* q1, queue* q2, queue* q3)
{
    int sto = q1->q[q1->front], temp, track = 1;
    for (int x = 0, y = -1, z = -1, flag = 0; temp != 0;)
    {
        if (x < 9)
        {
            temp = q1->q[x] = q1->q[x+1];
            x++;
        }
        else if (x == 9 && flag == 0)
        {
            track = 2;
            if (y == -1)
            {
                temp = q1->q[x] = q2->q[y+1];
                y++;
            }
            else
            {
                temp = q2->q[y] = q2->q[y+1];
                y++;
            }
            if (y == 9)
                flag = 1;
        }
        else if (y == 9)
        {
            track = 3;
            if (z == -1)
            {
                temp = q2->q[y] = q3->q[z+1];
                z++;
            }
            else
            {
                temp = q3->q[z] = q3->q[z+1];
                z++;
            }
        }
    }
    if (track == 1)
        q1->rear--;
    if (track == 2)
        q2->rear--;
    if (track == 3)
        q3->rear--;
    return sto;
}

void disp(queue* q1, queue* q2, queue* q3)
{
    for (int i = 0; i < 10; i++)
        printf("\n%d\t%d\t%d\n", q1->q[i], q2->q[i], q3->q[i]);
}

int main()
{
    struct queue q1, q2, q3;
    q1.front = q2.front = q3.front = q1.rear = q2.rear = q3.rear = -1;
    int n;
    //insertion
    for (int i = 0; i < 30; i++)
    {
        insert(&q1, &q2, &q3, i);
    }
    disp(&q1, &q2, &q3);
    printf("\n\n1 DEQUEUE\n\n");
    n = dequeue(&q1, &q2, &q3);
    printf("\nDequeued element is %d", n);
    printf("\n\n2 DEQUEUE\n\n");
    n = dequeue(&q1, &q2, &q3);
    printf("\nDequeued element is %d", n);
    printf("\n\n3 DEQUEUE\n\n");
    n = dequeue(&q1, &q2, &q3);
    printf("\ndequeued element is %d", n);
    printf("\n\n4 DEQUEUE\n\n");
    n = dequeue(&q1, &q2, &q3);
    printf("\ndequeued element is %d", n);
    printf("\n\n5 DEQUEUE\n\n");
    n = dequeue(&q1, &q2, &q3);
    printf("\ndequeued element is %d", n);
    printf("\n\n6 DEQUEUE\n\n");
    n = dequeue(&q1, &q2, &q3);
    printf("\ndequeued element is %d", n);
    printf("\n\n7 DEQUEUE\n\n");
    n = dequeue(&q1, &q2, &q3);
    printf("\ndequeued element is %d", n);
    printf("\n\n8 DEQUEUE\n\n");
    n = dequeue(&q1, &q2, &q3);
    printf("\ndequeued element is %d", n);
    printf("\n\n9 DEQUEUE\n\n");
    n = dequeue(&q1, &q2, &q3);
    printf("\ndequeued element is %d", n);
    printf("\n\n10 DEQUEUE\n\n");
    n = dequeue(&q1, &q2, &q3);
    printf("\ndequeued element is %d", n);
    printf("\n\n11 DEQUEUE\n\n");
    n = dequeue(&q1, &q2, &q3);
    printf("\ndequeued element is %d", n);
    printf("\n\n12 DEQUEUE\n\n");
    n = dequeue(&q1, &q2, &q3);
    printf("\ndequeued element is %d", n);
    printf("\n\n13 DEQUEUE\n\n");
    n = dequeue(&q1, &q2, &q3);
    printf("\ndequeued element is %d", n);
    printf("\n\n14 DEQUEUE\n\n");
    n = dequeue(&q1, &q2, &q3);
    printf("\ndequeued element is %d", n);
    printf("\n\n15 DEQUEUE\n\n");
    n = dequeue(&q1, &q2, &q3);
    printf("\ndequeued element is %d", n);
    printf("\n\n16 DEQUEUE\n\n");
    n = dequeue(&q1, &q2, &q3);
    printf("\ndequeued element is %d", n);
    printf("\n\n17 DEQUEUE\n\n");
    n = dequeue(&q1, &q2, &q3);
    printf("\ndequeued element is %d", n);
    printf("\n\n18 DEQUEUE\n\n");
    n = dequeue(&q1, &q2, &q3);
    printf("\ndequeued element is %d", n);
    printf("\n\n19 DEQUEUE\n\n");
    n = dequeue(&q1, &q2, &q3);
    printf("\ndequeued element is %d", n);
    printf("\n\n20 DEQUEUE\n\n");
    n = dequeue(&q1, &q2, &q3);
    printf("\ndequeued element is %d", n);
    printf("\n\n21 DEQUEUE\n\n");
    n = dequeue(&q1, &q2, &q3);
    printf("\ndequeued element is %d", n);
    printf("\n\n22 DEQUEUE\n\n");
    n = dequeue(&q1, &q2, &q3);
    printf("\ndequeued element is %d", n);
    printf("\n\n23 DEQUEUE\n\n");
    n = dequeue(&q1, &q2, &q3);
    printf("\ndequeued element is %d", n);
    printf("\n\n24 DEQUEUE\n\n");
    n = dequeue(&q1, &q2, &q3);
    printf("\ndequeued element is %d", n);
    printf("\n\n25 DEQUEUE\n\n");
    n = dequeue(&q1, &q2, &q3);
    printf("\ndequeued element is %d", n);
    printf("\n\n26 DEQUEUE\n\n");
    n = dequeue(&q1, &q2, &q3);
    printf("\ndequeued element is %d", n);
    printf("\n\n27 DEQUEUE\n\n");
    n = dequeue(&q1, &q2, &q3);
    printf("\ndequeued element is %d", n);
    printf("\n\n28 DEQUEUE\n\n");
    n = dequeue(&q1, &q2, &q3);
    printf("\ndequeued element is %d", n);
    printf("\n\n29 DEQUEUE\n\n");
    n = dequeue(&q1, &q2, &q3);
    printf("\ndequeued element is %d", n);
    printf("\n\n30 DEQUEUE\n\n");
    n = dequeue(&q1, &q2, &q3);
    printf("\ndequeued element is %d", n);
    printf("\n\nFINAL LIST AFTER COMPLETE DEQUEUE\n\n");
    disp(&q1, &q2, &q3);
}

void insert(struct queue *queue1, struct queue *queue2, struct queue *queue3, int item)
{
    if (queue1->front == -1 && queue1->rear == 1)
    {
        queue1->front = queue1->rear = 0;
        queue1->q[queue1->rear] = item;
    }
    else if (queue1->rear == 9)
    {
        if (queue2->front == -1 && queue2->rear == -1)
        {
            queue2->front = queue2->rear = 0;
            queue2->q[queue2->rear] = item;
        }
        else if (queue2->rear == 9)
        {
            if (queue3->front == -1 && queue3->rear == -1)
            {
                queue3->front = queue3->rear = 0;
                queue3->q[queue3->rear] = item;
            }
            else if (queue3->rear == 9)
            {
                cout << "overflow";
            }
            else
            {
                queue3->rear++;
                queue3->q[queue3->rear] = item;
            }
        }
        else
        {
            queue2->rear++;
            queue2->q[queue2->rear] = item;
        }
    }
    else
    {
        queue1->rear++;
        queue1->q[queue1->rear] = item;
    }
}
