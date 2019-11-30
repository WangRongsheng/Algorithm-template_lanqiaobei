//最小生成树算法之prim算法
int n; //表示点数
int g[N][N]; //邻接矩阵，储存所有的边
int dist[N]; //储存其他点到当前最小生成树的距离
bool st[N]; //储存每个点是否已经在生成树中

//如果树不连通在，则返回INF(值是0x3f3f3f3f), 否则返回最小生成树的树的边权之和
int prim(){
	memset(dist, 0x3f, sizeof(dist)); //在做图论题目的时候要注意这些距离的初始化 
	int res = 0;
	for (int i = 0; i < n; i++){
		int t = -1;
		for (int j = 1; j <= n; j++){
			if (!st[j] && (t == -1 || dist[t] > dist[j])){
				t = j;
			}
		} //这里的操作类似于迪杰斯特拉算法 
		if (i && dist[t] == INF) return INF;
		if (i) res += dist[t];
		st[t] = true;
		for (int j = 1; j <= n; j++) dist[j] = min(dist[j], g[t][j]);
		//更新从t出发的最小的边 
	}
	return res; //返回的是最小生成树的权值-
} 

