#include <stdio.h>
#include <stdlib.h>
#include <GL/glut.h>
#include <math.h>

void clouds();
void ground();
void table();
void AddMenu();
void menu(int);
void ColorFade(float, float, float);
int colorX;
float alpha;

void display()
{
	glClear(GL_COLOR_BUFFER_BIT);

	clouds();
	ground();
	table();

	glFlush();
}

void clouds()
{
	float theta;

	glPushMatrix();
	glColor3f(0.85, 0.95, 1.0);
	glBegin(GL_POLYGON);
	for (int i = 0; i < 360; i++)
	{
		theta = i * 3.142 / 180;
		glVertex2f(150 * cos(theta) + 100, 30 * sin(theta) + 535);
	}
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glColor3f(0.89, 0.99, 1.0);
	glBegin(GL_POLYGON);
	for (int i = 0; i < 360; i++)
	{
		theta = i * 3.142 / 180;
		glVertex2f(100 * cos(theta) + 310, 15 * sin(theta) + 560);
	}
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glColor3f(0.89, 0.99, 1.0);
	glBegin(GL_POLYGON);
	for (int i = 0; i < 360; i++)
	{
		theta = i * 3.142 / 180;
		glVertex2f(90 * cos(theta) + 500, 15 * sin(theta) + 580);
	}
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glColor3f(0.85, 0.95, 1.0);
	glBegin(GL_POLYGON);
	for (int i = 0; i < 360; i++)
	{
		theta = i * 3.142 / 180;
		glVertex2f(170 * cos(theta) + 650, 35 * sin(theta) + 530);
	}
	glEnd();
	glPopMatrix();
}

void ground()
{
	glPushMatrix();
	glColor3f(0.6, 1.0, 0.1);
	glBegin(GL_POLYGON);
	glVertex2i(0, 0);
	glVertex2i(800, 0);
	glVertex2i(800, 170);
	glVertex2i(0, 150);
	glEnd();
	glPopMatrix();
}

void table()
{
	//Table legs
	glPushMatrix();
	glColor3f(0.6, 0.3, 0.1);
	glBegin(GL_POLYGON);
	glVertex2i(80, 150);
	glVertex2i(80, 80);
	glVertex2i(90, 80);
	glVertex2i(90, 150);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glColor3f(0.6, 0.3, 0.1);
	glBegin(GL_POLYGON);
	glVertex2i(30, 100);
	glVertex2i(30, 30);
	glVertex2i(40, 30);
	glVertex2i(40, 100);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glColor3f(0.6, 0.3, 0.1);
	glBegin(GL_POLYGON);
	glVertex2i(190, 75);
	glVertex2i(200, 5);
	glVertex2i(200, 5);
	glVertex2i(190, 75);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glColor3f(0.6, 0.3, 0.1);
	glBegin(GL_POLYGON);
	glVertex2i(240, 125);
	glVertex2i(250, 55);
	glVertex2i(250, 55);
	glVertex2i(240, 125);
	glEnd();
	glPopMatrix();

	//Table top
	glPushMatrix();
	glColor3f(0.5, 0.2, 0.1);
	glBegin(GL_POLYGON);
	glVertex2i(80, 150);
	glVertex2i(30, 100);
	glVertex2i(200, 75);
	glVertex2i(250, 125);
	glEnd();
	glPopMatrix();

	//Colors on the table
	float theta;

	//Red
	glPushMatrix();
	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_POLYGON);
	for (int i = 180; i < 360; i++)
	{
		theta = i * 3.142 / 180;
		glVertex2f(15 * cos(theta) + 85, 5 * sin(theta) + 135);
	}
	glEnd();
	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2i(70, 135);
	glVertex2i(100, 135);
	glVertex2i(85, 165);
	glEnd();
	glPopMatrix();

	//Green
	glPushMatrix();
	glColor3f(0.0, 1.0, 0.0);
	glBegin(GL_POLYGON);
	for (int i = 180; i < 360; i++)
	{
		theta = i * 3.142 / 180;
		glVertex2f(15 * cos(theta) + 95, 5 * sin(theta) + 100);
	}
	glEnd();
	glColor3f(0.0, 1.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2i(80, 100);
	glVertex2i(110, 100);
	glVertex2i(95, 130);
	glEnd();
	glPopMatrix();

	//Blue
	glPushMatrix();
	glColor3f(0.0, 0.0, 1.0);
	glBegin(GL_POLYGON);
	for (int i = 180; i < 360; i++)
	{
		theta = i * 3.142 / 180;
		glVertex2f(15 * cos(theta) + 140, 5 * sin(theta) + 110);
	}
	glEnd();
	glColor3f(0.0, 0.0, 1.0);
	glBegin(GL_POLYGON);
	glVertex2i(125, 110);
	glVertex2i(155, 110);
	glVertex2i(140, 140);
	glEnd();
	glPopMatrix();

	//Yellow
	glPushMatrix();
	glColor3f(1.0, 1.0, 0.0);
	glBegin(GL_POLYGON);
	for (int i = 180; i < 360; i++)
	{
		theta = i * 3.142 / 180;
		glVertex2f(15 * cos(theta) + 190, 5 * sin(theta) + 120);
	}
	glEnd();
	glColor3f(1.0, 1.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2i(175, 120);
	glVertex2i(205, 120);
	glVertex2i(190, 150);
	glEnd();
	glPopMatrix();

	//Pink
	glPushMatrix();
	glColor3f(1.0, 0.08, 0.57);
	glBegin(GL_POLYGON);
	for (int i = 180; i < 360; i++)
	{
		theta = i * 3.142 / 180;
		glVertex2f(15 * cos(theta) + 190, 5 * sin(theta) + 90);
	}
	glEnd();
	glColor3f(1.0, 0.08, 0.57);
	glBegin(GL_POLYGON);
	glVertex2i(175, 90);
	glVertex2i(205, 90);
	glVertex2i(190, 120);
	glEnd();
	glPopMatrix();

}

void mouse(int button, int state, int x, int y)
{
	colorX = x;
	if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		//colorX = x;
		AddMenu();
	}
	display();
}

