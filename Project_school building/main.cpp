#include <GL/gl.h>
#include <GL/glut.h>
#include<windows.h>
#include<math.h>

# define PI           3.14159265358979323846

GLfloat i = 0.0f;
GLfloat j = 0.0f;
GLfloat z = 0.0f;
GLfloat position = 0.0f;
GLfloat speed = 8.0f;
GLfloat position_car = 0.0f;

void update(int value)
{

    if(position >1400.0)
        position = 10.0f;

    position -= speed; //position=position-speed;1-.1=.9

	glutPostRedisplay();


	glutTimerFunc(100, update, 0);
}


void update1(int value)
{

    if(position >1400.0)
        position = 0.0f;

    position += speed; //position=position-speed;1-.1=.9

	glutPostRedisplay();


	glutTimerFunc(100, update1, 0);
}
void night_background(void)
{

// Background
	glBegin(GL_POLYGON);
	glColor3ub( 38, 37, 83 ); // Sky Blue
	glVertex2f(0, 800);
	glVertex2f(1400, 800);
	glVertex2f(1400, 400);
	glVertex2f(0, 400);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub( 38, 37, 83 ); // Sky Blue
	glVertex2f(0, 400);
	glVertex2f(1400, 400);
	glColor3ub( 86, 85, 135 ); // Green Grass
	glVertex2f(1400, 125);
	glVertex2f(0, 125);
	glEnd();
}
void moon(void)
{
    int i;

	GLfloat x=1350.8f; GLfloat y=750.7f; GLfloat radius =100.5f;
	int triangleAmount = 50; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
}


//GLfloat speed_car = 8.0f;
void handleMouse(int button, int state, int x, int y) {
	if (button == GLUT_LEFT_BUTTON){
			speed += 0.1f;
			}
			if (button == GLUT_RIGHT_BUTTON)
	{speed -= 0.1f;
			}
	glutPostRedisplay();
	}











void SpecialInput(int key, int x, int y)
{
switch(key)
{case GLUT_KEY_UP:
speed=.5;
break;
case GLUT_KEY_DOWN:
speed=.2;
break;
case GLUT_KEY_LEFT:

break;
case GLUT_KEY_RIGHT:
break;}
glutPostRedisplay();
}


void small_wheel_one()
{
    int i;

	GLfloat x=130.0f; GLfloat y=50.0f; GLfloat radius =20.5f;
	int triangleAmount = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,155,100);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
}
void small_wheel_two()
{
    int i;

	GLfloat x=300.0f; GLfloat y=50.0f; GLfloat radius =20.5f;
	int triangleAmount = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,155,100);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
}
void car()
{

	glBegin(GL_QUADS);//car back part
      glColor3ub( 197, 199, 51 );
      glVertex2f(50.0f, 50.0f);
      glVertex2f( 120.0f, 50.0f);
      glVertex2f( 120.0f,  100.0f);
      glVertex2f(50.0f,  100.0f);
   glEnd();
   glBegin(GL_QUADS);//car middle part
     glColor3ub( 197, 199, 51 );
      glVertex2f(120.0f, 50.0f);
      glVertex2f( 320.0f, 50.0f);
      glVertex2f( 320.0f,  140.0f);
      glVertex2f(120.0f,  140.0f);
   glEnd();
   glBegin(GL_QUADS);//car front part (main)
      glColor3ub( 197, 199, 51 );
      glVertex2f(320.0f, 50.0f);
      glVertex2f( 380.0f, 50.0f);
      glVertex2f( 380.0f,  100.0f);
      glVertex2f(320.0f,  100.0f);
   glEnd();

   glBegin(GL_QUADS);//car back door
      glColor3ub( 135, 165, 68 );
      glVertex2f(130.0f, 60.0f);
      glVertex2f( 210.0f, 60.0f);
      glVertex2f( 210.0f,  130.0f);
      glVertex2f(130.0f,  130.0f);
   glEnd();
   glBegin(GL_QUADS);//car door front
      glColor3ub( 135, 165, 68 );
      glVertex2f(220.0f, 60.0f);
      glVertex2f( 310.0f, 60.0f);
      glVertex2f( 310.0f,  130.0f);
      glVertex2f(220.0f,  130.0f);
   glEnd();
   glLineWidth(3.0f);
   glBegin(GL_LINES);//car door divider
      glColor3f(0.0f, 0.0f, 1.0f);
      glVertex2f(132.0f,90.0f);
      glVertex2f( 210.999f,90.0f);
   glEnd();
   glLineWidth(3.0f);
   glBegin(GL_LINES);//car door divider
      glColor3f(0.0f, 0.0f, 1.0f);
      glVertex2f(222.1f,90.0f);
      glVertex2f( 309.9f,90.0f);
   glEnd();

   glBegin(GL_QUADS);//car side door glass 2nd
      glColor3ub( 98, 99, 96 );
      glVertex2f(131.5f,90.0f);
      glVertex2f( 210.0f,90.0f);
      glVertex2f( 210.0f, 130.0f);
      glVertex2f(131.5f,  130.0f);
   glEnd();

   glBegin(GL_QUADS);//car door glass side 1st
      glColor3ub( 98, 99, 96 );
      glVertex2f(220.0f,90.0f);
      glVertex2f(309.9f,90.0f);
      glVertex2f(309.9f,130.0f);
      glVertex2f( 220.0f,130.0f);
   glEnd();

   glBegin(GL_TRIANGLES);//car front mirror
      glColor3ub( 98, 99, 96 );
      glVertex2f(320.0f,100.0f);
      glVertex2f(380.0f,100.0f);
      glVertex2f(320.0f,140.0f);
   glEnd();

   glLineWidth(3.0f);
   glBegin(GL_LINES);//door handle back
      glColor3ub( 188, 134, 99 );
      glVertex2f(145.0f,100.0f);
      glVertex2f(154.0f,100.0f);
   glEnd();

   glLineWidth(3.0f);
   glBegin(GL_LINES);//door handle front
      glColor3ub(188, 134, 99);
      glVertex2f(245.0f,100.0f);
      glVertex2f(254.0f,100.0f);
   glEnd();

small_wheel_one();
small_wheel_two();

}
void small_cloud()
{
    int i;

	GLfloat x=0.0f; GLfloat y=0.0f; GLfloat radius =70.5f;
	int triangleAmount = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(246,246,241);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
}

