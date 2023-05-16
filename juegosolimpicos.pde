void setup() {
  size(800,800);

}
void casita(){
  int x = height/2;
  int y = width/2;
  noFill();
ellipse(x-20,y,100,100);
ellipse(x-50,y-50,100,100);
ellipse(x-80,y,100,100);
}
void draw(){
casita();
}
