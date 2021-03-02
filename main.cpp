//------------------------------
//  DO NOT MODIFY NEXT LINE
//------------------------------
#include "catch.hpp"
//------------------------------

// Put the assignment code here

class Quaternion {
public:
  double w;
  double x;
  double y;
  double z;

  Quaternion (double a, double b, double c, double d){
    w =a;
    x = b;
    y = c;
    z = d;
  }
 
  
  bool operator == (const Quaternion p) const{
    if((w == p.w)&&(x == p.x)&&(y == p.y)&&(z ==p.z)){
      return true;
    }
    else
      return false;
  }

Quaternion operator+(const Quaternion q){
  Quaternion r{
    r.w = q.w + w,
    r.x = q.x + x,
    r.y = q.y + y,
    r.z = q.z + z,
  };
  return r;
  
}
Quaternion operator-(Quaternion q){
  Quaternion r{
    r.w = q.w - w,
    r.x = q.x - x,
    r.y = q.y - y,
    r.z = q.z - z,
  };
  return r;
}
Quaternion operator*(double value){
 Quaternion r{
   r.w = w * value,
   r.x = x * value,
   r.y = y * value,
   r.z = z * value,

  };
  return r;
  
}



};

//------------------------------
//   DO NOT MODIFY TEST CASES
//------------------------------
TEST_CASE( "Assignment" ) {
    SECTION( "q1" ) {
        Quaternion q{1.0, 2.0, 3.0, 4.0};
        Quaternion p{1.0, 2.0, 3.0, 4.0};
        REQUIRE( q == p );
    }
    SECTION( "q2" ) {
        Quaternion q{1.0, 2.0, 3.0, 4.0};
        Quaternion p{1.0, 2.0, 3.0, 4.0};
        Quaternion r{2.0, 4.0, 6.0, 8.0};
        REQUIRE( (q + p) == r );
    }
    SECTION( "q3" ) {
        Quaternion q{1.0, 2.0, 3.0, 4.0};
        Quaternion p{1.0, 2.0, 3.0, 4.0};
        Quaternion r{0.0, 0.0, 0.0, 0.0};
        REQUIRE( (q - p) == r );
    }
    SECTION( "q3" ) {
        Quaternion q{1.0, 2.0, 3.0, 4.0};
        Quaternion r{2.0, 4.0, 6.0, 8.0};
        REQUIRE( (q * 2.0) == r );
    }
}
//------------------------------
