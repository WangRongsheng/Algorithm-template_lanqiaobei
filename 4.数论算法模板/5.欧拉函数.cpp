//ŷ������ 
int phi(int x){
	int res = x;
	for (int i = 2; i <= x / i; i++){
		if (x % i == 0){
			res = res / i * (i - 1);
			while(x % i == 0){
				x /= i;		
			}
		}
	}
	if (x > 1) res = res / x * (x - 1);
	return res;
}

//ŷ����������:
// N = p1^a1 * p2^a2 * p3^a3 ... pm^am, ��
//��N��ŷ������ = N * (p1 - 1) / p1 * (p2 - 1) / p2 * ... * (pm - 1) / pm
              //= N (1 - 1 / p1)(1 - 1 / p2)...(1 - 1 / pk)
              

