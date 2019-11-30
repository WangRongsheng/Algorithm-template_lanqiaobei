//快速幂
//求m^k mod p , 时间复杂度O(log k)
int qmi(int m, int k, int p){
	int res = 1, t = m;
	while(k){
		if (k & 1) res = res * t % p; // 第一次迭代为t^2^0, 在下面的 迭代中需要平方 
		t = t * t % p;
		k >>= 1;
	}
}
 
 
//快速幂原理
//预处理出来
//a ^ 2 ^ 0 mod p
//a ^ 2 ^ 1 mod p
//a ^ 2 ^ 2 mod p

// a ^ 2 ^ x1 *  a ^ 2 ^ x2 * a ^ 2 ^ x3 
// = a ^ (2 ^ x1 + 2 ^ x2 + .. + )


