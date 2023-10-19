#include "Matran.h"

Matran::Matran()
{
	x = 0;
	y = 0;
}

Matran::Matran(int x, int y)
{
	this->x = x;
	this->y = y;
}

std::vector<std::vector<int>> Matran::taobienngaunhien()
{
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<int> dist(0, 1);
	

	int m, n;
	std::cout << "Nhap so hang cua ma tran: ";
	std::cin >> m;
	std::cout << "Nhap so cot cua ma tran: ";
	std::cin >> n;
	std::vector<std::vector<int>> matrix(m, std::vector<int>(n));
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			matrix[i][j]=dist(gen);
		}
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			std::cout << matrix[i][j] << " ";
		}
		std::cout << std::endl;
	}
	return matrix;
}

bool Matran::kiemtra()
{
	std::vector<std::vector<int>> matrix = taobienngaunhien();
	Matran d1, d2;
	int x, y;
	std::cout << "Nhap toa do d1: ";
	std::cin >> x;
	std::cin >> y;
	d1 = Matran(x, y);
	std::cout << "Nhap toa do d2: ";
	std::cin >> x;
	std::cin >> y;
	d2 = Matran(x, y);
	int m = matrix.size();
	int n = matrix[0].size();
	std::vector<std::vector<bool>> visited(m, std::vector<bool>(n, false));
	std::queue<Matran> q;
	q.push(d1);
	visited[d1.getX()][d1.getY()] = true;

	int dx[] = { -1, 1, 0, 0 };
	int dy[] = { 0, 0, -1, 1 };

	while (!q.empty()) {
		Matran curr = q.front();
		q.pop();

		if (curr.getX() == d2.getX()&& curr.getY() == d2.getY()) {
			return true; // Tìm thấy đường đi đến (x2, y2)
		}

		for (int i = 0; i < 4; i++) {
			int newX = curr.x + dx[i];
			int newY = curr.y + dy[i];

			if (newX >= 0 && newX < m && newY >= 0 && newY < n && matrix[newX][newY] == 1 && !visited[newX][newY]) {
				q.push(Matran(newX, newY));
				visited[newX][newY] = true;
			}
		}
	}

	return false; // Không tìm thấy đường đi
}

int Matran::getX()
{
	return x;
}



int Matran::getY()
{
	return y;
}


	