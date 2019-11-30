//染色法判断二分图

int n; //n表示点数
int h[N], e[N], ne[M], idx; //邻接表储存图
int color[N]; //表示每个点的颜色

bool dfs(int u, int c){
	color[u] = c;
	for (int i = h[u]; i != -1; i = ne[i]){
		int j = e[i];
		if (!color[j]){
			if (!dfs(j, 3 - c)) return false;
		} else if (color[j] == c) return false;
	}
	return true;
} 
