//�������㷨
int n; //n��ʾ
int h[N], e[M], ne[M], idx; //�ڽӱ�����б�
int match[N]; //����ÿ���㵱ǰƥ��ĵ�
bool st[N]; //��ʾÿ�����Ƿ񱻱�����

bool find(int x){
	for (int i = h[x]; i != -1; i = ne[i]){
		int j = e[i];
		if (!st[j]){
			st[j] = true;
			if (match[j] == 0 || find(match[j])){//û��ƥ�䵽�����ҵ��¼�
				match[j] = x;
				return true; 
			}
		}
	}
	return false;
} 

//�����ƥ����
int res = 0;
for (int i = 1; i <= n; i++){
	memset(st, false, sizeof(st));
	if (find(i)) res++;
} 
