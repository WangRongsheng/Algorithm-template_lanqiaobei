// 利用spfa判断图中是否存在负环

int n; //总点数

int h[N], w[N], e[N], ne[N], idx; //邻接表的所有的边, w[i]表示边权值 

int dist[N], cnt[N]; //dist[x]储存1号点到x的最短距离,cnt[x]储存1到x的最短路中经过的点数

//如果存在负环，则返回true, 否则返回flase

//因为这里不是求最短路，所以不需要初始化dist数组

//原理:如果某条最短路径上有n个点(除了自己),那么加上自己之后一共有n+1个点，由抽屉原理一定有两个点相同，所以存在环

bool spfa(){
	queue<int> q;
	for (int i = 1; i <= n; i++){ //负环不一定从原点开始，所以这里要把每个点都入队一下 
		q.push(i);
		st[i] = true;
	}
	while(q.size()){
		auto t = q.front();
		q.pop();
		st[t] = false;
		for (int i = h[t]; i != -1; i = ne[i]){
			int j = e[i];
			if (dist[j] > dist[t] + w[i]){ //如果发现最短路了，则更新 
				dist[j] = dist[t] + w[i];
				cnt[j] = cnt[t] + 1; //注意这里是和前面spfa算法不同的地方 
				if (cnt[j] >= n) return true;
				if (!st[j]){
					q.push(j);
					st[j] = true;
				}
			} 
			 
		}
	}
	return false;
} 
