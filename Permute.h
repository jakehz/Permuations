#pragma once
#include <string>
using std::string;

class Node {
public:
	// initialize the node with a letter.
	Node(char let)
	{
		// new node points to nothing (can be changed later)
		next = NULL;
		// initialize data.
		data = let;
	}
	Node* next;
	char data;
};

class Permute {
public:
	// fill later
	Permute(string, string);
	// poplulates linked list with letters from word.
	void populate_list(string);
	void push_node(char);
	void permutate();
	size_t total_permut() { return total;}
	void print();
private:
	size_t total;
	string firstString;
	string secondString;
	Node* firstNode;
	Node* lastNode;
};
