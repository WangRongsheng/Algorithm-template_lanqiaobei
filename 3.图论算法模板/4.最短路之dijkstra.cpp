//dijkstra算法 
//1）用来解决不带负权回路的dijkstra

int g[N][N]; //储存每条边
int dist[N]; //储存1号点到每个点的最短距离
bool st[N]; //储存每个点的最短路是否已经确定

//求1号点到n号点的最短距离，如果不存在则返回-1；

int dirkstra(){
	memset(dist, 0x3f, sizeof(dist)); //初始化距离为无穷
	dist[1] = 0; //从哪个点开始，哪个点就初始化为 0
	
	//接下来的操作就是寻找离她最近的点
	for (int i = 0; i < n; i++){
		int t = -1; //用t来记录最近的点
		for (iint j = 1; j <= n; j++){
			if (!st[j] && (t == -1 || dist[t] > dist[j])){
				t = j;
			//这里if的意思是如果这个点没有被访问过而且到该点的距离最短，那么就更新了这点 
			}
		}
		//用t更新其他点的距离
		for (int j = 1; j <= n; j++){
			dist[j] = min(dist[j], dist[t] + g[t][j]);
		} 
	
		st[t] = true; 
	}
	if (dist[n] == 0x3f3f3f3f) return -1; //如果最后那个点没有被更新，那么就没有找到最短路，返回-1就OK 
	return dist[n];
} 
