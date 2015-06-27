#include<iostream> 
#include<string>
#include<fstream>

//#include <strstream.h>
#include<iomanip>
using namespace std;
struct man                                                        
{ 
    char name[10];                                          
    char postcode[10]; 
    char email[10];                                                    
    char add[20];                                               
    char tel[10];
	int num;
}m[100];
int n=100;
static b;
void sort();
void search();
void error() 
{cout<<"---输入错误请从新输入---"<<endl;cout<<"\n";}
void data_input()                                             
{ 
	char w;
	int a;
	cout<<"请输入通讯信息,依次输入:(输入0结束)"<<endl;
	for(a=0;a<n;a++)
		
	{	
	m[a].num=a+1;
	
	cout<<"姓名"<<endl;
	cin>>m[a].name;
	cout<<"邮编"<<endl;
	cin	>>m[a].postcode;
	cout<<"email"<<endl;
	cin	>>m[a].email;
	cout<<"地址"<<endl;
	cin	>>m[a].add;
	cout<<"电话号码"<<endl;
	cin	>>m[a].tel;
	cout<<"是否继续添加联系人：（n退出）";
	cin>>w;
	if(w=='n')
		//if(m[a].num==0)
	{
		
		break;
	}
	}
	system("pause");
}
void data_show()                                                   
{
	int i;
	cout<<setiosflags(ios::left)<<setw(5)<<"序号"<<"  "//用了setiosflags(ios::right)以后,表明是右对齐...
	<<setw(10)<<"姓名"<<"  "
		<<setw(7)<<"邮编"<<"  "
		<<setw(12)<<"E-mail"<<"  "
		<<setw(10)<<"地址"<<"  "
		<<setw(10)<<"电话"<<endl;
	for(i=0;m[i].num!=0;i++)//遇到0即停止输出
		//for(i=0;i<n;i++)
	{
		if(m[i].name!=0)
		{cout<<setiosflags(ios::left)<<setw(5)<<m[i].num<<"  "
			<<setw(10)<<m[i].name<<"  "
			<<setw(7)<<m[i].postcode<<"  "
			<<setw(12)<<m[i].email<<"  "
			<<setw(10)<<m[i].add<<"  "
			<<setw(10)<<m[i].tel<<endl;
		}
		else
			break;
	}
}

void dalete()                                       
{ 
	cout<<"请选择您要删除人的序号:"; 
	int a; 
	cin>>a;
	for(int i=a-1;i<n;i++)                      
	{ 
		if(a==m[i].num)
		{
			int j;
			for(j=i;j<n;j++)
			{
				strcpy(m[j].name,m[j+1].name);
				strcpy(m[j].postcode,m[j+1].postcode);
				strcpy(m[j].email,m[j+1].email); 
				strcpy(m[j].add,m[j+1].add);
				strcpy(m[j].tel,m[j+1].tel);
			} 
			n--;
			data_show();
			
			
			cout<<"--------------删除成功-------------"<<endl;
			break;
		}
		else 
		{ 
			error();
			dalete();
		} 
	}
}

