#include <iostream>
using namespace std;
#include "BMI.h"

// 関数定義
int BMI::SetData()
{
	cout << "身長(m)---";
	cin >> bl;
	cout << "体重(kg)---";
	cin >> bw;
	bmi = bw / (bl * bl);
	return 0;
}
int BMI::ShowBMI()
{
	cout << "BMI = " << bmi << endl;
	return 0;
}