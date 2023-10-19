#pragma once
#include<random>
#include<queue>
#include"vector"
#include<iostream>
class Matran
{
private:
	int x;
	int y;
public:
	Matran();
	Matran(int, int);
	std::vector<std::vector<int>> taobienngaunhien();
	bool kiemtra();
	int getX();
	
	int getY();
	
};

