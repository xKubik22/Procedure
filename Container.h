#pragma once
#include <iostream>
#include <fstream>

struct transport;
struct list;
struct container
{
	list* head; // ������ ������
	int count; // ���������� ���������
};
struct list
{
	transport* data = NULL; // ������
	list* next = NULL; // ��������� �� ����.�������
};
