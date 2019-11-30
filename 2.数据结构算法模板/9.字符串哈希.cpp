//字符串哈希

//将字符串映射到相应的p进制上

//核心思想：将字符串看成p进制数，p的经验值是131，或者13331， 取这两个值的冲突概率低

//小技巧：取模的数用2^64, 这样直接用unsigned long long 储存， 溢出的结果就是取模的结果 

typedef unsign long long ULL;

ULL h[N], p[N]; //h[k]储存字符串前k个字母的哈希值, p[k]储存p^k % mod
//初始化
p[0] = 1;
for (int i = 1; i <= n; i++){
	h[i] = h[i - 1] * p + str[i];
	p[i] = p[i - 1] * p;
} 

//计算子串str[l - r]的哈希值
UII get(int l, int r){
	return h[r] - h[l - 1] * p[r - l + 1]; //固定公式 
} 
