
struct Vector2 {
    int x;
    int y;
    Vector2(int a, int b) : x(a), y(b) {}
    
    Vector2 operator+(const Vector2& v){
        return Vector2(x+v.x, y+v.y);
    }
    Vector2& operator+=(const Vector2& v){
        x+=v.x;
        y+=v.y;
        return *this;
    }
};


