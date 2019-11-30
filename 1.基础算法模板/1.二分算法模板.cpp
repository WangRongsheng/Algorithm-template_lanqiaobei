// ���ּ���ģ��

//�����㷨�������ͣ���ֵ���⣬����λ�� 

//1.�������ּ���ģ��

//�ҰѶ�������[l, r]�ֳ������࣬Ӱ���������l��r�ĸ���,ʹ���������־Ͱ��������� 
//һ����[l, mid]��(mid, r]

int bsearch_1(int s[], int l, int r){ //���������������Ҷ˵� 
	while(l < r){
		int mid = l + r >> 1; //�������������ƣ���������������
		//����ͨ�����Ʋ��ϵ���mid��λ�� 
		 
		if (check(mid)) r = mid; //����check()����������д��Ŀ�߼� 
		else l = mid + 1;
	}
	return l; //ע������ѭ��ʱ��l = mid 
} 

//������[l, mid)��[mid, r]
int bsearch_2(int s[], int l, int r){
	while(l < r){
		int mid = l + r >> 1;
		if (check(mid)) r = mid + 1;
		else l = mid;
	}
	return l;
}

//2.���������֣����������־�һ��ģ�壬�Ƚϼ�
 double bsearch_3(double s[], double l, double r){
 	const double eps = 1e-6; //1e-6��ʾ���ȣ����忴��Ŀ�Ծ��ȵ�Ҫ��
 	//���߽�ѭ�������Լ100�ξͿ����ˣ�������Ŀ�в��Ǻܳ��� 
	while (r - l > eps){
		double mid = (l + r) / 2;
		if (check(mid)) r = mid; 
		else l = mid;
	}
	return l;
 }