void search1() 
{     
	data_show(); 
	cout<<"请输入您要查找的序号:"<<endl; 
	int a;
	cin>>a;                                                        
	int flag=0;
	for(int i=0;i<n;i++) 
	{ 
		if(a==m[i].num)                                                         
		{
			cout<<"(1).name:"; 
			cout<<m[i].name<<endl; 
			cout<<"(2).postcode:"; 
			cout<<m[i].postcode<<endl; 
			cout<<"(3).email:"; 
			cout<<m[i].email<<endl; 
			cout<<"(4).add:"; 
			cout<<m[i].add<<endl;
			cout<<"(5).telephone:"; 
			cout<<m[i].tel<<endl;
			cout<<endl;
			flag=1; search(); 
		}
		
	}
	
	if(flag==0) 
		cout<<"---抱歉没有您要查询的信息---"<<endl;
} 
void search2() 
{     
	data_show(); 
	cout<<"请输入您要查找的姓名:"<<endl; 
	string a;
	cin>>a;                                                        
	int flag=0;
	for(int i=0;i<n;i++) 
	{ 
		if(a==m[i].name)                                                         
		{
			cout<<"(1).name:"; 
			cout<<m[i].name<<endl; 
			cout<<"(2).postcode:"; 
			cout<<m[i].postcode<<endl; 
			cout<<"(3).email:"; 
			cout<<m[i].email<<endl; 
			cout<<"(4).add:"; 
			cout<<m[i].add<<endl;
			cout<<"(5).telephone:"; 
			cout<<m[i].tel<<endl;
			cout<<endl;
			flag=1;search();
		}
	}
	if(flag==0) 
		cout<<"---抱歉没有您要查询的信息---"<<endl;
}
void search3() 
{     
	data_show(); 
	cout<<"请输入您要查找的邮编:"<<endl; 
	string a; 
	cin>>a;                                                        
	int flag=0;
	for(int i=0;i<n;i++) 
	{ 
		if(a==m[i].postcode)                                                         
		{
			cout<<"(1).name:"; 
			cout<<m[i].name<<endl; 
			cout<<"(2).postcode:"; 
			cout<<m[i].postcode<<endl; 
			cout<<"(3).email:"; 
			cout<<m[i].email<<endl; 
			cout<<"(4).add:"; 
			cout<<m[i].add<<endl;
			cout<<"(5).telephone:"; 
			cout<<m[i].tel<<endl;
			cout<<endl;
			flag=1;search(); 
		}
	}
	if(flag==0) 
		cout<<"---抱歉没有您要查询的信息---"<<endl;
}
void search4() 
{     
	data_show(); 
	cout<<"请输入您要查找的Email:"<<endl; 
	string a; 
	cin>>a;                                                        
	int flag=0;
	for(int i=0;i<n;i++) 
	{ 
		if(a==m[i].email)                                                         
		{
			cout<<"(1).name:"; 
			cout<<m[i].name<<endl; 
			cout<<"(2).postcode:"; 
			cout<<m[i].postcode<<endl; 
			cout<<"(3).email:"; 
			cout<<m[i].email<<endl; 
			cout<<"(4).add:"; 
			cout<<m[i].add<<endl;
			cout<<"(5).telephone:"; 
			cout<<m[i].tel<<endl;
			cout<<endl;
			flag=1;search(); 
		}
	}
	if(flag==0) 
		cout<<"---抱歉没有您要查询的信息---"<<endl;
}
void search5() 
{     
	data_show(); 
	cout<<"请输入您要查找的地址:"<<endl; 
	string a; 
	cin>>a;                                                        
	int flag=0;
	for(int i=0;i<n;i++) 
	{ 
		if(a==m[i].add)                                                         
		{
			cout<<"(1).name:"; 
			cout<<m[i].name<<endl; 
			cout<<"(2).postcode:"; 
			cout<<m[i].postcode<<endl; 
			cout<<"(3).email:"; 
			cout<<m[i].email<<endl; 
			cout<<"(4).add:"; 
			cout<<m[i].add<<endl;
			cout<<"(5).telephone:"; 
			cout<<m[i].tel<<endl;
			cout<<endl;
			flag=1;search();
		}
	}
	if(flag==0) 
		cout<<"---抱歉没有您要查询的信息---"<<endl;
}
void search6() 
{     
	data_show(); 
	cout<<"请输入您要查找的电话:"<<endl; 
	string a; 
	cin>>a;                                                        
	int flag=0;
	for(int i=0;i<n;i++) 
	{ 
		if(a==m[i].tel)                                                         
		{
			cout<<"(1).name:"; 
			cout<<m[i].name<<endl; 
			cout<<"(2).postcode:"; 
			cout<<m[i].postcode<<endl; 
			cout<<"(3).email:"; 
			cout<<m[i].email<<endl; 
			cout<<"(4).add:"; 
			cout<<m[i].add<<endl;
			cout<<"(5).telephone:"; 
			cout<<m[i].tel<<endl;
			cout<<endl;
			flag=1;
			search();
		}
	}
	if(flag==0) 
		cout<<"---抱歉没有您要查询的信息---"<<endl;
}
void search() 
{
	cout<<"请输入查询方式：\n(1)序号(2)姓名(3)邮编(4)Email(5)地址(6)电话(7)结束"<<endl;   
	cout<<"请输入选项:"; 
	int r; 
	cin>>r; 
	switch(r)                                    
	{ 
	case 1:search1();break;     
    case 2:search2();break;    
	case 3:search3();break;    
	case 4:search4();break;   
	case 5:search5();break;
	case 6:search6();break;
    case 7:cout<<"-----GOOD LUCK-----"<<endl;return;break;           
	default:error(); 
	} 
}
void compile()                                                          
{ 
	data_show(); 
	cout<<"请选择您要编辑的信息序号:"; 
	int i; 
	cin>>i; 
	i--; 
	if(i>=0&&i<n)
	{ 
		for(;;)                           
		{ 
			cout<<"number:"<<m[i].num<<endl;
			cout<<"(1).name:"; 
			cout<<m[i].name<<endl; 
			cout<<"(2).postcode:"; 
			cout<<m[i].postcode<<endl; 
			cout<<"(3).email:"; 
			cout<<m[i].email<<endl; 
			cout<<"(4).address:"; 
			cout<<m[i].add<<endl;cout<<"(5).telephone:"; 
			cout<<m[i].tel<<endl;cout<<"(6).exit"<<endl; 
			cout<<endl; 
			cout<<"请输入选项:"; 
			int r; 
			cin>>r; 
			switch(r)                                    
			{ 
			case 1:cout<<"name:";cin>>m[i].name;break;     
			case 2:cout<<"postcode:";  
				cin>>m[i].postcode;break;   
			case 3:cout<<"birthday:"; 
				cin>>m[i].email; break; 
			case 4:cout<<"address:"; 
				cin>>m[i].add;break;     
			case 5:cout<<"telephone:"; 
				cin>>m[i].tel;break;     
			case 6:cout<<"-----修改成功-----"<<endl;return;break;           
			default:error(); 
			} 
		} 
	} 
	else 
	{
		error();
		compile();
	} 
}
void sort1()
{
	int i,j;
	char temp1[20],temp2[20],temp3[20],temp4[20],temp5[20];
	for(i=0;i<b-1;i++)
	{
		for(j=0;j<b-i-1;j++)
			if((strcmp(m[j].name,m[j+1].name))>0) 
			{
				strcpy(temp1,m[j].name);  
				strcpy(temp2,m[j].postcode);
				strcpy(temp3,m[j].email);
				strcpy(temp4,m[j].add);
				strcpy(temp5,m[j].tel);
				strcpy(m[j].name,m[j+1].name);
				strcpy(m[j].postcode,m[j+1].postcode);
				strcpy(m[j].email,m[j+1].email);
				strcpy(m[j].add,m[j+1].add);
				strcpy(m[j].tel,m[j+1].tel);
				strcpy(m[j+1].name,temp1);
				strcpy(m[j+1].postcode,temp2);
				strcpy(m[j+1].email,temp3);
				strcpy(m[j+1].add,temp4);
				strcpy(m[j+1].tel,temp5);
			}
	}
	data_show(); 
	cout<<"sort sucess!"<<endl;
	sort();
}
void sort2()
{
	int i,j;
	char temp1[20],temp2[20],temp3[20],temp4[20],temp5[20];
	for(i=0;i<b-1;i++)
	{
		for(j=0;j<b-i-1;j++)
			if((strcmp(m[j].postcode,m[j+1].postcode))>0) 
			{
				strcpy(temp1,m[j].name);  
				strcpy(temp2,m[j].postcode);
				strcpy(temp3,m[j].email);
				strcpy(temp4,m[j].add);
				strcpy(temp5,m[j].tel);
				strcpy(m[j].name,m[j+1].name);
				strcpy(m[j].postcode,m[j+1].postcode);
				strcpy(m[j].email,m[j+1].email);
				strcpy(m[j].add,m[j+1].add);
				strcpy(m[j].tel,m[j+1].tel);
				strcpy(m[j+1].name,temp1);
				strcpy(m[j+1].postcode,temp2);
				strcpy(m[j+1].email,temp3);
				strcpy(m[j+1].add,temp4);
				strcpy(m[j+1].tel,temp5);
			}
	}
	data_show(); 
	cout<<"sort sucess!"<<endl;
	sort();
}
void sort3()
{
	int i,j;
	char temp1[20],temp2[20],temp3[20],temp4[20],temp5[20];
	for(i=0;i<b-1;i++)
	{
		for(j=0;j<b-i-1;j++)
			if((strcmp(m[j].email,m[j+1].email))>0) 
			{
				strcpy(temp1,m[j].name);  
				strcpy(temp2,m[j].postcode);
				strcpy(temp3,m[j].email);
				strcpy(temp4,m[j].add);
				strcpy(temp5,m[j].tel);
				strcpy(m[j].name,m[j+1].name);
				strcpy(m[j].postcode,m[j+1].postcode);
				strcpy(m[j].email,m[j+1].email);
				strcpy(m[j].add,m[j+1].add);
				strcpy(m[j].tel,m[j+1].tel);
				strcpy(m[j+1].name,temp1);
				strcpy(m[j+1].postcode,temp2);
				strcpy(m[j+1].email,temp3);
				strcpy(m[j+1].add,temp4);
				strcpy(m[j+1].tel,temp5);
			}
	}
	data_show(); 
	cout<<"sort sucess!"<<endl;
	sort();
} 
void sort4()
{
	int i,j;
	char temp1[20],temp2[20],temp3[20],temp4[20],temp5[20];
	for(i=0;i<b-1;i++)
	{
		for(j=0;j<b-i-1;j++)
			if((strcmp(m[j].add,m[j+1].add))>0) 
			{
				strcpy(temp1,m[j].name);  
				strcpy(temp2,m[j].postcode);
				strcpy(temp3,m[j].email);
				strcpy(temp4,m[j].add);
				strcpy(temp5,m[j].tel);
				strcpy(m[j].name,m[j+1].name);
				strcpy(m[j].postcode,m[j+1].postcode);
				strcpy(m[j].email,m[j+1].email);
				strcpy(m[j].add,m[j+1].add);
				strcpy(m[j].tel,m[j+1].tel);
				strcpy(m[j+1].name,temp1);
				strcpy(m[j+1].postcode,temp2);
				strcpy(m[j+1].email,temp3);
				strcpy(m[j+1].add,temp4);
				strcpy(m[j+1].tel,temp5);
			}
	}
	data_show(); 
	cout<<"sort sucess!"<<endl;
	sort();
} 
void sort5()
{
	int i,j;
	char temp1[20],temp2[20],temp3[20],temp4[20],temp5[20];
	for(i=0;i<b-1;i++)
	{
		for(j=0;j<b-i-1;j++)
			if((strcmp(m[j].tel,m[j+1].tel))>0) 
			{
				strcpy(temp1,m[j].name);  
				strcpy(temp2,m[j].postcode);
				strcpy(temp3,m[j].email);
				strcpy(temp4,m[j].add);
				strcpy(temp5,m[j].tel);
				strcpy(m[j].name,m[j+1].name);
				strcpy(m[j].postcode,m[j+1].postcode);
				strcpy(m[j].email,m[j+1].email);
				strcpy(m[j].add,m[j+1].add);
				strcpy(m[j].tel,m[j+1].tel);
				strcpy(m[j+1].name,temp1);
				strcpy(m[j+1].postcode,temp2);
				strcpy(m[j+1].email,temp3);
				strcpy(m[j+1].add,temp4);
				strcpy(m[j+1].tel,temp5);
			}
	}
	data_show(); 
	cout<<"sort sucess!"<<endl;
	sort();
}
void sort()
{
	cout<<"(1)姓名(2)郵編(3)e_mail(4)地址(5)電話(6)結束"<<endl;   
	cout<<"请输入选项:"; 
	int r; 
	cin>>r; 
	switch(r)                                    
	{ 
	case 1:sort1();break;     
    case 2:sort2();break;    
	case 3:sort3();break;    
	case 4:sort4();break;   
	case 5:sort5();break;   
    case 6:cout<<"-----GOOD LUCK-----"<<endl;return;break;           
	default:error(); 
	} 
}   


