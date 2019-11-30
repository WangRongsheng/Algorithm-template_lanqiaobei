//floyd 算法用来解决多源最短路问题，顾名思义就是多个原点

//由于这个算法很简单，是所有的最短路问题里代码最短的，所以也就没啥原理可讲，直接贴代码了

//初始化：
for (int i = 1; i <= n; i++){
	for (int j = 1; j <= n; j++){
		if (i == j) d[i][j] = 0; //也就是自己到自己的距离肯定是0 
		else d[i][j] = INF;
	}
} 

void floyd(){
	for (int k = 1; k <= n; k++){
		for (int i = 1; i <= n; i++){
			for (int j = 1; j <= n; j++){
				d[i][j] = min(d[i][j], d[i][k] + d[k][j]) //状态转移方程式，决定是否经过k这个点 
			}
		}
	}
}
