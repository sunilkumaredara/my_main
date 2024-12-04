













//SINGLE INHERITANCE 


/*#include<iostream>
using namespace std;

class A
{
int x;
int y;

public:
void Aassign();
void Adisplay();
};
class B:public A 
{
int p;
int q;
public:
void Bassign();
void bdisplay();
};

class C{};

int main()
{
B obj1;
obj1.Aassign();
obj1.Bassign();
obj1.Bassign();

cout<<sizeof(B)<<endl;
cout<<sizeof(A)<<endl;
cout<<sizeof(C)<<endl;
}

void B::Bassign()

{
p=33;
q=44;

Aassign();
}
void A::Aassign()
{
x=11;
y=22;
}
void B::bdisplay()

{
A display();
cout<<p<<" "<<q<<endl;
}
void A::Adisplay()
{
cout<<x<<" "<<y<<endl;
}*/


//MULTIPLE INHERITANCE........


/*#include<iostream>
using namespace std;

class A 
{

int x;
int y;
public:
A()
{
x=10;
y=20;
}
void Adisplay()
{
cout<<x<<" "<<y<<endl;
}
};

class B
{
int p;
int q;

public:

B()
{
p=30;
q=40;
}
void Bdisplay()
{
cout<<p<<" "<<q<<endl;

}
};

class C:public A,public B
{
int a;
int b;
public:
C()
{
a=50;
b=60;
}
void Cdisplay()
{
Adisplay();
Bdisplay();
cout<<a<<" "<<b<<endl;
}
};

int main()
{
C obj1;
obj1.Cdisplay();
}*/

//HYBRID INHERITANCE//

/*#include<iostream>
using namespace std;

class A 
{

int x;
int y;
public:
A()
{
x=10;
y=20;
}
void Adisplay()
{
cout<<x<<" "<<y<<endl;
}
};

class B:public A
{
int p;
int q;

public:

B()
{
p=30;
q=40;
}
void Bdisplay()
{
cout<<p<<" "<<q<<endl;

}
};

class C:public B
{
int a;
int b;
public:
C()
{
a=50;
b=60;
}
void Cdisplay()
{
Adisplay();
Bdisplay();
cout<<a<<" "<<b<<endl;
}
};
class D:public C
{

int s;
int t;
public:
D()
{
s=70;
t=100;
}
void Ddisplay()
{
Adisplay();
Bdisplay();
Cdisplay();
cout<<s<<" "<<t<<endl;
}
};

class E:public D
{
int m;
int n;
public:
E()
{
m=100;
n=200;
}
void Edisplay()
{
Adisplay();
Bdisplay();
Cdisplay();
Ddisplay();
}
};

int main()
{
E obj1;
obj1.Ddisplay();
}*/


// FUNCTION OVER RIDING
// if we have over ridided function the compiler calls the latest overridided function 

/*#include<iostream>
using namespace std;

class A
{
int x;
int y;

public:
void assign(int a,int b)
{
x=a;
y=b;
}
void Adisplay()
{
cout<<x<<" "<<y<<endl;
}
};

class B:public A
{
int p;
int q;
public:

void assign(int a,int b)
{
p=a;
q=b;
}
void Bdisplay()
{
cout<<p<<" "<<q<<endl;
}
};
int main()
{

B obj1;
obj1.assign(10,20);
obj1.Adisplay();
}*/





//FUNCTION OVERRIDING WITH DIFFERENT OBJECTS//

/*#include<iostream>
using namespace std;
class A 
{
int x;
int y;

public:
A()
{
x=100;
y=200;
}
void display()
{
cout<<x<<" "<<y<<endl;
}
void assign(int a,int b)
{
x=a;
y=b;
}
};
class B:public A 
{
int p;
int q;
public:
B()
{
p=30;
q=40;
}
void assign(int a,int b)
{
p=a;
q=b;
A::assign(a,b);
}
void display()
{
A tobj1;
tobj1.display();
cout<<p<<" "<<q<<endl;



}
};
int main()
{
B obj1;
obj1.assign(1000,20000);
obj1.display();
}*/


// DESTRUCTOR

//* destructor is a special function of a class
//* destructor will also be same name as same name with ~ symbol.
//* destrctor also has no return type.
//* destructor is  to uninitilaise the class data members .
//* destructor is called when object scope ends or object memory delets.


#include<iostream>
using namespace std;
class A 
{
public:
A()
{
cout<<"hello"<<endl;
}
~A()
{
cout<<"A destructor"<<endl;
}
};

