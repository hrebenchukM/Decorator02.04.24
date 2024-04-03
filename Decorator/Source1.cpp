#include <iostream>
#include <string>
using namespace std;

// паттерн Decorator динамически добавляет объекту новые обязанности. 
// Является гибкой альтернативой порождению подклассов с целью расширения функциональности.

// Component (Pizza) - компонент определяет интерфейс для объектов, на которые могут быть динамически возложены дополнительные обязанности
class Hero abstract
{	
protected:
	string profession;
public:
	Hero(string n)
	{
		profession = n;
	}
	string GetName()
	{
		return profession;
	}
	

	void SetName(string name)
	{
		profession = name;
	}

	virtual int GetAttack()abstract;
	virtual int GetSpeed()abstract;
	virtual int GetHealth()abstract;
	virtual int GetDefense()abstract;
	
};

// ConcreteComponent (ItalianPizza) - конкретный компонент определяет объект, на который возлагаются дополнительные обязанности
class Human: public Hero
{
public:
	Human(): Hero(" Человек: ")
	{ }
	int GetAttack() override
	{
		return 20;
	}
	int GetSpeed() override
	{
		return 20;
	}
	int GetHealth() override
	{
		return 150;
	}
	int GetDefense() override
	{
		return 0;
	}
};

// ConcreteComponent (BulgarianPizza) - конкретный компонент определяет объект, на который возлагаются дополнительные обязанности
class Elf: public Hero
{
public:
	Elf(): Hero(" Эльф: ")
	{ }
	int GetAttack() override
	{
		return 15;
	}
	int GetSpeed() override
	{
		return 30;
	}
	int GetHealth() override
	{
		return 100;
	}
	int GetDefense() override
	{
		return 0;
	}
};


// Decorator (PizzaDecorator) хранит ссылку на объект Component и определяет интерфейс, соответствующий интерфейсу Component
class HeroDecorator abstract : public Hero
{
protected:
	Hero* hero;
public:
	HeroDecorator(string n, Hero* hero) : Hero(n)
	{
		this->hero = hero;
	}


};










// ConcreteDecorator (TomatoPizza) - конкретный декоратор возлагает дополнительные обязанности на компонент.
class ConcreteDecoratorHuman : public HeroDecorator
{
public:
	ConcreteDecoratorHuman(Hero* p)  :HeroDecorator(p->GetName() , p) {}
	int GetAttack() override
	{
		return hero->GetAttack() ;
	}

	int GetSpeed() override
	{
		return hero->GetSpeed();
	}
	int GetHealth() override
	{
		return hero->GetHealth() ;
	}
	int GetDefense() override
	{
		return hero->GetDefense();
	}
};


class HumanWarrior : public ConcreteDecoratorHuman//Человек воин
{
public:


	HumanWarrior(Hero* p) : ConcreteDecoratorHuman(p) {
		SetName(p->GetName() +"Человек-воин-");
	}

	        int GetAttack() override
			{
				return hero->GetAttack() + 20;
			}
		
			int GetSpeed() override
			{
				return hero->GetSpeed() + 10;
			}
			int GetHealth() override
			{
				return hero->GetHealth() + 10;
			}
			int GetDefense() override
			{
				return hero->GetDefense() + 20;
			}
};























class SwordBearer : public HumanWarrior//Меченосец
	{
	public:
	
	
		SwordBearer(Hero* p) : HumanWarrior(p) {
		
			SetName(p->GetName() + "Меченосец-");
		}
			
		int GetAttack() override
		{
			return hero->GetAttack() + 40;
		}
		int GetSpeed() override
		{
			return hero->GetSpeed() - 10;
		}
		int GetHealth() override
		{
			return hero->GetHealth() + 50;
		}
		int GetDefense() override
		{
			return hero->GetDefense() + 40;
		}
	};



class Archer : public HumanWarrior//Лучник
  {
  public:
    Archer(Hero* p) : HumanWarrior(p) {
		SetName(p->GetName() + "Лучник-");
    }
    int GetAttack() override
    {
      return hero->GetAttack() +20;
    }
    int GetSpeed() override
    {
      return hero->GetSpeed() + 20;
    }
    int GetHealth() override
    {
      return hero->GetHealth() + 50;
    }
    int GetDefense() override
    {
      return hero->GetDefense() + 10;
    }
  };

class Rider : public SwordBearer//Всадник
  {
  public:
    Rider(Hero* p) : SwordBearer(p) {
		SetName(p->GetName() + "Всадник-");
    }
    int GetAttack() override
    {
      return hero->GetAttack() - 10;
    }
    int GetSpeed() override
    {
      return hero->GetSpeed() + 40;
    }
    int GetHealth() override
    {
      return hero->GetHealth() + 200;
    }
    int GetDefense() override
    {
      return hero->GetDefense() + 100;
    }
  };














