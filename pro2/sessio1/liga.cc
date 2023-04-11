#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <cmath>

using namespace std;


typedef vector<vector <int> > Matriz;

struct TeamInf {
	int ID = 0, point = 0, Goals = 0, EGoals = 0;
};



bool Condition(TeamInf A, TeamInf B) {
	if (A.point == B.point and A.Goals - A.EGoals == B.Goals - B.EGoals) {
		return A.ID < B.ID;
	}
	else if (A.point == B.point) {
		return A.Goals - A.EGoals > B.Goals - B.EGoals;
	}
	else return A.point > B.point;
}

int main() {
	int size = 0;
	cin >> size;
	int first, second;
	vector <TeamInf> Ball(size);
	for (int i = 0; i < size; i++) {
		Ball[i].ID = i + 1;
	}
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			cin >> first >> second;
			if (i != j and first != -1) {
				Ball[i].Goals += first;
				Ball[i].EGoals += second;
				Ball[j].EGoals += first;
				Ball[j].Goals += second;
				if (first > second) {
					Ball[i].point += 3;
				}
				else if (second > first) {
					Ball[j].point += 3;
				}
				else {
					Ball[i].point += 1;
					Ball[j].point += 1;
				}
			}
		}
	}

	sort(Ball.begin(), Ball.end(), Condition);

	for (int i = 0; i < size; i++) {
		cout << Ball[i].ID << " " << Ball[i].point << " " << Ball[i].Goals << " " << Ball[i].EGoals << endl;
	}


}
