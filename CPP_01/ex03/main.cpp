#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main() {
  {
    Weapon w = Weapon("Stick");
    HumanA ivan("Ivan", w);
    ivan.attack();
    w.setType("Lollypop");
    ivan.attack();
  }
  {
    Weapon w = Weapon("Stick");
    HumanB ilia("Ilia");
    ilia.setWeapon(w);
    ilia.attack();
    w.setType("Lollypop");
    ilia.attack();
  }
  {
    HumanB ilon("Ilon");
    ilon.attack();
  }
  return 0;
}
