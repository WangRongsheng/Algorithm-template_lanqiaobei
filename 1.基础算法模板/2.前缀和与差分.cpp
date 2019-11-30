//前缀和和差分模板

//前缀和和差分更像是一个技巧，用一个数组把前缀和保存下来，可以减少时间复杂度

//一.前缀和：
	//1.一维前缀和：
		// S[i] = a[1] + a[2] + a[3] + ... + a[i]
		// a[l] + ... + a[r] = S[r] - S[l - 1]
	//2.二维前缀和：
		//S[i, j] 表示第i行j列格子左上部分所有元素的和
		//以(x1, y1)为左上角， (x2, y2)为右下角的子矩阵的和为：
		// S[x2, y2] - S[x2, y1 - 1] - S[x1 - 1, y2] + S[x1 - 1, y1 - 1]
	
	//构建前缀和：
	//注意在构建的时候，一般数组元素都是从1算起
	//for example:
		for (int i = 1; i <= n; i++){
			s[i] = s[i - 1] + a[i];
		} 

//二.差分：
//所谓差分就是构建一个数组是另一个数组的等差和，比如b[i]是a[i]的差分，而a[i]是b[i]的前缀和
// 通过对b[i]的单个操作，从而完成对a[i]一段上的操作 

//操作：给区间[l, r]中的每个数加上c:B[l] += C, B[r + 1] -= C, 原理就是要想等式成立，就要在每个a[i] += C,即可以通过B[i]实现对a[i]的操作
 
	//1.一维差分：
		B[i] = a[i] - a[i - 1];
		B[i + 1] = a[i + 1] - a[i];
	//2.二维差分：
		//给以(x1, y1)为左上角，(x2, y2)为右下角的子矩阵中的所有元素加上C
		//S[x1, y1] += C, S[x2 + 1, y1] -= C, S[x1, y2 + 1] -= C, S[x2 + 1, y2 + 1] += C
	 