// ConcreteDecorator (CheesePizza) - конкретный декоратор возлагает дополнительные обязанности на компонент.
class ConcreteDecoratorElf : public HeroDecorator
{
public:
	ConcreteDecoratorElf(Hero* p) : HeroDecorator(p->GetName(), p) { }//Эльф
	int GetAttack() override
	{
		return hero->GetAttack();
	}

	int GetSpeed() override
	{
		return hero->GetSpeed();
	}
	int GetHealth() override
	{
		return hero->GetHealth();
	}
	int GetDefense() override
	{
		return hero->GetDefense();
	}
};




class ElfWarrior : public ConcreteDecoratorElf//Эльф воин
{
public:


	ElfWarrior(Hero* p) : ConcreteDecoratorElf(p) {
		SetName(p->GetName() + "Эльф воин-");
	}

	int GetAttack() override
			{
				return hero->GetAttack() + 20;
			}
		
			int GetSpeed() override
			{
				return hero->GetSpeed() - 10;
			}
			int GetHealth() override
			{
				return hero->GetHealth() + 100;
			}
			int GetDefense() override
			{
				return hero->GetDefense() + 20;
			}
};




class ElfMage : public ConcreteDecoratorElf//Эльф маг
{
public:


	ElfMage(Hero* p) : ConcreteDecoratorElf(p) {
		SetName(p->GetName() + "Эльф маг-");
	}

	int GetAttack() override
			{
				return hero->GetAttack() + 10;
			}
			int GetSpeed() override
			{
				return hero->GetSpeed() + 10;
			}
			int GetHealth() override
			{
				return hero->GetHealth() - 50;
			}
			int GetDefense() override
			{
				return hero->GetDefense() + 10;
			}
};


 class ElfArbalester : public ElfWarrior//Арбалетчик
{
public:
	ElfArbalester(Hero* p) :ElfWarrior( p) {
		SetName(p->GetName() + "Арбалетчик-");
	}
	int GetAttack() override
	{
		return hero->GetAttack() + 20;
	}
	int GetSpeed() override
	{
		return hero->GetSpeed() + 10;
	}
	int GetHealth() override
	{
		return hero->GetHealth() + 50;
	}
	int GetDefense() override
	{
		return hero->GetDefense() - 10;
	}
};
















 class ElfBadMage : public ElfMage//Злой маг
{
public:
	ElfBadMage(Hero* p) : ElfMage( p) {
		SetName(p->GetName() + "Злой маг-");
	}
	int GetAttack() override
	{
		return hero->GetAttack() + 70;
	}
	int GetSpeed() override
	{
		return hero->GetSpeed() + 20;
	}
	int GetHealth() override
	{
		return hero->GetHealth() + 0;
	}
	int GetDefense() override
	{
		return hero->GetDefense() + 0;
	}
};

class ElfGoodMage : public ElfMage//Добрый маг
{
public:
	ElfGoodMage(Hero* p) : ElfMage(p) { 
		SetName(p->GetName() + "Добрый маг-");
	}
	int GetAttack() override
	{
		return hero->GetAttack() + 50;
	}
	int GetSpeed() override
	{
		return hero->GetSpeed() + 30;
	}
	int GetHealth() override
	{
		return hero->GetHealth() + 100;
	}
	int GetDefense() override
	{
		return hero->GetDefense() + 30;
	}
};













void client(Hero* p)
{
	char s[100];
	sprintf_s(s, "Name: %s  Attack: %d Speed: %d Health: %d Defense: %d", p->GetName().c_str(), p->GetAttack(), p->GetSpeed(), p->GetHealth(), p->GetDefense());
	cout << s << endl;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	Hero* p;



	p = new Human();
	p = new ConcreteDecoratorHuman(p); // Человек
	client(p);
	


	
	p = new HumanWarrior(p); // Человек-воин
	client(p);

	p = new SwordBearer(p); // Меченосец
	client(p);

	p = new Rider(p); // Всадник
	client(p);



	


	p = new Elf();
	p = new ConcreteDecoratorElf(p);//Эльф
	client(p);


	
	p = new ElfWarrior(p);//Эльф-воин
	client(p);


	p = new ElfArbalester(p);//Арбалетчик
	client(p);




	p = new Elf();
	p = new ConcreteDecoratorElf(p);//Эльф


	p = new ElfMage(p);//Эльф маг
	client(p);

	p = new ElfGoodMage(p);//Добрый маг
	client(p);


	p = new ElfBadMage(p);//Злой маг
	client(p);


	
	system("pause");
}