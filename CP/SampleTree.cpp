/*
CODECHEF QUESTION (https://www.codechef.com/problems/KALKI)
SOLUTION (https://www.codechef.com/viewsolution/5601803)
*/

#include <signal.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
#include <ctype.h>
#include <string.h>
#include <stdarg.h>

#include <limits>
#include <ostream>
#include <istream>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <list>
#include <queue>
#include <algorithm>
#include <functional>
#include <sstream>
#include <utility>
#include <numeric> 
#include <memory> 

struct Point
{
	int x;
	int y;
	Point() {}
	Point(int xx, int yy) : x(xx), y(yy) {}
};

struct Arc
{
	size_t P1;
	size_t P2;
	unsigned int Len2;
	bool operator<(const Arc& o) const
	{
		return Len2 < o.Len2;
	}
};

std::ostream& operator<<(std::ostream& os, const Arc& a)
{
	os << a.P1 << " " << a.P2 << " " << a.Len2;
	return os;
}


class TestCase
{
	const std::vector<Point> Points;
	std::vector<std::vector<bool> > Connected;
public:
	TestCase(const std::vector<Point>& p) : Points(p)
	{

	}
	bool Conn(size_t a, size_t b) const
	{
		return Connected[a][b];
	}
	void Solve()
	{
		std::vector<Arc> Arcs;
		size_t n = Points.size();
		Arcs.reserve(n * n);
		for (size_t i = 0; i <  n; i++)
		{
			for (size_t j = i+1; j < n; j++)
			{
				Arc a;
				a.P1 = i;
				a.P2 = j;
				const Point& x = Points[i];
				const Point& y = Points[j];
				int d1 = x.x - y.x;
				int d2 = x.y - y.y;
				a.Len2 = (unsigned int) d1*d1 + d2*d2;
				Arcs.push_back(a);
			}
		}
		std::sort(Arcs.begin(), Arcs.end());
//		for (size_t i = 0; i < Arcs.size(); i++)
//			std::cout << Arcs[i] << std::endl;
	
		std::vector<Arc> Out;
		Out.reserve(n-1);

		Connected.resize(n);
		for (size_t i = 0; i < n; i++)
		{
			Connected[i].resize(n);
			for (size_t j = 0; j < n; j++)
				Connected[i][j] = i == j;
		}
		for (size_t i = 0; i < Arcs.size(); i++)
		{
			const Arc& a = Arcs[i];
			if (Conn(a.P1, a.P2))
			{
				continue;
			}
			Out.push_back(a);
			std::cout << a.P1+1 << " " << a.P2+1 << std::endl;
			std::cerr << a.P1+1 << " " << a.P2+1 << " " << a.Len2 << std::endl;
			if (Out.size() == n - 1)
			{
				break;
			}
			std::vector<bool> tmp;
			tmp.resize(n);
			for (int w = 0; w < n; w++)
			{
				tmp[w] = Connected[a.P1][w] | Connected[a.P2][w];
			}
			for (size_t j = 0; j < n; j++)
			{
				if (Connected[a.P1][j]) Connected[j] = tmp;
				if (Connected[a.P2][j]) Connected[j] = tmp;
			}
		}
	}
};

void solvetc(FILE* fin)
{
	int N;
	fscanf(fin, "%d", &N);
	std::vector<Point> Points;
	Points.reserve((size_t) N);
	for (int i = 0; i < N; i++)
	{
		Point p;
		fscanf(fin, "%d", &p.x);
		fscanf(fin, "%d", &p.y);
		Points.push_back(p);
	}
	TestCase t(Points);
	t.Solve();
}

void solve(FILE* fin)
{
	int tc;
	fscanf(fin, "%d", &tc);
	for (int i = 0; i < tc; i++)
	{
		solvetc(fin);
	}
}

int main(int argc, char** argv)
{
	FILE* fin = argc == 1 ? stdin : fopen(argv[1], "rt");
	solve(fin);
	return 0;
}