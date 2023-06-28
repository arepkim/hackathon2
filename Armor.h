
#ifndef ARMOR_H
#define ARMOR_H

class Armor
{
	private:
		double atkpower;
	public:
		Armor()
		{atkpower = 5;}

		Armor(double a)
		{atkpower = a;}

		void setPower(double a)
		{atkpower = a;}

		double getPower() const
		{return atkpower;}

		char getAtkStar() const;

};
#endif
