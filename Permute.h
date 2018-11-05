#pragma once
#include <string>
using std::string;

class Node {
public:
	Node* next;
	string data;
};

class Permute {
public:
	// fill later
	Permute(string, string);
	// poplulates linked list with letters from word.
	void pop_list(string);
	void push_node();
	void permutate();
	void print();
private:
	size_t total;
	string firstString;
	string secondString;
	Node* firstNode;
	Node* lastNode;
};