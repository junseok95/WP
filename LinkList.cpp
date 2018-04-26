#include <iostream>
using namespace std;

/*struct List
{
	int id;
	List *p;
};
void main()
{
	List item;
	item.id = 20;
	item.p = &item;
	cout << "item.id: " << item.id << "\n";
	cout << "item.p->id: " << item.p->id << "\n";
	cout << "item.p->p->id: " << item.p->p->id << "\n";
}*/

/*struct List
{
	int id;
	List *p;
};
void main()
{
	List a, b, c;
	a.id = 1; a.p = &b;
	b.id = 2; b.p = &c;
	c.id = 3; c.p = &a;
	cout << "a.id: " << a.id << "\n";
	cout << "b.id: " << a.p->id << "\n";
	cout << "c.id: " << a.p->p->id << "\n";
}*/

struct Node
{
	int value;
	Node *p;
};
void main()
{
	Node a, b, c, d;
	a.value = 10; a.p = &b;
	b.value = 20; b.p = &c;
	c.value = 30; c.p = &d;
	d.value = 40; d.p = NULL;

	Node *ppp = &a; // 시작점을 위한 새로운 포인터
	while (ppp != NULL)
	{
		cout << ppp->value << endl;
		ppp = ppp->p; // 다음 값을 나타낼 수 있게끔 ppp에 카피
	}
}