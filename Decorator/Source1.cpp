#include <iostream>
#include <string>
using namespace std;

// ������� Decorator ����������� ��������� ������� ����� �����������. 
// �������� ������ ������������� ���������� ���������� � ����� ���������� ����������������.

// Component (Pizza) - ��������� ���������� ��������� ��� ��������, �� ������� ����� ���� ����������� ��������� �������������� �����������
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

// ConcreteComponent (ItalianPizza) - ���������� ��������� ���������� ������, �� ������� ����������� �������������� �����������
class Human: public Hero
{
public:
	Human(): Hero(" �������: ")
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

// ConcreteComponent (BulgarianPizza) - ���������� ��������� ���������� ������, �� ������� ����������� �������������� �����������
class Elf: public Hero
{
public:
	Elf(): Hero(" ����: ")
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


// Decorator (PizzaDecorator) ������ ������ �� ������ Component � ���������� ���������, ��������������� ���������� Component
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










// ConcreteDecorator (TomatoPizza) - ���������� ��������� ��������� �������������� ����������� �� ���������.
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


class HumanWarrior : public ConcreteDecoratorHuman//������� ����
{
public:


	HumanWarrior(Hero* p) : ConcreteDecoratorHuman(p) {
		SetName(p->GetName() +"�������-����-");
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























class SwordBearer : public HumanWarrior//���������
	{
	public:
	
	
		SwordBearer(Hero* p) : HumanWarrior(p) {
		
			SetName(p->GetName() + "���������-");
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



class Archer : public HumanWarrior//������
  {
  public:
    Archer(Hero* p) : HumanWarrior(p) {
		SetName(p->GetName() + "������-");
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

class Rider : public SwordBearer//�������
  {
  public:
    Rider(Hero* p) : SwordBearer(p) {
		SetName(p->GetName() + "�������-");
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














// ConcreteDecorator (CheesePizza) - ���������� ��������� ��������� �������������� ����������� �� ���������.
class ConcreteDecoratorElf : public HeroDecorator
{
public:
	ConcreteDecoratorElf(Hero* p) : HeroDecorator(p->GetName(), p) { }//����
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




class ElfWarrior : public ConcreteDecoratorElf//���� ����
{
public:


	ElfWarrior(Hero* p) : ConcreteDecoratorElf(p) {
		SetName(p->GetName() + "���� ����-");
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




class ElfMage : public ConcreteDecoratorElf//���� ���
{
public:


	ElfMage(Hero* p) : ConcreteDecoratorElf(p) {
		SetName(p->GetName() + "���� ���-");
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


 class ElfArbalester : public ElfWarrior//����������
{
public:
	ElfArbalester(Hero* p) :ElfWarrior( p) {
		SetName(p->GetName() + "����������-");
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
















 class ElfBadMage : public ElfMage//���� ���
{
public:
	ElfBadMage(Hero* p) : ElfMage( p) {
		SetName(p->GetName() + "���� ���-");
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

class ElfGoodMage : public ElfMage//������ ���
{
public:
	ElfGoodMage(Hero* p) : ElfMage(p) { 
		SetName(p->GetName() + "������ ���-");
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
	p = new ConcreteDecoratorHuman(p); // �������
	client(p);
	


	
	p = new HumanWarrior(p); // �������-����
	client(p);

	p = new SwordBearer(p); // ���������
	client(p);

	p = new Rider(p); // �������
	client(p);



	


	p = new Elf();
	p = new ConcreteDecoratorElf(p);//����
	client(p);


	
	p = new ElfWarrior(p);//����-����
	client(p);


	p = new ElfArbalester(p);//����������
	client(p);




	p = new Elf();
	p = new ConcreteDecoratorElf(p);//����


	p = new ElfMage(p);//���� ���
	client(p);

	p = new ElfGoodMage(p);//������ ���
	client(p);


	p = new ElfBadMage(p);//���� ���
	client(p);


	
	system("pause");
}