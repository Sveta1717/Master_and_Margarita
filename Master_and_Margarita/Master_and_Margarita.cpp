#include <iostream>
#include <string>
using namespace std;

class Book 
{
	class Satire abstract 
	{
	public:
		string character;  		

		virtual void Show() = 0;		
	};

	class MASSOLIT: public Satire 
	{
	public:
		string writers = "Московское литературное общество";

		virtual void Show() override
		{
			cout << writers << " любит Грибоедово\n";
		}		
	};

	class Variety_show : public Satire
	{
	public:
		string co_worker = "Лиходеев";

		virtual void Show() override
		{
			cout << co_worker << " в Ялте\n";
		}
	};

	class Mystic abstract
	{
	public:
		string character;
		
		virtual void Show() = 0; 
	};	

	 class Voland : Mystic
	{
	public:
		string name = "Messir";
		string stick;		

		virtual void Show() override
		{
			cout << name << " :Давать покой\n";
		}
	};

	class Escort
	{

	class Fagot 
	{
	public:
		string name = "Коровьев";
		string escort;

		void Show()
		{
			cout << name;
		}

		void Serve (const Voland& voland) const
		{
			cout << name <<" в свите " << voland.name << "а\n";
		}
	};

	
		class Gella
		{
		public:
			string name = "Гелла";
			string escort;

			void Show()
			{
				cout << name;
			}

			void Serve(const Voland& voland) const
			{
				cout << name << " в свите " << voland.name << "а\n";
			}
		};

		class Cat
		{
		public:
			string name = "Бегемот";
			string escort;

			void Show()
			{
				cout << name;
			}

			void Serve(const Voland& voland) const
			{
				cout << name << " в свите " << voland.name << "а\n";
			}
		};

		class Azazello
		{
		public:
			string name = "Азазелло";
			string escort;

			void Show()
			{
				cout << name;
			}
			void Serve(const Voland& voland) const
			{
				cout << name << " в свите " << voland.name << "а\n";
			}
		};

	public:
		Fagot f;
		Gella g;
		Cat c;
		Azazello a;
		void Serve()
		{
			cout << "Свита Воланда: ";
			f.Show();
			
			cout << ", ";
			g.Show();
			cout << ", ";
			a.Show();
			cout << ", ";
			c.Show();
			cout << "\n";
		}
	};
	
	class Love abstract
	{
	public:
		string character;		

		Love()
		{
			//cout << "Сохранить любовь!\n";
		}
		~Love()
		{
			//cout << "Исчезновение!\n";
		}
	};

	class Master: Love
	{
	public:
		string talent;

		Master()
		{
			cout << "Творить!\n";
		}
		~Master()
		{
			cout << "Быт!\n";
		}
	};

	class Margarita : Love
	{
	public:
		string beauty;

		Margarita()
		{
			cout << "Спасти Мастера!\n";
		}
		~Margarita()
		{
			cout << "Бал!\n";
		}
	};

	class Manuscript // aggregation
	{
	public:
		string page;
		Master* master;

		Manuscript()
		{
			cout << "Рукописи не горят!\n";
		}
		~Manuscript()
		{
			cout << "Пламя!\n";
		}

		void Author(Master* master)
		{
			this->master = master;
		}

		void WriteManuscript()
		{
			cout << "Рукописи не горят, даже если это " << page << " страниц!\n";
			page = nullptr;
		}		
	}; 

	class Philosophy abstract
	{
	public:
		string character;		

		Philosophy()
		{			
			//cout << "Победить зло в себе!\n";
		}

		~Philosophy()
		{
			//cout << "Свет или тьма?\n";
		}		
	};

	class Yeshua: Philosophy
	{
	public:
		string cross;

		Yeshua()
		{
			cout << "Давать свет!\n";
		}

		~Yeshua()
		{
			cout << "Голгофа\n";
		}
	};

	class Pontius_Pilate : Philosophy
	{
	public:
		string cloak;

		Pontius_Pilate()
		{
			cout << "Страдать!\n";
		}

		~Pontius_Pilate()
		{
			cout << "Проиграть\n";
		}
	};

private:	
	string autor = "Михаил Булгаков\n";
	string name = "\"Мастер и Маргарита\"\n";

public:	
	void GetBook()
	{
		cout << autor << "\n";
		cout << name << "\n";
		
	}

	void GetMASSOLIT()
	{
		MASSOLIT m;
		m.Show();
	}
	void GetEscort()
	{
		Escort e;
		e.Serve();
	}
};

int main()
{
	setlocale(0, "");
	Book b;
	b.GetBook();
	b.GetEscort();
}

