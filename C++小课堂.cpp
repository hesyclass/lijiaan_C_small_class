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
	s("\n������?(1.����2.û��)\n");
	cin>>a;
	if(a==1){
		s("������!\n");
		return true;
	}
	else{
		return false;
	}
}
void SLEEP(int x){ //��ʱx���� 
	clock_t now=clock(); 
	while(clock()-now<x); 
} 
int main(){
	bool flag=true;
	while(flag){
		s("��ӭ������ΰ���C++����\nѧϰ���Ͼ�Ҫ��ʼ��\n");
		s("���ȣ�ȷ����װ��C++��Ȼ�����ǾͿ�ʼ��\n");
		system("pause");
		SLEEP(500);
		c(); 
		s("��Ҫ��ɶ?\n");
		s("1.��ʼд����\n2.ѧϰ\n");
		int a;
		cin>>a;
		if(a==1){
			c();
			s("1.ģ��\n2.a+b problem\n");
			cin>>a;
			if(a==1){
				ofstream fo("ģ��.cpp");
				fo<<"#include<bits/stdc++.h>\nusing namespace std;\nint main(){\n	//д��Ĵ���\n	return 0;\n}"; 
				cout<<"����,��ģ��.cpp�Ϳ����ˣ�\n";
				fo.close();
				system("ģ��.cpp");
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
				cout<<"����,��a+b.cpp�Ϳ�����!\n";
				fo.close();
				system("a+b.cpp");
			}
		}
		else if(a==2){
			c();
			s("1.����\n2.����\n");
			cin>>a;
			if(a==1){
				s("1.a+b����\n2.����ѧϰ\n");
				cin>>a;
				if(a==1){
					do{
						s("����,#include<bits/stdc++.h>��ͷ�ļ�,����");
						s("c++�����к���");
					}while(!ask());
				}
				else if(a==2) s("�Բ���,������������\n");
			}
			else if(a==2) s("�Բ���,������������\n");
		}
		char a1;
		cout<<"��Ҫ������:\n1.����\n2.����\n";
		cin>>a1;
		if(a1=='1') break;
		else {
			SLEEP(500);
			c();
		}
	}	
	return 0;
}
