#include <string>
#include <Card.h>
#include <array>

class Player {
  public:
    Player(int a , string n) {
      Age = a ;
      name = n ;
    }
    void setPlayerSign() {
      
    }
    void move() {

    }
    bool isPas() {

    }
  private:
    std::string name ;
    int point ;
    const int Age ;
    std::array <Card*,10> cards ;
    std::array <Sign ,5>  signs ;
};