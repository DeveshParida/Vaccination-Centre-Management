#include <iostream>
using namespace std;
struct queue
{
    int q[10];
    int front, rear;
};

void insert(struct queue *queue1, struct queue *queue2, struct queue *queue3, int item);

int main()
{
    struct queue q1, q2, q3;
    q1.front = q2.front = q3.front = q1.rear = q2.rear = q3.rear = -1;
    int n;
    //insertion
    cout << "Enter Item:";
    cin >> n;
    insert(&q1, &q2, &q3, n);
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

