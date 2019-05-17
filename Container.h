#pragma once
#include <iostream>
#include <fstream>

struct Transport;
struct List;
struct Container
{
	List* head; // начало списка
	int count; // количество элементов
};
struct List
{
	Transport* data = NULL; // данные
	List* next = NULL; // указатель на след.элемент
};
