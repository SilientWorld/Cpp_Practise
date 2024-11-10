//#include <iostream>
//using namespace std;
//class Vehicle
//{
//protected:
//	int MaxSpeed;
//	int Weight;
//public:
//	Vehicle(int m, int w)
//	{
//		MaxSpeed = m;
//		Weight = w;
//		cout << "Constructing Wehicle¡­¡­\n";
//	}
//	~Vehicle()
//	{
//		cout << "Deconstructing Vehicle¡­¡­\n";
//	}
//	void Run()
//	{
//		cout << "The vehicle is running!\n";
//	}
//	void Stop()
//	{
//		cout << "Please stop running!\n";
//	}
//	void Show()
//	{
//		cout << "It\'s maxspeed is:" << MaxSpeed << endl;
//		cout << "It\'weight is:" << Weight << endl;
//	}
//};
//class Bicycle :public Vehicle
//{
//protected:
//	int Height;
//public:
//	Bicycle(int m, int w, int h) :Vehicle(m, w)
//	{
//		Height = h;
//		cout << "Constructing Bicycle¡­¡­\n";
//	}
//	~Bicycle()
//	{
//		cout << "Deconstructing Vehicle¡­¡­\n";
//	}
//	void Show()
//	{
//		Vehicle::Show();
//		cout<< "It\'height is:" << Height << endl;
//	}
//};
//class Car :public Vehicle
//{
//protected:
//	int SeatNum;
//public:
//	Car(int m, int w, int s) :Vehicle(m, w)
//	{
//		SeatNum = s;
//		cout<< "Constructing Car¡­¡­\n";
//	}
//	~Car()
//	{
//		cout << "Deconstructing Car¡­¡­\n";
//	}
//	void Show()
//	{
//		Vehicle::Show();
//		cout << "It\'seatnum is:" << SeatNum << endl;
//	}
//};
//class MotorCycle :public Bicycle, public Car
//{
//public:
//	MotorCycle(int m, int w, int h, int s) :Bicycle(m, w, h), Car(m, w, s)
//	{
//		cout << "Constructing MotorCycle¡­¡­\n";
//	}
//	~MotorCycle()
//	{
//		cout << "Deconstructing MotorCycle¡­¡­\n";
//	}
//	void Show()
//	{
//		/*cout << "It\'s maxspeed is:" << MaxSpeed << endl;
//		cout << "It\'weight is:" << Weight << endl;*/
//		cout << "It\'height is:" << Height << endl;
//		cout << "It\'seatnum is:" << SeatNum << endl;
//
//	}
//};
//int main()
//{
//	Bicycle b(100,50,20);
//	b.Run();
//	b.Stop();
//	b.Show();
//	Car c(500,20,5);
//	c.Run();
//	c.Stop();
//	c.Show();
//	MotorCycle mc(100, 100, 1, 2);
//	/*mc.Run();
//	mc.Stop();*/
//	mc.Show();
//	return 0;
//}