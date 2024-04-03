//#include <iostream>
//#include <string>
//using namespace std;
//
//// ������� Decorator ����������� ��������� ������� ����� �����������. 
//// �������� ������ ������������� ���������� ���������� � ����� ���������� ����������������.
//
//// Component (Pizza) - ��������� ���������� ��������� ��� ��������, �� ������� ����� ���� ����������� ��������� �������������� �����������
//class Pizza abstract
//{
//protected:
//	string Name;
//public:
//	Pizza(string n)
//	{
//		Name = n;
//	}
//	string GetName()
//	{
//		return Name;
//	}
//	virtual int GetCost()abstract;
//};
//
//// ConcreteComponent (ItalianPizza) - ���������� ��������� ���������� ������, �� ������� ����������� �������������� �����������
//class ItalianPizza : public Pizza
//{
//public:
//	ItalianPizza() : Pizza("Italian pizza")
//	{ }
//	int GetCost() override
//	{
//		return 10;
//	}
//};
//
//// ConcreteComponent (BulgarianPizza) - ���������� ��������� ���������� ������, �� ������� ����������� �������������� �����������
//class BulgarianPizza : public Pizza
//{
//public:
//	BulgarianPizza() : Pizza("Bulgarian pizza")
//	{ }
//	int GetCost() override
//	{
//		return 8;
//	}
//};
//
//// Decorator (PizzaDecorator) ������ ������ �� ������ Component � ���������� ���������, ��������������� ���������� Component
//class PizzaDecorator abstract : public Pizza
//{
//protected:
//	Pizza* pizza;
//public:
//	PizzaDecorator(string n, Pizza* pizza) : Pizza(n)
//	{
//		this->pizza = pizza;
//	}
//};
//
//// ConcreteDecorator (TomatoPizza) - ���������� ��������� ��������� �������������� ����������� �� ���������.
//class TomatoPizza : public PizzaDecorator
//{
//public:
//	TomatoPizza(Pizza* p) : PizzaDecorator(p->GetName() + " with tomatoes", p) { }
//	int GetCost() override
//	{
//		return pizza->GetCost() + 3;
//	}
//};
//
//// ConcreteDecorator (CheesePizza) - ���������� ��������� ��������� �������������� ����������� �� ���������.
//class CheesePizza : public PizzaDecorator
//{
//public:
//	CheesePizza(Pizza* p) : PizzaDecorator(p->GetName() + " with cheese", p) { }
//	int GetCost() override
//	{
//		return pizza->GetCost() + 5;
//	}
//};
//
//void client(Pizza* p)
//{
//	char s[100];
//	sprintf_s(s, "Name: %s  Cost: %d", p->GetName().c_str(), p->GetCost());
//	cout << s << endl;
//}
//
//int main()
//{
//	Pizza* p = new ItalianPizza();
//	p = new TomatoPizza(p); // ����������� ����� � ��������
//	client(p);
//
//	p = new ItalianPizza();
//	p = new CheesePizza(p);// ����������� ����� � �����
//	client(p);
//
//	p = new BulgarianPizza();
//	p = new TomatoPizza(p);
//	p = new CheesePizza(p);// ���������� ����� � �������� � �����
//	client(p);
//
//	system("pause");
//}