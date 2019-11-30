//树与图

//注：树是一种特殊的图，与图的储存方式相同，对于无向图中的边a, b, 储存两条边a -> b
// b -> a

//1)邻接矩阵:g[a][b] 储存 a -> b

//2)邻接表：
	// 对于每个点k，开一个单链表，存储k所有可以走到的点，h[k]储存这个单链表的头结点

int h[N], e[N], ne[N], idx;

//添加一条边a -> b
void add(int a, int b){
	e[idx] = b, ne[idx] = h[a], h[a] = idx++; //这里的操作就类似于 
} 

//树与图的遍历
	//1)深度优先遍历
		int dfs(int u){
			st[u] = true; //st[u]表示点u已经被遍历过
			for (int i = h[u]; i != -1; i = ne[i]){ //注意这里的遍历方式 
				int j = [i];
				int j = e[i];
				if (!st[j]) dfs(j); 
			} 
		}
	
	//2)宽度优先遍历
	//这里用st[]数组来标记 
		queue<int> q;
		st[1] = true; //表示1号点已经被遍历过
		q.push(1);
		while(q.size()){
			int t = q.front();
			q.pop();
			for (int i = h[t]; i != -1; i = ne[i]){
				int j = e[i];
				if (!st[j]){
					st[j] = true; //表示点j已经被遍历过
					q.push(j); //便利过的点就要入队 
				}
			}
		} 

		
		
		
		
		
		
		
