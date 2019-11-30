//Ⱦɫ���ж϶���ͼ

int n; //n��ʾ����
int h[N], e[N], ne[M], idx; //�ڽӱ���ͼ
int color[N]; //��ʾÿ�������ɫ

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
