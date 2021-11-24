#include <iostream>
#include <ostream>

namespace Distance
{
  class MyDistance
  {
  public:
    MyDistance(double i) : m(i) {}

    friend MyDistance operator+(const MyDistance &a, const MyDistance &b)
    {
      return MyDistance(a.m + b.m);
    }
    friend MyDistance operator-(const MyDistance &a, const MyDistance &b)
    {
      return MyDistance(a.m - b.m);
    }

    friend MyDistance operator*(double m, const MyDistance &a)
    {
      return MyDistance(m * a.m);
    }

    friend std::ostream &operator<<(std::ostream &out, const MyDistance &myDist)
    {
      out << myDist.m << " m";
      return out;
    }

  private:
    double m;
  };

  namespace Unit
  {
    MyDistance operator"" _km(long double d)
    {
      return MyDistance(1000 * d);
    }
    MyDistance operator"" _m(long double m)
    {
      return MyDistance(m);
    }
    MyDistance operator"" _dm(long double d)
    {
      return MyDistance(d / 10);
    }
    MyDistance operator"" _cm(long double c)
    {
      return MyDistance(c / 100);
    }
    MyDistance operator"" _ft(long double ft)
    {
      return MyDistance(0.3048 * ft);
    }
    MyDistance operator"" _mi(long double mi)
    {
      return MyDistance(1609.344 * mi);
    }
  }
}

using namespace Distance::Unit;

int main()
{

  std::cout << std::endl;

  std::cout << "1.0_km: " << 1.0_km << std::endl;
  std::cout << "1.0_m: " << 1.0_m << std::endl;
  std::cout << "1.0_dm: " << 1.0_dm << std::endl;
  std::cout << "1.0_cm: " << 1.0_cm << std::endl;
  std::cout << "1.0_ft: " << 1.0_ft << std::endl;
  std::cout << "1.0_mi: " << 1.0_mi << std::endl;

  std::cout << std::endl;
  std::cout << "1.0_km + 2.0_dm +  3.0_dm - 4.0_cm - 5.0_ft: " << 1.0_km + 2.0_dm + 3.0_dm - 4.0_cm - 5.0_ft << std::endl;
  std::cout << std::endl;

  Distance::MyDistance work = 12.3_km;
  Distance::MyDistance workPerDay = 2 * work;
  Distance::MyDistance abbreviationToWork = 4500.0_m;
  Distance::MyDistance running = 2 * 4600.0_m;
  Distance::MyDistance fitness = 1000.0_m;
  Distance::MyDistance shopping = 2 * 0.7_km;

  Distance::MyDistance myDistancePerWeek = 5 * workPerDay - 2 * abbreviationToWork + 6 * running + 3 * fitness + 2 * shopping;
  std::cout << "5 * workPerDay - 2 * abbreviationToWork + 6 * running + 3 * fitness + 2 * shopping: " << myDistancePerWeek;
  std::cout << "\n\n";
}