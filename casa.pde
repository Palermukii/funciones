void setup() {
  size(800,800);

}
void draw(){
int x = width/2;
int y = height/2;
fill(255);
rect(x/1.5,y,200,100);
rect(x/1.5 + 200,y,100,100);
triangle(x/1.5,y,x/1.5 + 100,y - 75,x/1.5 + 200, y);
quad(x/1.5 + 100, y - 75, x/1.5 + 200, y, x/1.5 + 300, y, x/1.5 + 300, y -75);
fill(255,0,0);
ellipse(x,y,5,5);
}
