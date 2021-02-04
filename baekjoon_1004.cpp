#include <iostream>
#include <string>



using namespace std;

class Dir {
public:
	int cx, cy, r;
};
int main()
{
	int T;
	int x1, y1, x2, y2;
	int n;
	cin >> T;

	for (int j = 0; j < T; j++)
	{
		int count = 0;
		cin >> x1 >> y1 >> x2 >> y2;
		cin >> n;

		Dir* dir = new Dir[n];

		
	

		for (int i = 0; i < n; i++)
		{
			cin >> dir[i].cx >> dir[i].cy >> dir[i].r;
			bool chk1, chk2;
			int d1, d2;
			//생각하지 못한 알고리즘
			// 시작점과 도착점의 경우의 수
			//1. 모두 원 안에 있을 때 증가x
			//2. 한개는 안에, 나머지 한개는 밖에 --> +1
			//3. 모두 밖에 있을 때 증가x
			d1 = (x1 - dir[i].cx) * (x1 - dir[i].cx) + (y1 - dir[i].cy) * (y1 - dir[i].cy);
			d2= (x2 - dir[i].cx) * (x2 - dir[i].cx) + (y2 - dir[i].cy) * (y2 - dir[i].cy);
			chk1 = d1 > dir[i].r * dir[i].r ? true : false;
			chk2=d2> dir[i].r * dir[i].r ? true : false;
			if (chk1 != chk2)
				count++;
		}






		delete[]dir;

		cout << count << endl;

	}







}