class B:public A
{
public:
B()
{
cout<<"hello world"<<endl;
}
~B()
{
cout<<"B destrctor"<<endl;
}
};

class D
{
public:
D()
{
cout<<"sample world"<<endl;
}
~D()
{
cout<<"D destructor"<<endl;
}
};

class C:public D,public B
{
public:
C()
{
cout<<"ABCDEF"<<endl;
}
~C()
{
cout<<"C destrctor"<<endl;
}
};

class E:public C
{
public:
E()
{
cout<<"PQR"<<endl;
}
~E()
{
cout<<"E destructor"<<endl;
}
};

int main()
{
A tobj;
cout<<"hello"<<endl;
cout<<"sample"<<endl;
}


/*#include<iostream>
using namespace std;

class A
{
public:
A()
{
cout<<"A constructor"<<endl;
}
A(int a)
{
cout<<"1 parameter"<<endl;

}
A(int a,int b)
{
cout<<"2 parameter A constructor"<<endl;
}
~A()
{
cout<<"A destrctor"<<endl;
}
};
class B:public A
{
public:
B()
{
cout<<"B constrctor"<<endl;
}
B(int a)
{
cout<<"B 1 PARAMETER CONSTRCTOR"<<endl;

}
B(int a,int b)
{
cout<<"B 2 PARAMETER CONSTRCTOR"<<endl;
}
~B()
{
cout<<"B DESTRCTOR"<<endl;
}
};

class C:public B
{
public:
C()
{}
C(int a){}
C(int a,int b){}
~C(){}
};

int main()
{
//C obj(10);
}



// PRIVATE ACCESS SPECIFIER  


/*#include<iostream>
using namespace std;

class A
{
int x;
int y;
public:
int p;
int q;

protected: // protected can be accessed within the class and derived class but not outside the class

int r;
int s;

void Aassign()

{
x=10;
y=20;
p=30;
q=40;
r=50;
s=60;
}
public:
void Adisplay()
{
cout<<x<<y<<p<<q<<r<<s<<endl;
}
};
class B:private A    //if we give private inheritance all the public and protected properties
//becomes private so they cannot be accessed 

{
int a;
public:
int b;
protected:
int c;

public:B()
{
a=11;
b=1;
c=2;
}

void assign()
{
Aassign();
a=100;
b=200;
c=300;
r=400;
s=500;
p=600;
q=700;
}
void display()
{
Adisplay();
cout<<a<<b<<c<<endl;
}
};

int main()
{
B obj1;
obj1.assign();   //if we give Aassign it will give the error saying that cannot 
                   //access protected member declared in class 'A'
obj1.display();
}




/*#include<iostream>
using namespace std;

class A 
{
	int a;

protected:
	int s;
public:
	int x;


	void assign()
	{
		assign();
	
		a=10;
		x=20;
		s=11;

	}
};
class B:public A 
{
	int t;


public:
	int v;


	void display()
	{
		display();
	
		t=100;
		v=200;


	}
};

class C:public B

{ 
	int i;


protected:
	int k;


public:
	int m;
	void print()
	{
		print();
	
		i=1000;
		k=200;
		m=300;
	}
	
};

class D:public C
{
	int p;
public:
	int q;
protected:
	int r;
	void show()
	{
		show();
	
	p=1;
	q=2;
	r=3;
	}
};
void main()
{
	B obj1;
	obj1.assign();
}*/

/*#include<iostream>
using namespace std;

class A
{
int x;
int y;
public:
int p;
int q;

protected: // protected can be accessed within the class and derived class but not outside the class

int r;
int s;

void Aassign()

{
x=10;
y=20;
p=30;
q=40;
r=50;
s=60;
}
public:
void Adisplay()
{
cout<<x<<y<<p<<q<<r<<s<<endl;
}
};
class B:private A    //if we give private inheritance all the public and protected properties
//becomes private so they cannot be accessed 

{
int a;
public:
int b;
protected:
int c;

public:B()
{
a=11;
b=1;
c=2;
}

void assign()
{
Aassign();
a=100;
b=200;
c=300;
r=400;
s=500;
p=600;
q=700;
}
void display()
{
Adisplay();
cout<<a<<b<<c<<endl;
}
};

int main()
{
B obj1;
obj1.assign();   //if we give Aassign it will give the error saying that cannot 
                 //access protected member declared in class 'A'
obj1.display();
}*/






