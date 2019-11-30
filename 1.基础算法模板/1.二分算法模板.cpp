// 二分计算模板

//二分算法常见题型：最值问题，查找位置 

//1.整数二分计算模板

//我把二分区间[l, r]分成了两类，影响的是下面l与r的更新,使用下面哪种就按经验来了 
//一类是[l, mid]和(mid, r]

int bsearch_1(int s[], int l, int r){ //传入二分数组和左右端点 
	while(l < r){
		int mid = l + r >> 1; //整数可以用右移，而浮点数不可以
		//这里通过右移不断调增mid的位置 
		 
		if (check(mid)) r = mid; //这里check()函数是用来写题目逻辑 
		else l = mid + 1;
	}
	return l; //注意跳出循环时，l = mid 
} 

//二类是[l, mid)和[mid, r]
int bsearch_2(int s[], int l, int r){
	while(l < r){
		int mid = l + r >> 1;
		if (check(mid)) r = mid + 1;
		else l = mid;
	}
	return l;
}

//2.浮点数二分，浮点数二分就一个模板，比较简单
 double bsearch_3(double s[], double l, double r){
 	const double eps = 1e-6; //1e-6表示精度，具体看题目对精度的要求
 	//或者将循环处理大约100次就可以了，但是题目中不是很常用 
	while (r - l > eps){
		double mid = (l + r) / 2;
		if (check(mid)) r = mid; 
		else l = mid;
	}
	return l;
 }