void big_cloud()
{
    int i;

	GLfloat x=0.0f; GLfloat y=0.0f; GLfloat radius =100.5f;
	int triangleAmount = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(246,246,241);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
}

void update_car(int value)
{

    if(position_car >1400.0)
        position_car = 10.0f;

    position_car += speed; //position=position-speed;1-.1=.9

	glutPostRedisplay();


	glutTimerFunc(100, update_car, 0);
}


void update_cloud(int value)
{

    if(position >1400.0)
        position = 0.0f;

    position += speed; //position=position-speed;1-.1=.9

	glutPostRedisplay();


	glutTimerFunc(100, update_cloud, 0);
}


void Idle()
{
glutPostRedisplay();//// marks the current window as needing to be redisplayed
}

void clocks()
{
glClearColor(0.0f, 0.0f, 0.0f, 0.0f); // Black and opaque
//glClear(GL_COLOR_BUFFER_BIT);

glPushMatrix(); //glPushMatrix copies the top matrix and pushes it onto the stack, while glPopMatrix pops the top matrix off the stack

glRotatef(i,0.0,0.0,0.1);//i=how many degree you want to rotate around an axis
glTranslatef(700.0,500.0,0);
glLineWidth(4.0f);
glBegin(GL_LINES);
glColor3f(1.0f, 0.0f, 0.0f);
glVertex2f(0.0f, 0.0f);
glVertex2f(0.0f, 60.0f);
glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(700.0,500.0,0);
glRotatef(j,0,0.0,0.1);
glLineWidth(3.0f);
glBegin(GL_LINES);
glColor3f(1.0f, 1.0f, 0.0f);
glVertex2f(0.0f, 0.0f);
glVertex2f(0.0f, 70.0f);
glEnd();
glPopMatrix();


glPushMatrix();
glTranslatef(700.0,500.0,0);
glRotatef(z,0,0.0,1.0);
glLineWidth(2.0f);
glBegin(GL_LINES);
glColor3f(0.0f, 0.0f, 1.0f);
glVertex2f(0.0f, 0.0f);
glVertex2f(0.0f, 80.0f);
glEnd();
glPopMatrix();

i-=0.00001f; //red_hour
j-=0.001f; //yellow_min
z-=0.01f;//blue_sec


glutSwapBuffers();



}

void clock_circle(void)
{
    int i;

	GLfloat x=700.0f; GLfloat y=500.0f; GLfloat radius =100.0f;
	int triangleAmount = 50; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;
//glColor3ub(1, 0, 0);
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(1, 0, 0);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}

	glEnd();
}

