#include<windows.h>
#include<glut.h>
void drawLineHorizontalBottom(float x1, float y1, float x2, float y2)
{
	glBegin(GL_LINES);
	glVertex2f(x1, y1);
	glVertex2f(x2, y2);
	glEnd();
}

void drawVerticalRight(float x1, float y1, float x2, float y2)
{	
	glBegin(GL_LINES);
	glVertex2f(x1, y1);
	glVertex2f(x2, y2);
	glEnd();
}

void drawVerticalLeft(float x1, float y1, float x2, float y2)
{
	glBegin(GL_LINES);
	glVertex2f(x1, y1);
	glVertex2f(x2, y2);
	glEnd();
}

void skewLeft(float x1, float y1, float x2, float y2)
{
	glBegin(GL_LINES);
	glVertex2f(x1, y1);
	glVertex2f(x2, y2);
	glEnd();
}

void skewRight(float x1, float y1, float x2, float y2)
{
	glBegin(GL_LINES);
	glVertex2f(x1, y1);
	glVertex2f(x2, y2);
	glEnd();
}

void setColor(float red, float green, float blue)
{
	glColor3f(red, green, blue);
}

void userdraw (void)
{
	setColor(0,0,1);//warna biru
	drawLineHorizontalBottom(150,150,300,150);
	setColor(1,0,1);//warna biru
	drawVerticalRight(300,300,300,150);
	setColor(1,0,1);//warna biru
	drawVerticalLeft(150,150,150,300);
	setColor(1,1,0);//warna biru
	skewLeft(225,400,150,300);
	setColor(1,1,0);//warna biru
	skewRight(225,400,300,300);
}
void display (void)
{
	glClear ( GL_COLOR_BUFFER_BIT );
	userdraw();
	glFlush();
}
int main (int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(540, 380);
	glutInitWindowPosition(100, 150);
	glutCreateWindow("Membuat Garis/Line");
	glClearColor(1,1,1,0);
	gluOrtho2D(0,640,0,480);
	glutDisplayFunc(display);
	//fungsi event-driven lainnya jika digunakan dituliskan
	//disini
	glutMainLoop();
}
