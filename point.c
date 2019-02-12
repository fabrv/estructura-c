#include <stdio.h>
struct Point{
  int x;
  int y;
};
int quadrant();

int main(){
  struct Point point;
  printf("X: ");
  scanf("%d", &point.x);  
  printf("Y: ");
  scanf("%d", &point.y);

  printf("Cuadrante %d", quadrant(point));

  return 0;
}

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