void left_wing(void){
// Left Wing
	glBegin(GL_POLYGON);
	glColor3ub(0, 30, 60);
	glVertex2f(500, 125);
	glVertex2f(550, 125);
	glVertex2f(550, 598);
	glVertex2f(500, 598);
	glEnd();

	// Left Building
	glBegin(GL_POLYGON);
	glColor3ub(30, 120, 182);
	glVertex2f(200, 184);
	glColor3ub(4, 36, 86);
	glVertex2f(500, 125);
	glColor3ub(0, 22, 52);
	glVertex2f(500, 598);
	glColor3ub(2, 36, 80);
	glVertex2f(200, 539);
	glEnd();

	// Left Building
	glBegin(GL_LINE_LOOP);
	glColor3ub(0, 30, 60);
	glVertex2f(200, 184);
	glVertex2f(500, 125);
	glVertex2f(500, 598);
	glVertex2f(200, 539);
	glEnd();

	// Windows Edges
	glBegin(GL_LINES);
	glColor3ub(0, 30, 60);
	glVertex2f(500, 125);
	glVertex2f(500, 598);

	glVertex2f(400, 144);
	glVertex2f(400, 576);

	glVertex2f(300, 164);
	glVertex2f(300, 556);

	glVertex2f(200, 184);
	glVertex2f(200, 539);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(40, 40, 40);
	glVertex2f(0, 75);
	glVertex2f(1400, 75);
	glVertex2f(1400, 125);
	glVertex2f(0, 125);
	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);
	glVertex2f(0, 100);
	glVertex2f(100, 100);

	glVertex2f(120, 100);
	glVertex2f(220, 100);

	glVertex2f(240, 100);
	glVertex2f(340, 100);

	glVertex2f(360, 100);
	glVertex2f(460, 100);

	glVertex2f(480, 100);
  glVertex2f(580, 100);

	glVertex2f(600, 100);
	glVertex2f(700, 100);

	glVertex2f(720, 100);
	glVertex2f(820, 100);

	glVertex2f(840, 100);
	glVertex2f(940, 100);

	glVertex2f(960, 100);
	glVertex2f(1060, 100);

	glVertex2f(1080, 100);
	glVertex2f(1180, 100);

	glVertex2f(1200, 100);
	glVertex2f(1300, 100);

	glVertex2f(1320, 100);
	glVertex2f(1420, 100);

	glEnd();

	// Left Light Pole
	glLineWidth(4);
	glBegin(GL_LINES);
	glColor3ub(200, 200, 200);
	glVertex2f(350, 175);
	glVertex2f(350, 300);
	glEnd();
	glLineWidth(1);

	// Right Light Pole
	glLineWidth(4);
	glBegin(GL_LINES);
	glColor3ub(200, 200, 200);
	glVertex2f(1050, 175);
	glVertex2f(1050, 300);
	glEnd();

}
void Right_Wing(void){
    // Right Wing
	glBegin(GL_POLYGON);
	glColor3ub(0, 30, 60);
	glVertex2f(850, 125);
	glVertex2f(900, 125);
	glVertex2f(900, 598);
	glVertex2f(850, 598);
	glEnd();

	// Right Building
	glBegin(GL_POLYGON);
	glColor3ub(4, 36, 86);
	glVertex2f(900, 125);
	glColor3ub(30, 120, 182);
	glVertex2f(1200, 184);
	glColor3ub(2, 36, 80);
	glVertex2f(1200, 539);
	glColor3ub(0, 22, 52);
	glVertex2f(900, 598);
	glEnd();

	// Right Building
	glBegin(GL_LINE_LOOP);
	glColor3ub(0, 30, 60);
	glVertex2f(900, 125);
	glVertex2f(1200, 184);
	glVertex2f(1200, 539);
	glVertex2f(900, 598);
	glEnd();

	// Windows Edges
	glBegin(GL_LINES);
	glColor3ub(0, 30, 60);
	glVertex2f(900, 125);
	glVertex2f(900, 598);

	glVertex2f(1000, 144);
	glVertex2f(1000, 576);

	glVertex2f(1100, 164);
	glVertex2f(1100, 556);

	glVertex2f(1200, 184);
	glVertex2f(1200, 539);
	glEnd();


}
void Front_Facing_Building(void)
{
    // Front Facing Building
	glBegin(GL_POLYGON);
	glColor3ub(30, 120, 182);
	glVertex2f(550, 125);
	glColor3ub(4, 36, 86);
	glVertex2f(850, 125);
	glColor3ub(0, 22, 52);
	glVertex2f(850, 650);
	glColor3ub(2, 36, 80);
	glVertex2f(550, 650);
	glEnd();

	// Front Facing Building Mesh
	glBegin(GL_LINES);
	glColor3ub(0, 30, 60);

	// Vertical Lines - 4
	glVertex2f(550, 650);
	glVertex2f(550, 125);

	glVertex2f(625, 650);
	glVertex2f(625, 125);

	glVertex2f(700, 650);
	glVertex2f(700, 125);

	glVertex2f(775, 650);
	glVertex2f(775, 125);

	glVertex2f(850, 650);
	glVertex2f(850, 125);

	// Horizontal Lines - 10
	glVertex2f(550, 125);
	glVertex2f(850, 125);

	glVertex2f(550, 177.5);
	glVertex2f(850, 177.5);

	glVertex2f(550, 230);
	glVertex2f(850, 230);

	glVertex2f(550, 282.5);
	glVertex2f(850, 282.5);

	glVertex2f(550, 335);
	glVertex2f(850, 335);

	glVertex2f(550, 387.5);
	glVertex2f(850, 387.5);

	glVertex2f(550, 440);
	glVertex2f(850, 440);

	glVertex2f(550, 492.5);
	glVertex2f(850, 492.5);

	glVertex2f(550, 545);
	glVertex2f(850, 545);

	glVertex2f(550, 598);
	glVertex2f(850, 598);

	glVertex2f(550, 650);
	glVertex2f(850, 650);
	glEnd();

	// Door
	glBegin(GL_POLYGON);
	glColor3ub(23, 99, 152);
	glVertex2f(626, 125);
	glColor3ub(11, 57, 110);
	glVertex2f(774, 125);
	glColor3ub(8, 49, 92);
	glVertex2f(774, 282);
	glColor3ub(21, 99, 144);
	glVertex2f(626, 282);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(0, 30, 60);
	glVertex2f(700, 282);
	glVertex2f(700, 125);
	glEnd();


}
void background(void)
{

// Background
	glBegin(GL_POLYGON);
	glColor3ub(12, 172, 232); // Sky Blue
	glVertex2f(0, 800);
	glVertex2f(1400, 800);
	glVertex2f(1400, 400);
	glVertex2f(0, 400);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(12, 172, 232); // Sky Blue
	glVertex2f(0, 400);
	glVertex2f(1400, 400);
	glColor3ub(82, 163, 42); // Green Grass
	glVertex2f(1400, 125);
	glVertex2f(0, 125);
	glEnd();
}

