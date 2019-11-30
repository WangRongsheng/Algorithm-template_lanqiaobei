//spfa算法（队列优化的Bellman - Ford)算法

//在这里就不给大家写Bellman - Ford 算法了， 这个的应用不是太广，想要了解的百度一下就好

int n; //总点数
int h[N], w[N], e[N], ne[N], idx; //在这里定义邻接表储存所有边，w[i]表示边权值 
int dist[N]; //储存每个点到一号点的最短距离
bool st[N]; //储存每个点是否在队列中

//求1号点到n号点的最短距离，如果无法从1号点到n号点，则返回-1

//spfa可以用来判断负环和运算带负权回路的最短路， 

//spfa算法思想就是就是找到和他相连的点，如果离她最近就把它加入到队列，注意队列中 

//注意一般能用迪杰斯特拉算法就能用spfa，但是能用spfa不一定能用迪杰斯特拉算法


//此处算法演示从第一个点出发 ，求1号点到n号点的最短距离，如果从1号点无法走到n号点则返回-1 
int spfa(){
	memset(dist, 0x3f, sizeof(dist)); //把距离初始化为无穷 
	queue<int> q; //spfa这里利用的是队列 
	q.push(1); //因为是从第一个点出发所以让第一个入队 
	st[1] = true;
	while(q.size()){
		auto t = q.front();
		q.pop();
		st[t] = false;
		for (int i = h[t], i = -1; i = ne[i]){ //队列加入的是那些和该点相连接的点，这里用的是邻接表，这里有不明白的找我答疑， 
			int j = e[j];
			if (dist[j] > dist[t] + w[i]){
				dist[j] = dist[t] + w[i];
				if (!st[j]){ //如果队列中已经存在j，则不需要将j重复插入 
					q.push(j);
					st[j] = true;  
				}
			}
		}
	}
	if (dist[n] == 0x3f3f3f3f){ //如果最后一个点没有被更新成常数的话则说明没有最短路 
		return -1;
	}
	return dist[n]; //dist[n]存的就是n号点到1号点的最短距离 
} 
