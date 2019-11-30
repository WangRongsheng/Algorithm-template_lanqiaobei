//单链表

//竞赛中一般不采用由指针和结构体组成的链式链表，这里链表的实现采用的是数组的方式 

//head储存链表头， e[]储存节点的值， ne[]储存节点的neext指针， idx表示当前用到了哪个节点

int head, idx, e[], ne[];
//初始化
void init(){
	head = -1; //初始化头结点为-1 
	idx = 0;
} 

//在链表头插入一个数a
void insert_h(int a){
	e[idx] = a; //把当前的数赋值给当前结点
	ne[idx] = head; //让当前的结点的下一个值指向头结点的下一个值
	head = idx ++ ; //让头结点指向当前值，并且对当前结点++ 
} 

//将x插到下标是k的点的后面, 此操作与插到头结点后面的操作相同，只不过把头结点换成了k这个结点 
void insert(int k, int x){
	e[idx] = a;
	ne[idx] = ne[k];
	ne[k] = idx ++;
} 

//将头结点删除需要保证头结点存在
void remove(){
	head = ne[head];
} 

//将下标是k的点后面的点删掉
void remove(int k){
	ne[k] = ne[ne[k]];
} 

//单链表遍历输出
 for (int i = head; i != -1; i = ne[i]){
 	cout << e[i] << endl;
 }
