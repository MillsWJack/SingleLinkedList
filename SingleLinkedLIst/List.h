#pragma once

#include <iostream>

struct node
{
	int data;
	node *next;
};

class List
{
public:
	List();
	~List();

	void CreateNode(int value);
	void Display();
	void InsertStart(int value);
	void InsertPosition(int pos, int value);
	void DeleteFirst();
	void DeleteLast();
	void DeletePosition(int pos);

private:
	node *m_Head;
	node *m_Tail;
};