void save()                                       
{       
	int i;
	ofstream outfile("TelBook.txt",ios::out);
	if(!outfile)
	{
		cerr<<"open TelBook.txt error!"<<endl;
		exit(1);
	}
	for(i=0;m[i].num!=0;i++)
	{  
		outfile<<setiosflags(ios::left)<<setw(5)<<m[i].num<<"  "
			<<setw(10)<<m[i].name<<"  "
			<<setw(7)<<m[i].postcode<<"  "
			<<setw(12)<<m[i].email<<"  "
			<<setw(10)<<m[i].add<<"  "
			<<setw(10)<<m[i].tel<<endl;
	}
	outfile.close();
	cout<<endl;
	cout<<"资料已保存"<<endl;
}
void load()
{
	ifstream infile("TelBook.txt",ios::out);
	if(!infile)
	{
		cerr<<"open TelBook.txt error!"<<endl;
		exit(1);
	}
	char ch[100];
while (!infile.eof())
{
infile.getline(ch,100);
cout<<ch<<endl;
}
	/*for(int i=0; i < 100; i++)
		
	{
		infile>>m[i].num;
		infile>>m[i].name;
		infile>>m[i].postcode;
		infile>>m[i].email;
		infile>>m[i].add;
		infile>>m[i].tel;
	}*/
}





