		void create(const char *st){
			int n=strlen(st)+1;
			str=new char[n];
			strcpy(str,st);
			str[n-1]='\0';
		}
		~String(){delete[] str;}
		int len(void)const{return strlen(str);}
		String operator+(const String &st)const{
			String tmp;
			int n=this->len()+st.len()+1;
			tmp.str=new char[n];
			strcpy(tmp.str,this->str);
			strcat(tmp.str,st.str);
			tmp.str[n-1]='\0';
			return tmp;
		}
		String operator*(const int n)const{
			String tmp;
			int m=n*(this->len())+1;
			tmp.str=new char[m];
			for(int i=0;i<n;i++)strcat(tmp.str,this->str);
			tmp.str[m-1]='\0';
			return tmp;
		}
		friend String operator*(const int n,const String &st){
			return (st*n);	 
		}
		friend ostream &operator<<(ostream &out,const String &st){
			out<<st.str;
			return out; 	
		}
		friend istream &operator>>(istream &in,String &st){
			st.str=new char[256];
			in>>st.str;
			return in; 	
		}
};
=======
int main(void){
	
cout<<hello program<<endl;
return 0;
}

#include<iostream>
using namespace std;
>>>>>>> c56ced3fa6d89b18216c76f1b55db1fbbaf20f9a
int main(void){
	String st1="Hello";
	String st2= "world !";
	cout<<st1.len()<<endl;
	cout<<(3*st1)<<endl;
	cout<<(st2*3)<<endl;
	cout<<(st1+st2)<<endl;
	String st3,st4;
	cout<<"Enter a string :";
	cin>>st3;
	cout<<"Enter another string :";
	cin>>st4;
	cout<<(st3+st4)<<endl;
	return 0;
}
//This is Vinay
//
//
//aslahhh
