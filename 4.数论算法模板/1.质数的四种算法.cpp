//����/���� �����ֳ����㷨

//�㷨1(����������������Ķ��壬���Ӧ�ö���)��
//�Գ����ж�����
bool is_prime(int x){
	if (x < 2) return false;
	for (int i = 2; i <= x / i; i++){
		if (x % i == 0) return false;
	}
	return true;
} 

//�㷨2��
//�Գ����ֽ�������
void divide(int x){
	for (int i = 2; i <= x / i; i++){
		if (x % i == 0){
			int s = 0;
			while(x % i == 0) x /= i, s++; //��������Լ�����Ͱ����������ٽ����ң�s������������������ 
			cout << i << '' << s << endl;
		}
	}
	if (x > 1) cout << x << ' ' << 1 << endl;
} 

//����ɸ��������(��ʽɸ��)
int primes[N], cnt; //primes[]�������е����� 
bool st[N]; //st[N]����x�Ƿ�ɸ�� 

void get_prim(int n){
	for (int i = 2; i <= n; i++){
		if (st[i]) continue; //���i��ɸ���˾͹�
		primes[cnt++] = i;
		for (int j = i; j <= n; j += i){ //ɸѡi�ı�����i�ı����϶��������� 
			st[j] = true;
		} 
	}
}

//����ɸ��������
int primes[N], cnt; //primes[]�������е�����
bool st[N]; //st[x]����x�Ƿ�ɸ��
void get_primes(int n){
	for (int i = 2; i <= n; i++){
		if (!st[i]) primes[cnt++] = i;
		for (int j = 0; primes[j] <= n / i; j++){
			st[primes[j] * i] = true;
			if (i % primes[j] == 0) break; //ȷ����pj��i����С��������ôҲ����ȷ������pj*i����С������ 
		}
	}
} 
