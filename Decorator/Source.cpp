//#include <iostream>
//#include <string>
//using namespace std;
//
//// паттерн Decorator динамически добавляет объекту новые обязанности. 
//// Является гибкой альтернативой порождению подклассов с целью расширения функциональности.
//
//// Component (Pizza) - компонент определяет интерфейс для объектов, на которые могут быть динамически возложены дополнительные обязанности
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
//// ConcreteComponent (ItalianPizza) - конкретный компонент определяет объект, на который возлагаются дополнительные обязанности
//class Human: public Hero
//{
//public:
//	Human(): Hero(" Человек ")
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
//// ConcreteComponent (BulgarianPizza) - конкретный компонент определяет объект, на который возлагаются дополнительные обязанности
//class Elf: public Hero
//{
//public:
//	Elf(): Hero(" Эльф ")
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
//// Decorator (PizzaDecorator) хранит ссылку на объект Component и определяет интерфейс, соответствующий интерфейсу Component
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
//// Decorator (PizzaDecorator) хранит ссылку на объект Component и определяет интерфейс, соответствующий интерфейсу Component
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
//// ConcreteDecorator (TomatoPizza) - конкретный декоратор возлагает дополнительные обязанности на компонент.
//class HumanWarrior : public HumanDecorator//человек воин
//{
//public:
//	HumanWarrior(Hero* p): HumanDecorator(p->GetName() + "Человек воин", p){ }
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
//// ConcreteDecorator (CheesePizza) - конкретный декоратор возлагает дополнительные обязанности на компонент.
//class SwordBearer : public HumanDecorator//Меченосец
//{
//public:
//	SwordBearer(Hero* p): HumanDecorator(p->GetName() + "Меченосец", p){ }
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
//// ConcreteDecorator (CheesePizza) - конкретный декоратор возлагает дополнительные обязанности на компонент.
//class Archer : public HumanDecorator//Лучник
//{
//public:
//	Archer(Hero* p) : HumanDecorator(p->GetName() + "Лучник", p) { }
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
//// ConcreteDecorator (CheesePizza) - конкретный декоратор возлагает дополнительные обязанности на компонент.
//class Rider : public HumanDecorator//Всадник
//{
//public:
//	Rider(Hero* p) : HumanDecorator(p->GetName() + "Всадник", p) { }
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
//// ConcreteDecorator (TomatoPizza) - конкретный декоратор возлагает дополнительные обязанности на компонент.
//class ElfWarrior : public ElfDecorator//эльф воин
//{
//public:
//	ElfWarrior(Hero* p) : ElfDecorator(p->GetName() + "Эльф воин", p) { }
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
//// ConcreteDecorator (CheesePizza) - конкретный декоратор возлагает дополнительные обязанности на компонент.
//class ElfMage : public ElfDecorator//эльф маг
//{
//public:
//	ElfMage(Hero* p) : ElfDecorator(p->GetName() + "Эльф маг", p) { }
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
//// ConcreteDecorator (CheesePizza) - конкретный декоратор возлагает дополнительные обязанности на компонент.
//class ElfArbalester : public ElfDecorator//Арбалетчик
//{
//public:
//	ElfArbalester(Hero* p) : ElfDecorator(p->GetName() + "Арбалетчик", p) { }
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
//// ConcreteDecorator (CheesePizza) - конкретный декоратор возлагает дополнительные обязанности на компонент.
//class ElfBadMage : public ElfDecorator//Злой маг
//{
//public:
//	ElfBadMage(Hero* p) : ElfDecorator(p->GetName() + "Злой маг", p) { }
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
//// ConcreteDecorator (CheesePizza) - конкретный декоратор возлагает дополнительные обязанности на компонент.
//class ElfGoodMage : public ElfDecorator//Добрый маг
//{
//public:
//	ElfGoodMage(Hero* p) : ElfDecorator(p->GetName() + "Добрый маг", p) { }
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