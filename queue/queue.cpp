#include<stdio.h>
#include<string.h>
#define LEN 100005
//代表任务的结构体
typedef struct pp {
	char name[100];
	int t;
}p;
p Q[LEN];
int head, tail, n;
void enqueue(p x) {
	Q[tail] = x;
	tail = (tail + 1) % LEN;
}
p dequeue() {
	p x = Q[head];
	head = (head + 1) % LEN;
	return x;
}
int min(int a, int b) {
	return a < b ? a : b;
}
int main() {
	int elaps = 0, c;
	int i, q;
	p u;
	scanf_s("%d %d", &n, &q);
	//按顺序将所有任务添加至队列
	for (i = 1; i <= n; i++) {
		scanf_s("%s", Q[i].name);
		scanf_s("%d", &Q[i].t);
	}
	head = 1;
	tail = n + 1;
	//模拟
	while (head != tail) {
		u = dequeue();
		c = min(q, u.t);//执行时间片q或所需时间u.t的处理
		u.t -= c;//计算剩余的所需时间
		elaps += c;//累计经过的时间
		if (u.t > 0)//如果处理尚未结束则重新添加至队列
			enqueue(u);
		else
			printf("%s %d\n", u.name, elaps);
	}
}