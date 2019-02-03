#include<bits/stdc++.h>
using namespace std;
void SLEEP(int x){
	clock_t now=clock(); 
	while(clock()-now<x); 
} 
void c(){//清屏 
	system("cls");
}
void s(string a){//cout
	cout<<a;
}
bool ask(){//询问是否懂 
	int a;
	s("\n懂了吗?(1.懂了2.没懂)\n");
	cin>>a;
	if(a==1){
		s("棒极了!\n");
		SLEEP(500); 
		return true;
	}
	else{
		return false;
	}
}
void tell(string a){
	do{
		s(a);
	}while(!ask());
}
int main(){
	bool flag=true;
	while(flag){
		s("欢迎来到lijiaan的C++课堂\n学习马上就要开始了\n");
		s("首先，确保安装了C++，然后我们就开始了\n");
		system("pause");
		SLEEP(500);
		c(); 
		s("你要干啥?\n");
		s("1.开始写代码\n2.学习\n3.更新记录\n");
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
					c();
					do{
						s("首先,#include<bits/stdc++.h>是头文件,包括");
						s("c++里所有函数");
					}while(!ask());
					c();
					do{
						s("接着,using namespace std;是名域,不用理解") ;
					}while(false);
					c();
					do{
						s("int main(){的作用是定义主函数");
					}while(!ask());
					c();
					do{
						s("int a,b;的作用是定义两个整形变量");
					}while(!ask());
					c();
					do{
						s("cin>>a>>b;的作用是从控制台输入a,b");
					}while(!ask());
					c();
					do{
						s("cout<<a+b;就是输出a+b");
					}while(!ask());
					c();
					do{
						s("最后,return 0;相当于结束主程序(新版可以不加)");
					}while(!ask());
					c();
				}
				else if(a==2) s("对不起,功能正在制作\n");
			}
			else if(a==2) s("对不起,功能正在制作\n");
		}
		else if(a==3){
			c();
			cout<<"V0.1beta构造主框架\n"
			<<"V0.2beta添加a+b problem题解(只有部分) 设置了自动打开代码功能\n"
			<<"V0.2完成a+b problem题解\n"
			<<"V0.3添加tell函数,但未调用 添加更新日志\n"
			<<"V0.3.5完善更新日志 修复了显示问题\n"
			<<"预告:添加从文件输入函数"
			<<"作者:lijiaan 洛谷:johnvp 邮箱:johnvp@163.com\n"
			<<"感谢jyeric(dalao)的帮助!\n"
			<<"友链：\n"
			<<"1.lijiaan.sxl.cn 作者博客,啥都没有\n"
			<<"2.slay.one (奸笑)\n"
			<<"欢迎使用";
			system("pause");
			c(); 
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
