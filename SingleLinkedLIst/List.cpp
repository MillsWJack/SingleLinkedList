#include "List.h"

List::List()
{
	m_Head = NULL;
	m_Tail = NULL;
}

List::~List()
{
}

void List::CreateNode(int value)
{
	node *temp = new node;
	temp->data = value;
	temp->next = NULL;

	if (m_Head == NULL)
	{
		m_Head = temp;
		m_Tail = temp;
		temp = NULL;
	}
	else
	{
		m_Tail->next = temp;
		m_Tail = temp;
	}
}

void List::Display()
{
	node *temp = new node;
	temp = m_Head;

	while (temp != NULL)
	{
		std::cout << temp->data << "\t";
		temp = temp->next;
	}

	delete temp;
}

void List::InsertStart(int value)
{
	node *temp = new node;
	temp->data = value;
	temp->next = m_Head;
	m_Head = temp;
}

void List::InsertPosition(int pos, int value)
{
	node *pre = new node;
	node *cur = new node;
	node *temp = new node;
	cur = m_Head;

	for (int i = 1; i < pos; i++)
	{
		pre = cur;
		cur = cur->next;
	}

	temp->data = value;
	pre->next = temp;
	temp->next = cur;
}

void List::DeleteFirst()
{
	node *temp = new node;
	temp = m_Head;
	m_Head = m_Head->next;
	delete temp;
}

void List::DeleteLast()
{
	node *current = new node;
	node *previous = new node;
	current = m_Head;

	while (current->next != NULL)
	{
		previous = current;
		current = current->next;
	}

	m_Tail = previous;
	previous->next = NULL;
	delete current;
}

void List::DeletePosition(int pos)
{
	node *current = new node;
	node *previous = new node;

	current = m_Head;

	for (int i = 0; i < pos; i++)
	{
		previous = current;
		current = current->next;
	}
	previous->next = current->next;
}