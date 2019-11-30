//约数
vector<int> get_divisors(int x){
	vector<int> res;
	for (int i = 1; i <= x / i; i++){
		if (x % i == 0){
			res.push_back(i);
			if (i != x / i) res.push_back(x / i); //防止两个约数相同 
		}
	}
	sort(res.begin(), res.end());
	return res;
} 

//试除法求所有约数
//如果 N = p1^c1 * p2^c2 * p3^c3 ... * pk^ck
//则约数个数为: (c1 + 1) * (c2 + 1) * ... * (ck + 1)

//在这里就不写证明了哈

//欧几里得算法
int gcd(int a, int b){
	return b?gcd(b, a % b): a;
} 
//算法是用来求最大公约数的
//利用递归，当b为0时，就可以求得当前的最大公约数a 


 
