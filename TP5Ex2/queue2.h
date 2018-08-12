#ifndef QUEUE2_H_INCLUDED
#define QUEUE2_H_INCLUDED
#define NMAX 10

using namespace std;

template<typename T> class Queue {


    private:

         T queueArray[NMAX];

    int head, tail, size;

    public:



    void enqueue(T x) {

        if (size == NMAX) {
        cout<<"The queue is full!\n";
        return;
}

        queueArray[tail] = x;
        tail = (tail + 1) % NMAX;
        size++;
}


        T dequeue() {
            if (isEmpty()) {
            cout<<"The queue is empty!\n";
        T x;
        return x;
}
        T x = queueArray[head];
        head = (head + 1) % NMAX;
        size--;
        return x;
}


    T peek() {
        if (isEmpty()) {
            cout<<"The queue is empty!\n";
            T x;
            return x;
    }
        return queueArray[head];
}

    int isEmpty() {

        return (size == 0);
    }


     int getHead(){


            return head;

        }

        int getTail(){

            return tail;

        }

        int getSize(){

            return size;

        }

    Queue() {

        head = tail = size = 0;

    }

};


#endif // QUEUE2_H_INCLUDED
