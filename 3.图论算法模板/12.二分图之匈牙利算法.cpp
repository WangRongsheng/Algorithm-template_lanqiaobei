//匈牙利算法
int n; //n表示
int h[N], e[M], ne[M], idx; //邻接表存所有边
int match[N]; //储存每个点当前匹配的点
bool st[N]; //表示每个点是否被遍历过

bool find(int x){
	for (int i = h[x]; i != -1; i = ne[i]){
		int j = e[i];
		if (!st[j]){
			st[j] = true;
			if (match[j] == 0 || find(match[j])){//没有匹配到或者找到下家
				match[j] = x;
				return true; 
			}
		}
	}
	return false;
} 

//求最大匹配数
int res = 0;
for (int i = 1; i <= n; i++){
	memset(st, false, sizeof(st));
	if (find(i)) res++;
} 