void AddMenu()
{
	glutCreateMenu(menu);
	glutAddMenuEntry("Red", 0);
	glutAddMenuEntry("Green", 1);
	glutAddMenuEntry("Blue", 2);
	glutAddMenuEntry("Yellow", 3);
	glutAddMenuEntry("Pink", 4);
	glutAttachMenu(GLUT_RIGHT_BUTTON);
}

void menu(int action)
{
	//For different colors call ColorFade with RGB value of that color
	if (action == 0)
		ColorFade(1.0, 0.0, 0.0); //Red
	if (action == 1)
		ColorFade(0.0, 1.0, 0.0); //Green
	if (action == 2)
		ColorFade(0.0, 0.0, 1.0); //Blue
	if (action == 3)
		ColorFade(1.0, 1.0, 0.0); //Yellow
	if (action == 4)
		ColorFade(1.0, 0.08, 0.57); //Pink
}

void ColorFade(float r, float g, float b)
{
	float theta;
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	if (colorX <= 400)
	{
		for (alpha = 1; alpha > 0; alpha -= 0.001)
		{
			glPushMatrix();
			glColor4f(r, g, b, alpha);
			glBegin(GL_POLYGON);
			for (int i = 0; i < 360; i++)
			{
				theta = i * 3.142 / 180;
				glVertex2f(100 * cos(theta) + 600, 125 * sin(theta) + 200);
			}
			glEnd();
		}
	}
	else
	{
		for (alpha = 1; alpha > 0; alpha -= 0.001)
		{
			glPushMatrix();
			glColor4f(r, g, b, alpha);
			glBegin(GL_POLYGON);
			for (int i = 0; i < 360; i++)
			{
				theta = i * 3.142 / 180;
				glVertex2f(100 * cos(theta) + 200, 125 * sin(theta) + 200);
			}
			glEnd();
		}
	}
}

void myinit()
{
	glClearColor(0.35f, 0.5f, 1.0f, 1.0f);
	glColor3f(0.0, 0.0, 0.0);
	glPointSize(1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 799.0, 0.0, 599.0);
}

void main(int argc, char *argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutInitWindowSize(800.0, 600.0);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("Holi Celebration");
	glutDisplayFunc(display);
	glutMouseFunc(mouse);
	myinit();
	glutMainLoop();
}

