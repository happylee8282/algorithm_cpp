
#include <iostream>
#define MAX 9

using namespace std; //std를 사용하기 위해 포함하는 선언입니다.

int n, m;

int arr[MAX] = {0,};

bool arr_visit[MAX] = {0, };


void dfs(int dep,int get) {
	if (dep == m) {
		for (int i = 0; i < m; i++) {
			cout << arr[i] << " ";
		}
		cout << "\n";
	}

	for (int i = get; i <= n; i++) {
		if (!arr_visit[i]) { //사용된 여부를 말함 그래서 하단에 true가 있으면 무시
			arr_visit[i] = true;
			arr[dep] = i;
			dfs(dep + 1, i+1);
			arr_visit[i] = false;
		}
	}
}

int main() {
	cin >> n >> m;
	dfs(0,1);
}
