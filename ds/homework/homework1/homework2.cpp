#include<iostream>
#include <stdlib.h>
#include<cstdio>
#include "../../complex/Complex2.h"
#include "../../vector/vector.h"
using namespace std;
 
int main(){
	Complex A[10];
	cout << "随机生成无序复数向量" <<endl; 
	for (int j = 0; j < 10; j++){
	   A[j].read_Real(rand() % 200 / 10.0);
	   A[j].read_Imaginary(rand() % 200 / 10.0);
	   A[j].read_modulus();
       A[j].display();//在屏幕上显示 
    }//生成复数 
    cout << endl;
    Vector<Complex>v(A, 10);
	v.unsort(0,10);
	cout << "置乱后" << endl;
	for(int i=0;i<10;i++)
		v._elem[i].display();
	cout<<endl<<"查找"<<endl;
	int c;
	c = v.find(A[8]);
	cout<<"A[8]此时的位置为"<<c<<endl;
	cout<<"插入后"<<endl;
	v.insert(10, A[4]);
	for(int i=0;i<11;i++)
		v._elem[i].display(); 
	cout<<endl;
 	cout<<"删除8后"<<endl;
	v.remove(8);
	for(int i=0;i<10;i++)
		v._elem[i].display();
	cout<<endl;
	cout<<"唯一化"<<endl;
	c = v.deduplicate();
	cout << "重复复数个数为" << c << endl <<"唯一化后："<< endl;
	for(int i=0;i<9;i++)
		v._elem[i].display();
	
	 
}

 

