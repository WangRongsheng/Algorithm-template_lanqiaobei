//kruskal算法

//这个用到了c++的知识点，大家如果不懂可以找我来答疑
 
int n, m; //n是点数， m是边数
int P[N]; //并查集的父节点数组

struct Edge{
	int a, b, w;
	bool operator < (const Edge &W) const{
		return w < W.w;
	}
} edges[M]; 

int find(int x){ //并查集核心操作
	if (p[x] != x)  p[x] = find(p[x]);
	return p[x];
}

//这里用到了并查集的操作，大家不懂的话，可以看我前面的并查集的操作

//下面和普里姆算法不一样的地方就是这个地方是利用边来判断是否有最小生成树 
//注意看我的代码 
int kruskal(){
	sort(edges, edges + m);
	for (int i = 1; i <= n; i++){
		p[i] = i; //初始化并查集 
	}
	int res = 0, cnt = 0;
	for (int i = 0; i < m; i++){
		int a = edges[i].a, b = edges[i].b, w = edges[i].w;
		a = find(a), b = find(b) ; //并查集寻找根节点操作
		if (a != b){ //如果这两个连通块不连通，则将这两个连通块连通,连通并查集的操作看前面的并查集操作
			p[a] = b;
			res += w;
			cnt ++; //计算加了多少条边 
		} 
	}
	if (cnt < n - 1) return INF; //INF代表无穷大
	return res; 
	
} 
