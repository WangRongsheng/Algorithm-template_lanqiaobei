// ����spfa�ж�ͼ���Ƿ���ڸ���

int n; //�ܵ���

int h[N], w[N], e[N], ne[N], idx; //�ڽӱ�����еı�, w[i]��ʾ��Ȩֵ 

int dist[N], cnt[N]; //dist[x]����1�ŵ㵽x����̾���,cnt[x]����1��x�����·�о����ĵ���

//������ڸ������򷵻�true, ���򷵻�flase

//��Ϊ���ﲻ�������·�����Բ���Ҫ��ʼ��dist����

//ԭ��:���ĳ�����·������n����(�����Լ�),��ô�����Լ�֮��һ����n+1���㣬�ɳ���ԭ��һ������������ͬ�����Դ��ڻ�

bool spfa(){
	queue<int> q;
	for (int i = 1; i <= n; i++){ //������һ����ԭ�㿪ʼ����������Ҫ��ÿ���㶼���һ�� 
		q.push(i);
		st[i] = true;
	}
	while(q.size()){
		auto t = q.front();
		q.pop();
		st[t] = false;
		for (int i = h[t]; i != -1; i = ne[i]){
			int j = e[i];
			if (dist[j] > dist[t] + w[i]){ //����������·�ˣ������ 
				dist[j] = dist[t] + w[i];
				cnt[j] = cnt[t] + 1; //ע�������Ǻ�ǰ��spfa�㷨��ͬ�ĵط� 
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
