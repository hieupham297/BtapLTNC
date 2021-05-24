#include <iostream>
using namespace std;

struct Node {
	const char* element;
	Node* next;
	
	Node (const char* e = NULL, Node* n = NULL){
		element = e;
		next = n;
	}
};

struct SLinkedList {
	Node* head;
	Node* tail;
	long size;
	
	SLinkedList() {
		head = NULL;
		tail = NULL;
		size = 0;
	}
	
	bool isEmpty() {
		return 	head == NULL;
	}
	
	void addFirst (const char *s){
		Node* newNode = new Node (s,head);
		head = newNode;
	}
	
	void addLast(const char* s) {
		Node* newNode = new Node(s, NULL);
		if(head == NULL) head = newNode;
		else tail->next = newNode;
		tail = newNode;
	}
	
	void removeFirst (){
		Node* old = head;
		head = head->next;
		delete old;
	}
	
	void destructor(){
		while(head!=NULL){
			Node* tmp = head;
			head = head->next;
			delete tmp;
		}
		tail = NULL;
	}
	
	void removeLast (){
		Node *tmp = head;
		while (tmp->next != tail) tmp = head->next;
		
		Node* tmp2 = tail;
		tail = tmp;
		tmp = tmp2;
		delete tmp;
		
		tail->next = NULL;
	}
	
	void insertAfter (Node* p, const char* s){
		Node* newNode = new Node (s, p->next);
		p->next = newNode;
	}
	
	void print () {
		for(Node* p = head; p!=NULL; p = p->next){
			cout << p->element << ' ';
		}
	}
	
};

SLinkedList linkedList;

void testA1 (){
	linkedList.addLast("Rome");
	linkedList.addLast("Zurich");
	linkedList.addFirst("Vienna");
	linkedList.print();
}

void testA2 (){
	linkedList.removeFirst();
	linkedList.print();
}

void testA3 (){
	linkedList.destructor();
	linkedList.print();
}

void testA4 (){
	linkedList.addLast("Rome");
	linkedList.addLast("Zurich");
	linkedList.addFirst("Vienna");
	linkedList.removeLast();
	linkedList.print();
}

void testA5 (){
	linkedList.insertAfter(linkedList.head, "Seattle");
	linkedList.print();
}

int main(){
	testA1();
	cout << endl;
	testA2();
	cout << endl;
	testA3();
	cout << endl;
	testA4();
	cout << endl;
	testA5();
	return 0;
}
