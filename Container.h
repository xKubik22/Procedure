#pragma once
#include <iostream>
#include <fstream>

struct Transport;
struct List;
struct Container
{
	List* head; // ������ ������
	int count; // ���������� ���������
};
struct List
{
	Transport* data = NULL; // ������
	List* next = NULL; // ��������� �� ����.�������
};
