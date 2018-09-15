#include <iostream>
using namespace std;

int solve(int n, int a) {
	int answer = 0;

	for (int i=0; i < n; i++) {
		for (int j=0; j < n; j++) {
			for (int k=0; k < n; k++) {
				int len = a[i] + a[j] + a[k];
				int most = max(a[i], max(a[j], a[k]));

				int rest = len - most;

				if (rest > most) {
					answer = max(answer, len);
				}
			}
		}
	}
	return answer;
}

void output(answer) {
	std::cout << answer << std::endl;
}

int main(void) {
	int n = 5;
	int a[5] = {2, 3, 4, 5, 10};
	output(solve(n, a));
}