void main()                                                      
{ 
	cout<<"            -----------------通讯录管理系统---------------------\n"; 
	cout<<"功能菜单:\n";
	   cout<<"                         【1】	浏览\n"; 
       cout<<"                         【2】	创建\n";                                  
       cout<<"                         【3】	删除\n"; 
       cout<<"                         【4】	查询\n"; 
       cout<<"                         【5】	编辑\n"; 
       cout<<"                         【6】	排序\n";
       cout<<"                         【7】写入文件\n";
       cout<<"                         【8】读入文件\n";
       cout<<"                         【9】	退出\n"; 
	   cout<<"							计科2班 吴方 朱允海\n"; 
       cout<<endl; 
       for(;;) 
	   { 
		   
		   int i; 
		   cout<<"请输入您要选择的选项："; 
		   cin>>i; 
		   cout<<endl; 
		   if(i>0&&i<=9){switch(i)                       
		   { 
          case 1:data_show();continue;                              
          case 2:data_input();continue;                                
          case 3:dalete();continue;                                   
          case 4:search();continue;                                   
          case 5:compile();continue; 
          case 6:sort();continue;
          case 7:save();continue;
		  case 8:load();continue;
		  case 9:cout<<"--------------------谢谢使用本软件--------------------\n";exit(0);                                                       
          default:break;} 
		   cout<<endl;}
		   else error(); 
	   }
	   
}