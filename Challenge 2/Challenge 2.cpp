#include <iostream>

class Car
{
private:
    int m_year;
    int m_miles;
    std::string m_brand;

public:
    void setYear(int newYear)
    {
        m_year = newYear;
    }

    void setMiles(int newMiles)
    {
        m_miles = newMiles;
    }

    void setBrand(std::string newBrand)
    {
        m_brand = newBrand;
    }

    int getYear()
    {
        return m_year;
    }

    int getMiles()
    {
        return m_miles;
    }

    std::string getBrand()
    {
        return m_brand;
    }

    void display()
    {
        std::cout << "Year: " << m_year << std::endl;
        std::cout << "Miles: " << m_miles << std::endl;
        std::cout << "Brand: " << m_brand << std::endl;
    }
};

int main()
{
    Car myCar;
    myCar.setYear(2011);
    myCar.setMiles(130500);
    myCar.setBrand("Mazda CX7");
    myCar.display();
}