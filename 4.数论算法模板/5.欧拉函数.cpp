//欧拉函数 
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

//欧拉函数定义:
// N = p1^a1 * p2^a2 * p3^a3 ... pm^am, 则
//则N的欧拉函数 = N * (p1 - 1) / p1 * (p2 - 1) / p2 * ... * (pm - 1) / pm
              //= N (1 - 1 / p1)(1 - 1 / p2)...(1 - 1 / pk)
              

