//���x, yʹ�� ax + by = gcd(a, b)
int exgcd(int a, int b, int &x, int &y){
	if (!b){
		x = 1;
		y = 0;
		return a;
	}
	int d = exgcd(b, a % b, y, x);
	y -= (a / b) * x;
	return d;
}

// a % b = a - (a / b) * b;
// by + (a - (a / b) * b ) * x = d 

// ax  b(mod m)
 ax = my + b
 
//�㷨Ӧ��
// ����Ӧ�ñ����ϡ� 
