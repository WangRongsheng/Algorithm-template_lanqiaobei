//��С�������㷨֮prim�㷨
int n; //��ʾ����
int g[N][N]; //�ڽӾ��󣬴������еı�
int dist[N]; //���������㵽��ǰ��С�������ľ���
bool st[N]; //����ÿ�����Ƿ��Ѿ�����������

//���������ͨ�ڣ��򷵻�INF(ֵ��0x3f3f3f3f), ���򷵻���С�����������ı�Ȩ֮��
int prim(){
	memset(dist, 0x3f, sizeof(dist)); //����ͼ����Ŀ��ʱ��Ҫע����Щ����ĳ�ʼ�� 
	int res = 0;
	for (int i = 0; i < n; i++){
		int t = -1;
		for (int j = 1; j <= n; j++){
			if (!st[j] && (t == -1 || dist[t] > dist[j])){
				t = j;
			}
		} //����Ĳ��������ڵϽ�˹�����㷨 
		if (i && dist[t] == INF) return INF;
		if (i) res += dist[t];
		st[t] = true;
		for (int j = 1; j <= n; j++) dist[j] = min(dist[j], g[t][j]);
		//���´�t��������С�ı� 
	}
	return res; //���ص�����С��������Ȩֵ-
} 

