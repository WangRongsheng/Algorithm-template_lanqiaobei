//双指针算法

//最核心性质：优化

//暴力写法：
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			
		}
	} 
	
//常见问题分类：
	//1.对于一个序列，用两个指针维护一段区间
	//2.对于两个序列，维护某种次序，比如归并排序中合并两个有序序列的操作
	
for (int i = 0; i < n; i++){
	while(j < i && check(i, j)) j++; //判j < i 且满足某种条件
	//具体问题的逻辑 
} 