void sun(void)
{
    int i;

	GLfloat x=1350.8f; GLfloat y=750.7f; GLfloat radius =100.5f;
	int triangleAmount = 50; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(251, 255, 0);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
}

void moving_car()
{
    glPushMatrix();
	glTranslatef(position_car,50,0);
	car();
	glPopMatrix();
}

void moving_cloud()
{

	glPushMatrix();
	glTranslatef(position,700,0);
	big_cloud();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(position+80,700,0);
	small_cloud();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(position-80,700,0);
	small_cloud();
	glPopMatrix();

}

//glutTimerFunc(10,demo_late_night,0);
void rain(void)
{
       glLineWidth(4.0f);
   glBegin(GL_LINES);
   glColor3f(1.0f, 1.0f, 1.0f);
   glVertex2f(20.0f, 0.0f);
   glVertex2f(20.0f, 60.0f);
   glEnd();

   glLineWidth(4.0f);
   glBegin(GL_LINES);
   glColor3f(1.0f, 1.0f, 1.0f);
   glVertex2f(100.0f, 0.0f);
   glVertex2f(100.0f, 60.0f);
   glEnd();
   glLineWidth(4.0f);
   glBegin(GL_LINES);
   glColor3f(1.0f, 1.0f, 1.0f);
   glVertex2f(200.0f, 0.0f);
   glVertex2f(200.0f, 60.0f);
   glEnd();

   glLineWidth(4.0f);
   glBegin(GL_LINES);
   glColor3f(1.0f, 1.0f, 1.0f);
   glVertex2f(300.0f, 0.0f);
   glVertex2f(300.0f, 60.0f);
   glEnd();

   glLineWidth(4.0f);
   glBegin(GL_LINES);
   glColor3f(1.0f, 1.0f, 1.0f);
   glVertex2f(400.0f, 0.0f);
   glVertex2f(400.0f, 60.0f);
   glEnd();

   glLineWidth(4.0f);
   glBegin(GL_LINES);
   glColor3f(1.0f, 1.0f, 1.0f);
   glVertex2f(500.0f, 0.0f);
   glVertex2f(500.0f, 60.0f);
   glEnd();

   glLineWidth(4.0f);
   glBegin(GL_LINES);
   glColor3f(1.0f, 1.0f, 1.0f);
   glVertex2f(600.0f, 0.0f);
   glVertex2f(600.0f, 60.0f);
   glEnd();

   glLineWidth(4.0f);
   glBegin(GL_LINES);
   glColor3f(1.0f, 1.0f, 1.0f);
   glVertex2f(700.0f, 0.0f);
   glVertex2f(700.0f, 60.0f);
   glEnd();

   glLineWidth(4.0f);
   glBegin(GL_LINES);
   glColor3f(1.0f, 1.0f, 1.0f);
   glVertex2f(800.0f, 0.0f);
   glVertex2f(800.0f, 60.0f);
   glEnd();

   glLineWidth(4.0f);
   glBegin(GL_LINES);
   glColor3f(1.0f, 1.0f, 1.0f);
   glVertex2f(900.0f, 0.0f);
   glVertex2f(900.0f, 60.0f);
   glEnd();

   glLineWidth(4.0f);
   glBegin(GL_LINES);
   glColor3f(1.0f, 1.0f, 1.0f);
   glVertex2f(1000.0f, 0.0f);
   glVertex2f(1000.0f, 60.0f);
   glEnd();

   glLineWidth(4.0f);
   glBegin(GL_LINES);
   glColor3f(1.0f, 1.0f, 1.0f);
   glVertex2f(1100.0f, 0.0f);
   glVertex2f(1100.0f, 60.0f);
   glEnd();

glLineWidth(4.0f);
   glBegin(GL_LINES);
   glColor3f(1.0f, 1.0f, 1.0f);
   glVertex2f(1200.0f, 0.0f);
   glVertex2f(1200.0f, 60.0f);
   glEnd();

   glLineWidth(4.0f);
   glBegin(GL_LINES);
   glColor3f(1.0f, 1.0f, 1.0f);
   glVertex2f(1300.0f, 0.0f);
   glVertex2f(1300.0f, 60.0f);
   glEnd();
}
void moving_rain()
{
    glPushMatrix();
	glTranslatef(800,position,0);
	rain();
	glPopMatrix();
}

