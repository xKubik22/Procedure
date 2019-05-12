#pragma once
#include <iostream>
#include <fstream>

struct transport;
struct list;
struct container
{
	list* head; // начало списка
	int count; // количество элементов
};
struct list
{
	transport* data = NULL; // данные
	list* next = NULL; // указатель на след.элемент
};
