// here a man hoists the flag
#include<stdio.h>
#include<GL/glut.h>
#include<math.h>
#include <stdlib.h>
# define M_PI 3.1415926
void firstLook();
void circle1(GLfloat x, GLfloat y, GLfloat radius);
void mainMan();
void startHoist();
void comeBack();
float posX = 0.0, posY = 0.0, posZ = -1.0,pX=0.0,pY=0.0,pZ=-1.0,paX=0.0,paY=0.0,paZ=-1.0;
float sx = 0.0, sy = 0.0, hx = 0.0, hy = 0.0, ax = 0.0, ay = 0.0, bx = 0.0, by = 0.0,cx=0.0,cy=0.0,dx=0.0,dy=0.0,u=800;
float a = 0.0, b = 0.0, c = 0.0, d = 0.0, p = 0.0, q = 0.0, r = 0.0, s = 0.0,t=0.0,m=0.0,v=0.0,w=0.0;
GLboolean x = GL_FALSE;

void menu(int id)
{
	int n = 0;
	while (n < 1)
	{
		switch (id)
		{
		case 1:exit(0);
			break;
		case 2:firstLook();
			break;
		case 3: { comeBack();
			firstLook();}
			break;

		}
		n++;
	}
}
void circle1(GLfloat x, GLfloat y, GLfloat radius)
{
	float angle;
	glBegin(GL_POLYGON);
	for (int i = 0;i < 100;i++)
	{
		angle = i * 2 * (M_PI / 100);
		glVertex2f(x + (cos(angle) * radius), y + (sin(angle) * radius));
	}
	glEnd();
}
void DrawCircle(float cx, float cy, float r, int num_segments)
{
	glBegin(GL_LINE_LOOP);
	for (int ii = 0; ii < num_segments; ii++)
	{
		float theta = 2.0f * 3.1415926f * float(ii) / float(num_segments);//get the current angle

		float x = r * cosf(theta);//calculate the x component
		float y = r * sinf(theta);//calculate the y component

		glVertex2f(x + cx, y + cy);//output vertex

	}
	glEnd();
	glBegin(GL_LINES);
	for (int i = 0;i <=480;i+=45)
	{
		float angle;
		angle = i * 2 * (M_PI / 100);
		glVertex2f(cx + (cos(angle) * r), cy + (sin(angle) * r));
	}
	glEnd();
}
void firstLook()
{
	float angle;
	
	glClear(GL_COLOR_BUFFER_BIT);

	glColor3f(1.0, 0.5, 0.0);
	circle1(900.0, 850.0, 60.0);

	//for man
	glColor3f(0.8,0.8,0.74);
	circle1(900, 300, 25);
	glColor3f(0.0, 0.0, 0.0);
	circle1(890, 310, 2);
	glColor3f(0.0, 0.0, 0.0);
	circle1(910, 310, 2);
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_LINES);
	glVertex2f(893.0, 290.0);
	glVertex2f(907.0, 290.0);
	glEnd();
	glColor3f(0.8, 0.8, 0.74);
	glBegin(GL_POLYGON);
	glVertex2f(890, 275);
	glVertex2f(910,275);
	glVertex2f(910, 260);
	glVertex2f(890, 260);
	glEnd();
	glColor3f(0.55, 0.09, 0.09); //shirt_body
	glBegin(GL_POLYGON);
	glVertex2f(870, 260);
	glVertex2f(930, 260);
	glVertex2f(930, 200);
	glVertex2f(870, 200);
	glEnd();
	glColor3f(0.0,0.0,0.0);
	glRectf(875.0, 200.0,898.0,160.0);
	glColor3f(0.0, 0.0, 0.0);
	glRectf(902.0, 200.0,925, 160.0);
	glColor3f(0.8, 0.8, 0.74);
	glRectf(880,160,893,100);
	glColor3f(0.8, 0.8, 0.74);
	glRectf(907,160,920,100);
	glColor3f(0.55, 0.09, 0.09); //shirt_hand_left
	glRectf(855-a,260-b,870-c,230+d);
	glColor3f(0.55, 0.09, 0.09); //shirt_hand_right
	glRectf(930,260,945,230);
	glColor3f(0.8, 0.8, 0.74);

	glBegin(GL_POLYGON);
	glVertex2f(858 - p, 230 + q);
	glVertex2f(867 - r, 230 + s);
	glVertex2f(867 - t, 170 + m);
	glVertex2f(858 - v, 170 - w);
	glEnd();

	//glRectf(858,230,867,170);
	glColor3f(0.8, 0.8, 0.74);
	glRectf(933, 230, 942, 170);

	glColor3f(0.8, 0.8, 0.74);
	circle1(790, 300, 25);
	glColor3f(0.0, 0.0, 0.0);
	circle1(780, 310, 2);
	glColor3f(0.0, 0.0, 0.0);
	circle1(800, 310, 2);
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_LINES);
	glVertex2f(783.0, 290.0);
	glVertex2f(797.0, 290.0);
	glEnd();
	glColor3f(0.8, 0.8, 0.74);
	glBegin(GL_POLYGON);
	glVertex2f(780, 275);
	glVertex2f(800, 275);
	glVertex2f(800, 260);
	glVertex2f(780, 260);
	glEnd();
	glColor3f(0.55, 0.09, 0.09); //shirt_body
	glBegin(GL_POLYGON);
	glVertex2f(760, 260);
	glVertex2f(820, 260);
	glVertex2f(820, 200);
	glVertex2f(760, 200);
	glEnd();
	glColor3f(0.0, 0.0, 0.0);
	glRectf(765.0, 200.0, 788.0, 160.0);
	glColor3f(0.0, 0.0, 0.0);
	glRectf(792.0, 200.0, 815, 160.0);
	glColor3f(0.8, 0.8, 0.74);
	glRectf(770, 160, 783, 100);
	glColor3f(0.8, 0.8, 0.74);
	glRectf(797, 160, 810, 100);
	glColor3f(0.55, 0.09, 0.09); //shirt_hand_left
	glRectf(745-a, 260-b,760-c, 230+d);
	glColor3f(0.55, 0.09, 0.09); //shirt_hand_right
	glRectf(820, 260, 835, 230);
	glColor3f(0.8, 0.8, 0.74);
	

	glBegin(GL_POLYGON);
	glVertex2f(748 - p, 230 + q);
	glVertex2f(757 - r, 230 + s);
	glVertex2f(757 - t, 170 + m);
	glVertex2f(748 - v, 170 - w);
	glEnd();



	//glRectf(748, 230, 757, 170);
	glColor3f(0.8, 0.8, 0.74);
	glRectf(823, 230, 832, 170);



	//for the flag podium
	glColor3f(0.1, 0.0, 0.0);
	glRectf(50, 100, 200, 135);
	glColor3f(0.1, 0.0, 0.0);
	glRectf(70, 135, 180, 160);
	glColor3f(0.0, 0.0, 0.0);
	glRectf(120, 160, 130, 600);

	glPushMatrix();
	glTranslatef(pX, pY, pZ);
	glColor3f(1, 0.2, 0);
	circle1(125, 200, 10);
	glPopMatrix();

	glColor3f(0.0, 0.3, 0.0);
	glBegin(GL_LINE_STRIP);
	glVertex2f(130, 190);
	glVertex2f(135, 200);
	glVertex2f(155, 230);
	glVertex2f(160, 300);
	glVertex2f(155, 400);
	glVertex2f(150, 450);
	glVertex2f(145, 500);
	glVertex2f(135, 550);
	glVertex2f(125, 600);
	glEnd();

	//mainMan();
	glPushMatrix();
	glTranslatef(posX, posY, posZ);
	mainMan();
	glPopMatrix();


	glPushMatrix();
	glTranslatef(paX, paY, paZ);
	glColor3f(1.0, 0.2, 0.0);
	glRectf(130-u, 600, 200-u, 580);
	glColor3f(1.0, 1.0, 1.0);
	glRectf(130-u, 580, 200-u, 560);
	glColor3f(0.0, 1.0, 0.0);
	glRectf(130-u, 560, 200-u, 540);
	glColor3f(0.0, 0.0, 1.0);
	DrawCircle(165-u, 570, 10,24);
	glPopMatrix();
	
	
	

	//green_grass
	// glColor3f(0.0, 0.5, 0.0);
	glColor3f(0.0, 1.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2f(0.0, 0.0);
	glVertex2f(0.0, 100.0);
	glVertex2f(1000.0, 100.0);
	glVertex2f(1000.0, 0.0);
	glEnd();
	

	glFlush();
	glutSwapBuffers();
	
}




