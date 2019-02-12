struct Square{
  int height;
  int width;
};
int area();
int area(struct Square square){
  return square.width * square.height;
}