#include<iostream> 
#include<string>
#include<fstream>
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
{cout<<"---����������������---"<<endl;cout<<"\n";}
void data_input()                                             
{ 
	int a;
	cout<<"������ͨѶ��Ϣ,��������:��ţ��������ʱ࣬email����ַ���绰���롣����0����"<<endl;
	for(a=0;a<n;a++)
	{
		cin>>m[a].num;
		if(m[a].num==0)
		{
			b=a;
			break;
		}
		cin>>m[a].name
			>>m[a].postcode
			>>m[a].email
			>>m[a].add
			>>m[a].tel;
	}
	system("pause");
}
void data_show()                                                   
{
	int i;
	cout<<setiosflags(ios::left)<<setw(2)<<"���"<<"  "<<setw(15)<<"����"<<"  "<<setw(20)<<"�ʱ�"<<"  "<<setw(12)<<"E-mail"<<"  "<<setw(15)<<"��ַ"<<"  "<<setw(20)<<"�绰"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<setiosflags(ios::left)<<setw(5)<<m[i].num<<"  "<<setw(15)<<m[i].name<<"  "<<setw(20)<<m[i].postcode<<"  "<<setw(12)<<m[i].email<<"  "<<setw(15)<<m[i].add<<"  "<<setw(20)<<m[i].tel<<endl;
        if(m[i].num==0)break;
	}
}

void dalete()                                       
{ 
	cout<<"��ѡ����Ҫɾ���˵����:"; 
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
			
			
			cout<<"--------------ɾ���ɹ�-------------"<<endl;
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
	cout<<"��������Ҫ���ҵ���̖:"<<endl; 
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
		cout<<"---��Ǹû����Ҫ��ѯ����Ϣ---"<<endl;
} 
void search2() 
{     
	data_show(); 
	cout<<"��������Ҫ���ҵ�����:"<<endl; 
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
		cout<<"---��Ǹû����Ҫ��ѯ����Ϣ---"<<endl;
}
void search3() 
{     
	data_show(); 
	cout<<"��������Ҫ���ҵ��]��:"<<endl; 
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
		cout<<"---��Ǹû����Ҫ��ѯ����Ϣ---"<<endl;
}
void search4() 
{     
	data_show(); 
	cout<<"��������Ҫ���ҵ�e_mail:"<<endl; 
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
		cout<<"---��Ǹû����Ҫ��ѯ����Ϣ---"<<endl;
}
void search5() 
{     
	data_show(); 
	cout<<"��������Ҫ���ҵĵ�ַ:"<<endl; 
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
		cout<<"---��Ǹû����Ҫ��ѯ����Ϣ---"<<endl;
}
void search6() 
{     
	data_show(); 
	cout<<"��������Ҫ���ҵ��Ԓ:"<<endl; 
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
		cout<<"---��Ǹû����Ҫ��ѯ����Ϣ---"<<endl;
}
void search() 
{
	cout<<"(1)��̖(2)����(3)�]��(4)e_mail(5)��ַ(6)�Ԓ(7)�Y��"<<endl;   
	cout<<"������ѡ��:"; 
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
	cout<<"��ѡ����Ҫ�༭����Ϣ���:"; 
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
			cout<<"������ѡ��:"; 
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
			case 6:cout<<"-----�޸ĳɹ�-----"<<endl;return;break;           
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
	cout<<"(1)����(2)�]��(3)e_mail(4)��ַ(5)�Ԓ(6)�Y��"<<endl;   
	cout<<"������ѡ��:"; 
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
	ofstream outfile("ͨѶ¼.txt",ios::out);
	if(!outfile)
	{
		cerr<<"open ͨѶ¼.txt error!"<<endl;
		exit(1);
	}
	for(i=0;i<b;i++)
	{  
		outfile<<setiosflags(ios::left)<<setw(5)<<m[i].num<<"  "<<setw(15)<<m[i].name<<"  "<<setw(20)<<m[i].postcode<<"  "<<setw(12)<<m[i].email<<"  "<<setw(15)<<m[i].add<<"  "<<setw(11)<<m[i].tel<<endl;
	}
	outfile.close();
	cout<<endl;
	cout<<"�����ѱ���"<<endl;
}
void load()
{
	ifstream infile("ͨѶ¼.txt",ios::out);
	if(!infile)
	{
		cerr<<"open ͨѶ¼.txt error!"<<endl;
		exit(1);
	}
	for(int i=0; i < 100; i++)
		
	{
		infile>>m[i].num;
		infile>>m[i].name;
		infile>>m[i].postcode;
		infile>>m[i].email;
		infile>>m[i].add;
		infile>>m[i].tel;
	}
}





void main()                                                      
{ 
	cout<<"-----------------ͨѶ¼����ϵͳ---------------------\n"; 
	cout<<"���ܲ˵�:\n";
	   cout<<"                         ��1�����                     \n"; 
       cout<<"                         ��2������\n";                                  
       cout<<"                         ��3��ɾ��\n"; 
       cout<<"                         ��4����ѯ\n"; 
       cout<<"                         ��5���༭\n"; 
       cout<<"                         ��6������\n";
       cout<<"                         ��7����ͨѶ¼д���ļ���ѡ��*******************\n";
       cout<<"                         ��8�����ļ�����ͨѶ¼��ѡ��*******************\n";
       cout<<"                         ��9���˳���ѡ��*******************************\n"; 
	   // cout<<"**��д"; 
       cout<<endl; 
       for(;;) 
	   { 
		   
		   int i; 
		   cout<<"��������Ҫѡ���ѡ�"; 
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
		  case 9:cout<<"--------------------ллʹ�ñ����--------------------\n";exit(0);                                                       
          default:break;} 
		   cout<<endl;}
		   else error(); 
	   }
	   
}