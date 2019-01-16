#include<bits/stdc++.h>
using namespace std;
void c(){
	system("cls");
}
void s(string a){
	cout<<a;
}
bool ask(){
	int a;
	s("\n懂了吗?(1.懂了2.没懂)\n");
	cin>>a;
	if(a==1){
		s("棒极了!\n");
		return true;
	}
	else{
		return false;
	}
}
void SLEEP(int x){ //延时x毫秒 
	clock_t now=clock(); 
	while(clock()-now<x); 
} 
int main(){
	bool flag=true;
	while(flag){
		s("欢迎来到李嘉安的C++课堂\n学习马上就要开始了\n");
		s("首先，确保安装了C++，然后我们就开始了\n");
		system("pause");
		SLEEP(500);
		c(); 
		s("你要干啥?\n");
		s("1.开始写代码\n2.学习\n");
		int a;
		cin>>a;
		if(a==1){
			c();
			s("1.模板\n2.a+b problem\n");
			cin>>a;
			if(a==1){
				ofstream fo("模板.cpp");
				fo<<"#include<bits/stdc++.h>\nusing namespace std;\nint main(){\n	//写你的代码\n	return 0;\n}"; 
				cout<<"好了,打开模板.cpp就可以了！\n";
				fo.close();
				system("模板.cpp");
			}
			else if(a==2){
				ofstream fo("a+b.cpp");
				fo<<"#include<iostream>"<<endl;
				fo<<"using namespace std;"<<endl;
				fo<<"int main(){\n";
				fo<<"	int a,b;\n" ;
				fo<<"	cin>>a>>b;\n";
				fo<<"	cout<<a+b;\n";
				fo<<"	return 0;\n"; 
				fo<<"}";
				cout<<"好了,打开a+b.cpp就可以了!\n";
				fo.close();
				system("a+b.cpp");
			}
		}
		else if(a==2){
			c();
			s("1.入门\n2.初级\n");
			cin>>a;
			if(a==1){
				s("1.a+b解释\n2.语句的学习\n");
				cin>>a;
				if(a==1){
					do{
						s("首先,#include<bits/stdc++.h>是头文件,包括");
						s("c++里所有函数");
					}while(!ask());
				}
				else if(a==2) s("对不起,功能正在制作\n");
			}
			else if(a==2) s("对不起,功能正在制作\n");
		}
		char a1;
		cout<<"想要结束吗:\n1.结束\n2.继续\n";
		cin>>a1;
		if(a1=='1') break;
		else {
			SLEEP(500);
			c();
		}
	}	
	return 0;
}
