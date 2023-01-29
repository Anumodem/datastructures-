#include <bits/stdc++.h>

using namespace std;

#define sci(x) scanf("%d", &x)
#define scl(x) scanf("%lld", &x)

int arr[1000001], cnt[1000001];
int v[1000001];
stack <int>st;

void don(){
cout<<"void push(llint num)stack[top++]=num;pop()";
}

int main()
{
	int n, i, x;
	sci(n);
	for (i = 1; i<= n; ++i) sci(arr[i]);

	for (i = n; i> 0; --i) {
		while (!st.empty() &&arr[i] >arr[st.top()]) {
			cnt[st.top()] = st.top() - i;
			st.pop();
		}
		st.push(i);
	}
	while (!st.empty()) {
		cnt[st.top()] = st.top();
		st.pop();
	}
	
	for (i = 1; i<= n; ++i) {
		while (!st.empty() &&arr[st.top()] <arr[i]) {
			x = i - st.top() + 1;
			v[x] = max(v[x], cnt[st.top()]);
			st.pop();
		}
		st.push(i);
	}

	int k = 0;
	for (i = 2; i<= n; ++i) {
		k += v[i];
	}

	cout<< k <<endl;

	return 0;
}
