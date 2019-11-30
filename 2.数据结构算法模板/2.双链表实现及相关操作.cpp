//双链表

//e[] 表示结点的值，l[]表示结点的左指针，r[]表示结点的右指针，idx表示当前用到了哪个结点
int e[N], l[N], r[N], idx;

//初始化
void init(){
	//0是左端点，1是右端点
	r[0] = 1, l[1] = 0;
	idx = 2; //这里idx初始化为2, 是因为 0 和 1 都已经用过了 
} 

//在结点a的右边插入一个数x
void insert(int a, int x){
	e[idx] = x;
	r[idx] = r[a]; //把当前结点的右结点更新成a的右结点 
	l[idx] = a; // 把当前结点的左结点更新成a
	l[r[a]] = idx; //把a的右结点的左节点更新成idx 
	r[a] = idx ++; //把a的右节点更新成idx 
} 

//删除结点a
void remove(int a){
	l[r[a]] = l[a]; //把a的右结点的左结点更新成a的左结点
	r[l[a]] = r[a]; //把a的左结点的右结点更新成a的右结点 
} 

//遍历输出双链表
for (int i = r[0]; i != -1; i = r[i]){
	cout << e[i] << endl;
} 
