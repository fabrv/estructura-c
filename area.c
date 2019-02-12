struct Square{
  int height;
  int width;
};

int main(){
  struct Square square;

  printf("Base: ");
  scanf("%d", &square.width);
  printf("Altura: ");
  scanf("%d", &square.height);

  printf("Area del cuadrado: %d", (square.width * square.height));  

  return 0;
}