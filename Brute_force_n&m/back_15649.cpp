/*
* 문제
자연수 N과 M이 주어졌을 때, 아래 조건을 만족하는 길이가 M인 수열을 모두 구하는 프로그램을 작성하시오.

1부터 N까지 자연수 중에서 중복 없이 M개를 고른 수열
입력
첫째 줄에 자연수 N과 M이 주어진다. (1 ≤ M ≤ N ≤ 8)

출력
한 줄에 하나씩 문제의 조건을 만족하는 수열을 출력한다. 중복되는 수열을 여러 번 출력하면 안되며, 각 수열은 공백으로 구분해서 출력해야 한다.

수열은 사전 순으로 증가하는 순서로 출력해야 한다.
-----------------------------------------------------------------------------------------
깊이 우선 탐색DFS
- 자기 자신을 호출하는 순환 알고리즘의 형태 를 가지고 있다.
- 전위 순회(Pre-Order Traversals)를 포함한 다른 형태의 트리 순회는 모두 DFS의 한 종류이다.
- 이 알고리즘을 구현할 때 가장 큰 차이점은, 그래프 탐색의 경우 어떤 노드를 방문했었는지 여부를 반드시 검사 해야 한다는 것이다.
- 이를 검사하지 않을 경우 무한루프에 빠질 위험이 있다.
*/

#include <iostream>
#define MAX 9

using namespace std; //std를 사용하기 위해 포함하는 선언입니다.

int n, m;

int arr[MAX] = {0,};

bool arr_visit[MAX] = {0, };


void dfs(int dep) {
	if (dep == m) {
		for (int i = 0; i < m; i++) {
			cout << arr[i] << " ";
		}
		cout << "\n";
	}

	for (int i = 1; i <= n; i++) {
		if (!arr_visit[i]) { //사용된 여부를 말함 그래서 하단에 true가 있으면 무시
			arr_visit[i] = true;
			arr[dep] = i;
			dfs(dep + 1);
			arr_visit[i] = false;
		}
	}
}

int main() {
	cin >> n >> m;
	dfs(0);
}
