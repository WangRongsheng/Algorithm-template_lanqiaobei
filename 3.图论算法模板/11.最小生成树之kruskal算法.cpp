//kruskal�㷨

//����õ���c++��֪ʶ�㣬������������������������
 
int n, m; //n�ǵ����� m�Ǳ���
int P[N]; //���鼯�ĸ��ڵ�����

struct Edge{
	int a, b, w;
	bool operator < (const Edge &W) const{
		return w < W.w;
	}
} edges[M]; 

int find(int x){ //���鼯���Ĳ���
	if (p[x] != x)  p[x] = find(p[x]);
	return p[x];
}

//�����õ��˲��鼯�Ĳ�������Ҳ����Ļ������Կ���ǰ��Ĳ��鼯�Ĳ���

//���������ķ�㷨��һ���ĵط���������ط������ñ����ж��Ƿ�����С������ 
//ע�⿴�ҵĴ��� 
int kruskal(){
	sort(edges, edges + m);
	for (int i = 1; i <= n; i++){
		p[i] = i; //��ʼ�����鼯 
	}
	int res = 0, cnt = 0;
	for (int i = 0; i < m; i++){
		int a = edges[i].a, b = edges[i].b, w = edges[i].w;
		a = find(a), b = find(b) ; //���鼯Ѱ�Ҹ��ڵ����
		if (a != b){ //�����������ͨ�鲻��ͨ������������ͨ����ͨ,��ͨ���鼯�Ĳ�����ǰ��Ĳ��鼯����
			p[a] = b;
			res += w;
			cnt ++; //������˶������� 
		} 
	}
	if (cnt < n - 1) return INF; //INF���������
	return res; 
	
} 
