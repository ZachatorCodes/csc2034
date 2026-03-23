#pragma once
#include <string>

class Shape {
    
protected:
    std::string m_color{"Grey"};
    bool m_isFilled{false};

public:
    Shape(std::string color, bool filled);
    std::string getColor() {
        return m_color;
    }

    bool getIsFilled() {
        return m_isFilled;
    }

    friend std::ostream& operator<<(std::ostream& out, Shape& shape);

};