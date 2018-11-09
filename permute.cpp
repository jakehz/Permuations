#include "Permute.h"
#include <iostream>
#include <string>

using namespace std;

Permute::Permute(string word1, string word2)
{
	firstNode = NULL;
	lastNode = NULL;
	firstString = word1;
	populate_list(word1);
	secondString = word2;
	total = 0;
}

void Permute::push_node(const char& letter)
{
	// case 1: list is empty.
	if (firstNode == NULL){
		// make a new node and make it the first and last node
		firstNode = new Node(letter);
		lastNode = firstNode;
	}
	// case 2: list isn't empty
	else {
		// make a new node and make it a node just after the last node (new last)
		Node* beforeLast = lastNode;
		lastNode = new Node(letter);
		beforeLast->next = lastNode;
	}
}

void Permute::remove_node(const char& letter)
{
	Node* precursor = NULL;
	Node* cursor = firstNode;
	while (cursor->data != letter)
	{
		precursor = cursor;
		cursor = cursor->next;
	}

}

void Permute::populate_list(string word)
{
	while (word != "")
	{
		// pop off each letter from the back
		// the linked list will store the word in reverse order.
		// take the last letter of the string
		push_node(word.back());
		word.pop_back();

	}
}

void Permute::print_curr_list()
{
	// make a cursor to iterate through the list
	Node* cursor = firstNode;
	// if the linked list contains any nodes
	if (cursor != NULL)
	{
		// print the first node
		cout << "'" << cursor->data << "'";
		// go on to the next
		cursor = cursor->next;
	}
	else
	{
		cout << "The linked list is empty." << endl;
	}

	// iterate and print each subsequent element
	while (cursor != NULL)
	{
		cout << "->" << "'" << cursor->data << "'";
		cursor = cursor->next;
	}
	cout << endl;

}

