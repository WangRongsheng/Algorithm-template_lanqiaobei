1.//维护size的并查集

int p[N], size[N];
//p[N]储存每个点的祖宗结点，size[]只有祖宗结点有意义，表示祖宗结点所在集合中点的数量

//并查集用来维护额外信息
 
//返回x的祖宗结点
int find(int x){
	if (x != p[x]) p[x] = find(p[x]);
	return p[x];
}

//初始化，假定结点编号是1 - n
for (int i = 1; i <= n; i++){
	p[i] = i;
	size[i] = 1; //只表示根结点的size有意义, 刚开始每个集合里只有他本身，所以是1 
} 

//合并a 和 b所在的两个集合
p[find(a)] = find[b];
size[b] += size[a] //在这里注意在合并集合的同时要把集合的数目也加入



2.//维护到祖宗结点距离的并查集
int p[N], d[N];
//这里p[]储存的是每个点的祖宗结点，d[]储存的是x到p[x]的距离

//返回x的祖宗结点
int find(int x){
	if (p[x] != x){
		if(p[x] != x){
			int u = find(p[x]); //先暂时存下x的根结点 
			 d[x] += d[p[x]]; //这里包含两段路径，一段是x 到 px， 一段是p[x] 到 祖宗结点
			 //经过路径压缩后，所有的点已经指向了祖宗结点
			 p[x] = u; 
		}	
		return p[x];
	}
} 

//初始化，假定结点编号是1 - n
for (int i = 1; i <= n; i++){
	p[i] = i;
	d[i] = 0;
} 


