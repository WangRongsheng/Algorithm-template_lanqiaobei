//Լ��
vector<int> get_divisors(int x){
	vector<int> res;
	for (int i = 1; i <= x / i; i++){
		if (x % i == 0){
			res.push_back(i);
			if (i != x / i) res.push_back(x / i); //��ֹ����Լ����ͬ 
		}
	}
	sort(res.begin(), res.end());
	return res;
} 

//�Գ���������Լ��
//��� N = p1^c1 * p2^c2 * p3^c3 ... * pk^ck
//��Լ������Ϊ: (c1 + 1) * (c2 + 1) * ... * (ck + 1)

//������Ͳ�д֤���˹�

//ŷ������㷨
int gcd(int a, int b){
	return b?gcd(b, a % b): a;
} 
//�㷨�����������Լ����
//���õݹ飬��bΪ0ʱ���Ϳ�����õ�ǰ�����Լ��a 


 