void rain_display(void)
{
   background();
   Front_Facing_Building();
   Right_Wing();
   left_wing();
   sun();
   clock_circle();
   clocks();
   moving_cloud();
   moving_car();
   moving_rain();


}
void late_night(void)
{
   night_background();
   Front_Facing_Building();
   Right_Wing();
   left_wing();
   moon();
   clock_circle();
   clocks();

//   glutTimerFunc(50,demo_late_night,0);
   glFlush();
}

void demo_late_night(int val) {

 glutDisplayFunc(late_night);


}


void night(void)
{
   night_background();
   Front_Facing_Building();
   Right_Wing();
   left_wing();
   moon();
   clock_circle();
   clocks();
   moving_car();
   glutTimerFunc(1000,demo_late_night,0);
   glFlush ();
}

void night_demo(int val){

 glutDisplayFunc(night);


}
void handleKeypress(unsigned char key, int x, int y) {
	switch (key) {
case 'p':
    speed = 0.0f;
    break;
case 'r':
    speed = 0.1f;
    break;
glutPostRedisplay();
	}
}
void day(void)
{
   background();
   Front_Facing_Building();
   Right_Wing();
   left_wing();
   sun();
   clock_circle();
   clocks();
   moving_cloud();
   moving_car();

   //moving_rain();


   glutTimerFunc(1000,night_demo,0);
   glFlush ();
   //glLineWidth(3.0f);
}

void init (void)
{
/* select clearing (background) color */
glClearColor(0.05, 0.05, 0.05, 1.0);
glClear(GL_COLOR_BUFFER_BIT);
/* initialize viewing values */
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(0,1400,0,800, -10.0, 10.0);
}

int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (1000, 600);
//glutInitWindowPosition (100, 100);
glutInitWindowPosition (0,0);
glutCreateWindow ("my school building");

glutDisplayFunc(day);
init ();
glutKeyboardFunc(handleKeypress);
glutMouseFunc(handleMouse);
glutSpecialFunc(SpecialInput);

glutTimerFunc(100, update_cloud, 0);
glutTimerFunc(100, update_car, 0);

glutTimerFunc(100, update, 0);
glutTimerFunc(100, update1, 0);
//initGL();
glutIdleFunc(Idle);
glutMainLoop();
return 0; /* ISO C requires main to return int. */
}
