#include <iostream>
#include "liste1.h"
using namespace std;

int main()
{

    LinkedList<int> listerino;
    listerino.addFirst(1);
    listerino.addLast(2);
    listerino.addLast(3);
    listerino.addLast(4);
    listerino.addLast(5);
    listerino.addLast(6);
    listerino.listeAvecImpare();
    listerino.listeAvecPare();
    listerino.printList();

    return 0;
}