float move_unit = 5.0f,move_unit1=30.0f;
void startHoist()
{
	if (posX > -460)
	{
		posX -= move_unit;
	}
	else
	{
		sx = 15;
		sy = 15;
		hx = 0;
		hy = 30;

		Sleep(200);
		ax = 18;
		ay = 30;
		bx = 57;
		by = 10;
		cx = 8;
		cy = 84;
		dx = 59;
		dy = 30;
		
		while (pY < 380) {


			pY += move_unit1;
			
		}
		Sleep(800);

		pX = -800;
		paX = 0.0;
		u = 0.0;
		
		a = 15;
		b = 15;
		c = 0;
		d = 30;

		p = 18;
		q = 30;
		r = 27;
		s = 12;
		t = -13;
		m = 145;
		v = -12;
		w = -150;

		ax = 18;
		ay = 30;
		bx = -13;
		by = 145;
		cx = -12;
		cy = 150;
		dx = 27;
		dy = -12;

		
	}
	
}







void comeBack()
{
	posX = 0.0;
	sx = 0.0;
	sy = 0.0;
	hx = 0.0;
	hy = 0.0;
	ax = 0.0;
	ay = 0.0;
	bx = 0.0;
	by = 0.0;
	cx = 0.0;
	cy = 0.0;
	dx = 0.0;
	dy = 0.0;
	pY = 0.0;
	pX = 0.0;

	p = 0.0;
	q = 0.0;
	r = 0.0;
	s = 0.0;
	t = 0.0;
	m = 0.0;
	v = 0.0;
	w = 0.0;

	a = 0.0;
	b = 0.0;
	c = 0.0;
	d = 0.0;

	u = 800;

}
void mainMan()
{
	glColor3f(0.8, 0.8, 0.74); //the man who hoists the flag
	circle1(680, 300, 25);
	glColor3f(0.0, 0.0, 0.0);
	circle1(670, 310, 2);
	glColor3f(0.0, 0.0, 0.0);
	circle1(690, 310, 2);
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_LINES);
	glVertex2f(673.0, 290.0);
	glVertex2f(687.0, 290.0);
	glEnd();
	glColor3f(0.8, 0.8, 0.74);
	glBegin(GL_POLYGON);
	glVertex2f(670, 275);
	glVertex2f(690, 275);
	glVertex2f(690, 260);
	glVertex2f(670, 260);
	glEnd();
	glColor3f(0.55, 0.09, 0.09); //shirt_body
	glBegin(GL_POLYGON);
	glVertex2f(650, 260);
	glVertex2f(710, 260);
	glVertex2f(710, 200);
	glVertex2f(650, 200);
	glEnd();
	glColor3f(0.0, 0.0, 0.0);
	glRectf(655.0, 200.0, 678.0, 160.0);
	glColor3f(0.0, 0.0, 0.0);
	glRectf(682.0, 200.0, 705, 160.0);
	glColor3f(0.8, 0.8, 0.74);
	glRectf(660, 160, 673, 100);
	glColor3f(0.8, 0.8, 0.74);
	glRectf(687, 160, 700, 100);
	glColor3f(0.55, 0.09, 0.09); //shirt_hand_left
	glRectf(635-sx,260-sy,650-hx, hy+230);
	glColor3f(0.55, 0.09, 0.09); //shirt_hand_right
	glRectf(710, 260, 725, 230);
	glColor3f(0.8, 0.8, 0.74);
	glBegin(GL_POLYGON);
	glVertex2f(638-ax,230 +ay);
	glVertex2f(638-cx, 170+cy);
	glVertex2f(647-bx, 170+by);
	glVertex2f(647-dx, 230-dy);
	glEnd();
	glColor3f(0.8, 0.8, 0.74);
	glRectf(713, 230, 722, 170);
}


void keys(unsigned char key, int x, int y)
{
	if (key == 'f' || key == 'F')
	{
		comeBack();
		
	}
	else if (key == 's' || key == 'S')
	{
		startHoist();

	}
	
	glutPostRedisplay();
}


void init()
{
	glClearColor(0.0,1.0,1.0, 1.0);
	glColor3f(1.0, 1.0, 1.0);
	glPointSize(1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 999.0, 0.0, 999.0);
}

void main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(1000, 1000);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("Flag Hoisting");
	glutDisplayFunc(firstLook);
	glutKeyboardFunc(keys);

	glutCreateMenu(menu);
	glutAddMenuEntry("quit", 1);
	glutAddMenuEntry("Start Hoisting", 2);
	glutAddMenuEntry("First Look", 3);


	glutAttachMenu(GLUT_RIGHT_BUTTON);
	menu(GLUT_LEFT_BUTTON);
	init();
	glutMainLoop();
}
