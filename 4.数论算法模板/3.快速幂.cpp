//������
//��m^k mod p , ʱ�临�Ӷ�O(log k)
int qmi(int m, int k, int p){
	int res = 1, t = m;
	while(k){
		if (k & 1) res = res * t % p; // ��һ�ε���Ϊt^2^0, ������� ��������Ҫƽ�� 
		t = t * t % p;
		k >>= 1;
	}
}
 
 
//������ԭ��
//Ԥ�������
//a ^ 2 ^ 0 mod p
//a ^ 2 ^ 1 mod p
//a ^ 2 ^ 2 mod p

// a ^ 2 ^ x1 *  a ^ 2 ^ x2 * a ^ 2 ^ x3 
// = a ^ (2 ^ x1 + 2 ^ x2 + .. + )


