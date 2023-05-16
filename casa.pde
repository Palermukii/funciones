void setup() {
  size(800,800);

}
void casita(){
  int x = height/2;
  int y = width/2;
rect(x-125,y,100,100);
rect(x-25,y,150,100);
triangle(x-125,y,x-25,y,x-75,y-100);
quad(x+125,y,x+75,y-100,x-75,y-100,x-25,y);
}
void draw(){
casita();
}
