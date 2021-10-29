//Program to find negation of a matrix

#include<iostream.h>
#include<conio.h>

class Matrix
{
	int a[2][2];
    public:
	void accept();
	void display();
	void operator-();  // Overloaded '-' Unary Operator
};
void Matrix::accept()    // Accepting values from the User
{
	cout<<"\n Enter Matrix Element (2x2) : \n\n";
	for(int i=0; i<2; i++)
	{
		for(int j=0; j<2; j++)
		{
			cout<<" ";
			cin>>a[i][j];
		}
	}
}
void Matrix::display()   // Function for Displaying the Matrix
{
	cout<<"\n Matrix is : \n\n";
	for(int i=0; i<2; i++)
	{
		for(int j=0; j<2; j++)
		{
			cout<<" ";
			cout<<a[i][j]<<"\t";
		}
	cout<<"\n";
	}
}
void Matrix::operator-()
{
	for(int i=0; i<2; i++)
	{
		for(int j=0; j<2; j++)
		{
			a[i][j]=255-a[i][j];
		}
	}
}
void main()
{
	clrscr();
	Matrix m;
	m.accept();
	m.display();    // Displaying Matrix
	-m;            // Calling Overloaded Unary Operator
	m.display();  // Displaying Negated Numbers Stored in a Matrix
	getch();
}
