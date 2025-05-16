#include <iostream>

class Shape
{
   public:  // C++ Access Specifiers
    void set_width(int8_t width_in)
    {
        width_ = width_in;
    }
    void set_height(int8_t height_in)
    {
        height_ = height_in;
    }

   protected:  // C++ Access Specifiers
    int8_t width_;
    int8_t height_;
};

class paintcost
{
   public:
    void set_cost(int32_t cost_in, int32_t area)
    {
        cost_ = cost_in * area;
    }
   
    auto get_cost() -> int32_t
    {
        return cost_;
    }

   private:  // C++ Access Specifiers
    int32_t cost_;
};

class Rectangle : public Shape, public paintcost
{
   public:
    auto get_area() -> int32_t
    {
        return (width_ * height_);
    }
};

class triangle : public Shape
{
   public:
    auto get_area() -> int32_t
    {
        return (width_ * height_) / 2;
    }
};

auto main() -> int
{
    Rectangle rect;

    rect.set_width(5);
    rect.set_height(7);
    rect.set_cost(10, rect.get_area());

    triangle tri;

    tri.set_width(5);
    tri.set_height(7);

    // Print the area of the object.
    std::cout << "Total area: " << rect.get_area() << std::endl;
    std::cout << "Total area: " << tri.get_area() << std::endl;
    std::cout << "Total cost: " << rect.get_cost() << std::endl;

    return 0;
}