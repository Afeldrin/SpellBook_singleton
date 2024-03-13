#include<string>
#include <iostream>

using namespace std;

class Protection {
	Protection() {
		cout << "Кастуем защитное заклинание" << endl;
	};
	static Protection* Reading;

	string spell = "Protectio";

public:
	Protection(const Protection&) = delete;
	void operator = (const Protection&) = delete;

	static Protection* ReadSpell() {
		if (Reading == nullptr) {
			Reading = new Protection();
		};
		return Reading;
	}
	string selectData() const {
		return spell;
	}

};

Protection* Protection::Reading = nullptr;

class Attack {
	Attack() {
		cout << "Кастуем атакующее заклинание" << endl;
	};
	static Attack* Reading;

	string spell = "Avada kedavra";

public:
	Attack(const Attack&) = delete;
	void operator = (const Attack&) = delete;

	static Attack* ReadSpell() {
		if (Reading == nullptr) {
			Reading = new Attack();
		};
		return Reading;
	}
	string selectData() const {
		return spell;
	}

};

Attack* Attack::Reading = nullptr;

class EverydaySpell {
	EverydaySpell() {
		cout << "Кастуем бытовое заклинание" << endl;
	};
	static EverydaySpell* Reading;

	string spell = "Пылесосеус";

public:
	EverydaySpell(const EverydaySpell&) = delete;
	void operator = (const EverydaySpell&) = delete;

	static EverydaySpell* ReadSpell() {
		if (Reading == nullptr) {
			Reading = new EverydaySpell();
		};
		return Reading;
	}
	string selectData() const {
		return spell;
	}

};

EverydaySpell* EverydaySpell::Reading = nullptr;



int main()
{
	setlocale(LC_ALL, "rus");
	cout << "Результат прочтения: " << Protection::ReadSpell()->selectData() << endl;
	cout << "Результат прочтения: " << Attack::ReadSpell()->selectData() << endl;
	cout << "Результат прочтения: " << EverydaySpell::ReadSpell()->selectData() << endl;
	return 0;
}