#include <stdio.h>
struct Point{
  int x;
  int y;
};
int quadrant();

int quadrant(struct Point point){
  if (point.x == 0 || point.y == 0){
    return 0;
  }else if (point.x > 0 && point.y > 0){
    return 1;
  }else if (point.x < 0 && point.y > 0){
    return 2;
  }else if (point.x < 0 && point.y < 0){
    return 3;
  }else if (point.x > 0 && point.y < 0){
    return 4;
  }
}