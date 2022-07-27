#ifndef _COLOR
#define _COLOR

class Color {
    public:
        Color(unsigned char red, unsigned char green, unsigned char blue);
        Color(const Color& b);
        unsigned char red() const;
        unsigned char green() const;
        unsigned char blue() const;
        static const Color RED, GREEN, BLUE, BLACK, WHITE;
        bool equal_to(const Color& other) const;
        void invert();
    private:
        unsigned char red_, green_, blue_;      
};

#endif