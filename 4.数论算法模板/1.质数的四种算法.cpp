//质数/素数 的四种常见算法

//算法1(这个就是利用素数的定义，大家应该都会)：
//试除法判断质数
bool is_prime(int x){
	if (x < 2) return false;
	for (int i = 2; i <= x / i; i++){
		if (x % i == 0) return false;
	}
	return true;
} 

//算法2：
//试除法分解质因数
void divide(int x){
	for (int i = 2; i <= x / i; i++){
		if (x % i == 0){
			int s = 0;
			while(x % i == 0) x /= i, s++; //如果有这个约数，就把他除掉，再接着找，s在这里是用来计数的 
			cout << i << '' << s << endl;
		}
	}
	if (x > 1) cout << x << ' ' << 1 << endl;
} 

//朴素筛法求素数(埃式筛法)
int primes[N], cnt; //primes[]储存所有的素数 
bool st[N]; //st[N]储存x是否被筛掉 

void get_prim(int n){
	for (int i = 2; i <= n; i++){
		if (st[i]) continue; //如果i被筛过了就过
		primes[cnt++] = i;
		for (int j = i; j <= n; j += i){ //筛选i的倍数，i的倍数肯定不是素数 
			st[j] = true;
		} 
	}
}

//线性筛法求素数
int primes[N], cnt; //primes[]储存所有的素数
bool st[N]; //st[x]储存x是否被筛掉
void get_primes(int n){
	for (int i = 2; i <= n; i++){
		if (!st[i]) primes[cnt++] = i;
		for (int j = 0; primes[j] <= n / i; j++){
			st[primes[j] * i] = true;
			if (i % primes[j] == 0) break; //确定了pj是i的最小质因子那么也就是确定了是pj*i的最小质因子 
		}
	}
} 
