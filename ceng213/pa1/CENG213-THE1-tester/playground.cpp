// //
// //  main.cpp
// //  CENG213-THE1-tester
// //
// //  Created by Ogul on 30.10.2022.
// //
// #include <iostream>
// #include "tester/Window.cpp"
// #include "tester/Browser.cpp"
// #include "tester/LinkedList.cpp"

// using namespace std;

// int main() {
//     Browser* brows = new Browser();
//     Window a;
//     Window b;
//     Window c;
//     Window d;
//     Tab A = Tab("eee", "ccc","mm");
//     Tab B = Tab("p", "nnn","lll");
//     Tab C = Tab("ooo", "w","q");
//     Tab D = Tab("ee", "z","vvv");
//     Tab E = Tab("l", "ddd","ooo");
//     Tab F = Tab("t", "cc","h");
//     Tab G = Tab("oo", "lll","xx");
//     Tab H = Tab("bbb", "oo","i");

//     a.print();
//     a.newTab(A);
//     a.changeActiveTabTo(123123);
//     a.print();
 
// 	return 0;
// };





// Iterative C++ program to reverse a linked list
// #include <bits/stdc++.h>
#include <iostream>
using namespace std;

/* Link list node */
struct Node {
	int data;
	struct Node* next;
	Node(int data)
	{
		this->data = data;
		next = NULL;
	}
};

struct LinkedList {
	Node* head;
	LinkedList() { head = NULL; }

	/* Function to reverse the linked list */
	void reverse()
	{
		// Initialize current, previous and next pointers
		Node* current = head;
		Node *prev = NULL, *next = NULL;

		while (current != NULL) {
			// Store next
			next = current->next;
			// Reverse current node's pointer
			current->next = prev;
			// Move pointers one position ahead.
			prev = current;
			current = next;
		}
		head = prev;
	}

	/* Function to print linked list */
	void print()
	{
		struct Node* temp = head;
		while (temp != NULL) {
			cout << temp->data << " ";
			temp = temp->next;
		}
	}

	void push(int data)
	{
		Node* temp = new Node(data);
		temp->next = head;
		head = temp;
	}
};

/* Driver code*/
int main()
{
	/* Start with the empty list */
	LinkedList ll;
	ll.push(20);
	ll.push(4);
	ll.push(15);
	ll.push(85);

	cout << "Given linked list\n";
	ll.print();

	ll.reverse();

	cout << "\nReversed linked list \n";
	ll.print();
	return 0;
}
