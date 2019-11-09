#include <iostream>

#include <math.h>

using namespace std;

//multilevel inheritance

class person

{

	char name[30];

	int age;

	public :

		void read()

		{

			cout<<"Enter name :";

			cin>>name;

			cout<<"Enter Age :";

			cin>>age;

		}

		void show()

		{

			cout<<"Name :"<<name;

			cout<<"\nAge :"<<age;

		}

};



class employee:public person      // class employee inherit class person publically

{

	char dept[10];

	public :

		void read()

		{

			person::read();

			cout<<"Enter Department : ";

			cin>>dept;

		}

		void show()

		{

			person::show();

			cout<<"\nDepartment : "<<dept;

		}

};



class account : public employee         // class account inherit class employee publically

{

	float bal;

	int ano;

	public :

		void read()

		{

			employee::read();

			cout<<"Enter Account no. :";

			cin>>ano;

			cout<<"Enter Balance :";

			cin>>bal;

		}

		void show()

		{

			employee::show();

			cout<<"\nAccount no. :"<<ano;

			cout<<"\nBalance :"<<bal;

		}

};

//main function

int main()

{

    account a;

    cout<<"Enter Information : "<<endl;

    a.read();

    cout<<"\n\n\nDetails :\n";

    a.show();

    return 0;

}
