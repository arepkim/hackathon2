
#ifndef ARMOR2_H
#define ARMOR2_H

class Armor2
{
	private:
		double defpower;
	public:
		Armor2()
		{defpower = 5;}

		Armor2(double b)
		{defpower = b;}

		void setPower2(double b)
		{defpower = b;}

		double getPower2() const
		{return defpower;}

		char getDefStar() const;
};
#endif
