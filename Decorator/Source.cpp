//#include <iostream>
//#include <string>
//using namespace std;
//
//// ������� Decorator ����������� ��������� ������� ����� �����������. 
//// �������� ������ ������������� ���������� ���������� � ����� ���������� ����������������.
//
//// Component (Pizza) - ��������� ���������� ��������� ��� ��������, �� ������� ����� ���� ����������� ��������� �������������� �����������
//class Hero abstract
//{	
//protected:
//	string profession;
//public:
//	Hero(string n)
//	{
//		profession = n;
//	}
//	string GetName()
//	{
//		return profession;
//	}
//	virtual int GetAttack()abstract;
//	virtual int GetSpeed()abstract;
//	virtual int GetHealth()abstract;
//	virtual int GetDefense()abstract;
//	
//};
//
//// ConcreteComponent (ItalianPizza) - ���������� ��������� ���������� ������, �� ������� ����������� �������������� �����������
//class Human: public Hero
//{
//public:
//	Human(): Hero(" ������� ")
//	{ }
//	int GetAttack() override
//	{
//		return 20;
//	}
//	int GetSpeed() override
//	{
//		return 20;
//	}
//	int GetHealth() override
//	{
//		return 150;
//	}
//	int GetDefense() override
//	{
//		return 0;
//	}
//};
//
//// ConcreteComponent (BulgarianPizza) - ���������� ��������� ���������� ������, �� ������� ����������� �������������� �����������
//class Elf: public Hero
//{
//public:
//	Elf(): Hero(" ���� ")
//	{ }
//	int GetAttack() override
//	{
//		return 15;
//	}
//	int GetSpeed() override
//	{
//		return 30;
//	}
//	int GetHealth() override
//	{
//		return 100;
//	}
//	int GetDefense() override
//	{
//		return 0;
//	}
//};
//
//
//
//
//
//
//
//// Decorator (PizzaDecorator) ������ ������ �� ������ Component � ���������� ���������, ��������������� ���������� Component
//class HumanDecorator abstract: public Hero
//{
//protected:
//	Hero * human;
//public:
//	HumanDecorator(string n, Hero* human): Hero(n)
//	{
//		this->human = human;
//	}
//};
//
//
//// Decorator (PizzaDecorator) ������ ������ �� ������ Component � ���������� ���������, ��������������� ���������� Component
//class ElfDecorator abstract : public Hero
//{
//protected:
//	Hero* elf;
//public:
//	ElfDecorator(string n, Hero* elf) : Hero(n)
//	{
//		this->elf = elf;
//	}
//};
//
//
//
//
//
//// ConcreteDecorator (TomatoPizza) - ���������� ��������� ��������� �������������� ����������� �� ���������.
//class HumanWarrior : public HumanDecorator//������� ����
//{
//public:
//	HumanWarrior(Hero* p): HumanDecorator(p->GetName() + "������� ����", p){ }
//	int GetAttack() override
//	{
//		return human->GetAttack() + 20;
//	}
//
//	int GetSpeed() override
//	{
//		return human->GetSpeed() + 10;
//	}
//	int GetHealth() override
//	{
//		return human->GetHealth() + 10;
//	}
//	int GetDefense() override
//	{
//		return human->GetDefense() + 20;
//	}
//};
//
//// ConcreteDecorator (CheesePizza) - ���������� ��������� ��������� �������������� ����������� �� ���������.
//class SwordBearer : public HumanDecorator//���������
//{
//public:
//	SwordBearer(Hero* p): HumanDecorator(p->GetName() + "���������", p){ }
//	int GetAttack() override
//	{
//		return human->GetAttack() + 40;
//	}
//	int GetSpeed() override
//	{
//		return human->GetSpeed() - 10;
//	}
//	int GetHealth() override
//	{
//		return human->GetHealth() + 50;
//	}
//	int GetDefense() override
//	{
//		return human->GetDefense() + 40;
//	}
//};
//
//// ConcreteDecorator (CheesePizza) - ���������� ��������� ��������� �������������� ����������� �� ���������.
//class Archer : public HumanDecorator//������
//{
//public:
//	Archer(Hero* p) : HumanDecorator(p->GetName() + "������", p) { }
//	int GetAttack() override
//	{
//		return human->GetAttack() +20;
//	}
//	int GetSpeed() override
//	{
//		return human->GetSpeed() + 20;
//	}
//	int GetHealth() override
//	{
//		return human->GetHealth() + 50;
//	}
//	int GetDefense() override
//	{
//		return human->GetDefense() + 10;
//	}
//};
//
//
//// ConcreteDecorator (CheesePizza) - ���������� ��������� ��������� �������������� ����������� �� ���������.
//class Rider : public HumanDecorator//�������
//{
//public:
//	Rider(Hero* p) : HumanDecorator(p->GetName() + "�������", p) { }
//	int GetAttack() override
//	{
//		return human->GetAttack() - 10;
//	}
//	int GetSpeed() override
//	{
//		return human->GetSpeed() + 40;
//	}
//	int GetHealth() override
//	{
//		return human->GetHealth() + 200;
//	}
//	int GetDefense() override
//	{
//		return human->GetDefense() + 100;
//	}
//};
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//// ConcreteDecorator (TomatoPizza) - ���������� ��������� ��������� �������������� ����������� �� ���������.
//class ElfWarrior : public ElfDecorator//���� ����
//{
//public:
//	ElfWarrior(Hero* p) : ElfDecorator(p->GetName() + "���� ����", p) { }
//	int GetAttack() override
//	{
//		return elf->GetAttack() + 20;
//	}
//
//	int GetSpeed() override
//	{
//		return elf->GetSpeed() - 10;
//	}
//	int GetHealth() override
//	{
//		return elf->GetHealth() + 100;
//	}
//	int GetDefense() override
//	{
//		return elf->GetDefense() + 20;
//	}
//};
//
//// ConcreteDecorator (CheesePizza) - ���������� ��������� ��������� �������������� ����������� �� ���������.
//class ElfMage : public ElfDecorator//���� ���
//{
//public:
//	ElfMage(Hero* p) : ElfDecorator(p->GetName() + "���� ���", p) { }
//	int GetAttack() override
//	{
//		return elf->GetAttack() + 10;
//	}
//	int GetSpeed() override
//	{
//		return elf->GetSpeed() + 10;
//	}
//	int GetHealth() override
//	{
//		return elf->GetHealth() - 50;
//	}
//	int GetDefense() override
//	{
//		return elf->GetDefense() + 10;
//	}
//};
//
//// ConcreteDecorator (CheesePizza) - ���������� ��������� ��������� �������������� ����������� �� ���������.
//class ElfArbalester : public ElfDecorator//����������
//{
//public:
//	ElfArbalester(Hero* p) : ElfDecorator(p->GetName() + "����������", p) { }
//	int GetAttack() override
//	{
//		return elf->GetAttack() + 20;
//	}
//	int GetSpeed() override
//	{
//		return elf->GetSpeed() + 10;
//	}
//	int GetHealth() override
//	{
//		return elf->GetHealth() + 50;
//	}
//	int GetDefense() override
//	{
//		return elf->GetDefense() - 10;
//	}
//};
//
//// ConcreteDecorator (CheesePizza) - ���������� ��������� ��������� �������������� ����������� �� ���������.
//class ElfBadMage : public ElfDecorator//���� ���
//{
//public:
//	ElfBadMage(Hero* p) : ElfDecorator(p->GetName() + "���� ���", p) { }
//	int GetAttack() override
//	{
//		return elf->GetAttack() + 70;
//	}
//	int GetSpeed() override
//	{
//		return elf->GetSpeed() + 20;
//	}
//	int GetHealth() override
//	{
//		return elf->GetHealth() + 0;
//	}
//	int GetDefense() override
//	{
//		return elf->GetDefense() + 0;
//	}
//};
//
//// ConcreteDecorator (CheesePizza) - ���������� ��������� ��������� �������������� ����������� �� ���������.
//class ElfGoodMage : public ElfDecorator//������ ���
//{
//public:
//	ElfGoodMage(Hero* p) : ElfDecorator(p->GetName() + "������ ���", p) { }
//	int GetAttack() override
//	{
//		return elf->GetAttack() + 50;
//	}
//	int GetSpeed() override
//	{
//		return elf->GetSpeed() + 30;
//	}
//	int GetHealth() override
//	{
//		return elf->GetHealth() + 100;
//	}
//	int GetDefense() override
//	{
//		return elf->GetDefense() + 30;
//	}
//};
//
//
//
//
//
//
//void client(Hero * p)
//{
//	char s[100];
//	sprintf_s(s, "Name: %s  Attack: %d Speed: %d Health: %d Defense: %d" , p->GetName().c_str(), p->GetAttack(), p->GetSpeed(), p->GetHealth(), p->GetDefense());
//	cout << s << endl;
//}
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//
//
//	Hero *p = new Human();
//	p = new HumanWarrior(p); 
//	client(p);
//
//	/*p = new Human();
//	p = new SwordBearer(p);
//	client(p);*/
//
//
//	
//
//
//	p = new Human();
//	p = new Archer(p);
//	client(p);
//
//
//	p = new Human();
//	p = new Rider(p);
//	client(p);
//
//
//
//	p = new Elf();
//	p = new ElfWarrior(p);
//	client(p);
//
//
//
//	p = new Elf();
//	p = new ElfMage(p);
//	client(p);
//
//
//	p = new Elf();
//	p = new ElfArbalester(p);
//	client(p);
//
//	p = new Elf();
//	p = new ElfBadMage(p);
//	client(p);
//
//	p = new Elf();
//	p = new ElfGoodMage(p);
//	client(p);
//
//	system("pause");
//}