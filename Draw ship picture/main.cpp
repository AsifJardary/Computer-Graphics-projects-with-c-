#include <GL/gl.h>
#include <GL/glut.h>
#include<math.h>

void display(void)
{
/* clear all pixels */
glClear (GL_COLOR_BUFFER_BIT);
/* draw white polygon (rectangle) with corners at
* (0.25, 0.25, 0.0) and (0.75, 0.75, 0.0)
*/


glColor4f(1.0f, 0.5f, 0.0f, 0.0f);


	glBegin(GL_QUADS); //Begin quadrilateral coordinates


	glColor3f(0.0f,0.0f,0.0f);//gray

	glVertex3f(0.70f, 0.50f, 0.0f);
	glVertex3f(1.50f, 0.50f, 0.0f);
	glVertex3f(1.55f, 0.7f, 0.0f);
	glVertex3f(0.50f, 0.70f, 0.0f);

	glColor3f(0.0f,0.0f,0.0f);//gray

	glVertex3f(0.70f, 0.50f, 0.0f);
	glVertex3f(1.50f, 0.50f, 0.0f);
	glVertex3f(1.49f, 0.48f, 0.0f);
	glVertex3f(0.67f, 0.48f, 0.0f);

	glColor3f(1.0f,1.0f,1.0f);//gray

	glVertex3f(0.10f, 0.620f, 0.0f);
	glVertex3f(1.59f, 0.62f, 0.0f);
	glVertex3f(1.59f, 0.63f, 0.0f);
	glVertex3f(0.1f, 0.63f, 0.0f);




    glColor3f(0.0f,0.0f,0.0f);//gray

	glVertex3f(0.60f, 0.70f, 0.0f);
	glVertex3f(1.0f, 0.70f, 0.0f);
	glVertex3f(1.0f, 0.90f, 0.0f);
	glVertex3f(0.60f, 0.90f, 0.0f);


	glColor3f(0.0f,0.0f,0.0f);//gray

	glVertex3f(1.02f, 0.70f, 0.0f);
	glVertex3f(1.1f, 0.70f, 0.0f);
	glVertex3f(1.1f, 0.95f, 0.0f);
	glVertex3f(1.02f, 0.95f, 0.0f);

	glColor3f(0.0f,0.0f,0.0f);//gray

	glVertex3f(1.12f, 0.70f, 0.0f);
	glVertex3f(1.38f, 0.70f, 0.0f);
	glVertex3f(1.38f, 0.90f, 0.0f);
	glVertex3f(1.12f, 0.90f, 0.0f);

	glColor3f(0.0f,0.0f,0.0f);//last pillar

	glVertex3f(1.4f, 0.70f, 0.0f);
	glVertex3f(1.43f, 0.70f, 0.0f);
	glVertex3f(1.43f, 0.95f, 0.0f);
	glVertex3f(1.4f, 0.95f, 0.0f);

	glColor3f(0.0f,0.0f,0.0f);//gray

	glVertex3f(1.45f, 0.70f, 0.0f);
	glVertex3f(1.52f, 0.70f, 0.0f);
	glVertex3f(1.52f, 0.90f, 0.0f);
	glVertex3f(1.45f, 0.90f, 0.0f);

	glColor3f(1.0f,1.0f,1.0f);//gray

	glVertex3f(0.6f, 0.70f, 0.0f);
	glVertex3f(1.55f, 0.70f, 0.0f);
	glVertex3f(1.55f, 0.69f, 0.0f);
	glVertex3f(0.6f, 0.69f, 0.0f);

	glColor3f(1.0f,1.0f,1.0f);//first white stripe at .73 point

	glVertex3f(0.6f, 0.73f, 0.0f);
	glVertex3f(1.0f, 0.73f, 0.0f);
	glVertex3f(1.0f, 0.736f, 0.0f);
	glVertex3f(0.6f, 0.736f, 0.0f);

	glColor3f(1.0f,1.0f,1.0f);//first white stripe at .73 point

	glVertex3f(0.6f, 0.76f, 0.0f);
	glVertex3f(1.0f, 0.76f, 0.0f);
	glVertex3f(1.0f, 0.766f, 0.0f);
	glVertex3f(0.6f, 0.766f, 0.0f);


	glColor3f(1.0f,1.0f,1.0f);//first white stripe at .73 point

	glVertex3f(0.6f, 0.79f, 0.0f);
	glVertex3f(1.0f, 0.79f, 0.0f);
	glVertex3f(1.0f, 0.796f, 0.0f);
	glVertex3f(0.6f, 0.796f, 0.0f);

	glColor3f(1.0f,1.0f,1.0f);//first white stripe at .73 point

	glVertex3f(0.6f, 0.82f, 0.0f);
	glVertex3f(1.0f, 0.82f, 0.0f);
	glVertex3f(1.0f, 0.826f, 0.0f);
	glVertex3f(0.6f, 0.826f, 0.0f);

	glColor3f(1.0f,1.0f,1.0f);//first white stripe at .73 point

	glVertex3f(0.6f, 0.85f, 0.0f);
	glVertex3f(1.0f, 0.85f, 0.0f);
	glVertex3f(1.0f, 0.856f, 0.0f);
	glVertex3f(0.6f, 0.856f, 0.0f);


    glColor3f(1.0f,1.0f,1.0f);//first white stripe at .73 point

	glVertex3f(0.73f, 0.7f, 0.0f);
	glVertex3f(0.736f, 0.7f, 0.0f);
	glVertex3f(0.736f, 0.9f, 0.0f);
	glVertex3f(0.73f, 0.9f, 0.0f);

	glColor3f(1.0f,1.0f,1.0f);//first white stripe at .73 point

	glVertex3f(0.86f, 0.7f, 0.0f);
	glVertex3f(0.866f, 0.7f, 0.0f);
	glVertex3f(0.866f, 0.9f, 0.0f);
	glVertex3f(0.86f, 0.9f, 0.0f);


	glColor3f(1.0f,1.0f,1.0f);//first white stripe at .73 point

	glVertex3f(1.12f, 0.75f, 0.0f);
	glVertex3f(1.38f, 0.75f, 0.0f);
	glVertex3f(1.38f, 0.756f, 0.0f);
	glVertex3f(1.12f, 0.756f, 0.0f);

	glColor3f(1.0f,1.0f,1.0f);//first white stripe at .73 point

	glVertex3f(1.12f, 0.82f, 0.0f);
	glVertex3f(1.38f, 0.82f, 0.0f);
	glVertex3f(1.38f, 0.826f, 0.0f);
	glVertex3f(1.12f, 0.826f, 0.0f);


	glColor3f(1.0f,1.0f,1.0f);//first white stripe at .73 point

	glVertex3f(1.12f, 0.82f, 0.0f);
	glVertex3f(1.38f, 0.82f, 0.0f);
	glVertex3f(1.38f, 0.826f, 0.0f);
	glVertex3f(1.12f, 0.826f, 0.0f);

	glColor3f(1.0f,1.0f,1.0f);//gray

	glVertex3f(1.45f, 0.73f, 0.0f);
	glVertex3f(1.52f, 0.73f, 0.0f);
	glVertex3f(1.52f, 0.736f, 0.0f);
	glVertex3f(1.45f, 0.736f, 0.0f);

	glColor3f(1.0f,1.0f,1.0f);//gray

	glVertex3f(1.45f, 0.76f, 0.0f);
	glVertex3f(1.52f, 0.76f, 0.0f);
	glVertex3f(1.52f, 0.766f, 0.0f);
	glVertex3f(1.45f, 0.766f, 0.0f);glColor3f(1.0f,1.0f,1.0f);//gray

	glVertex3f(1.45f, 0.79f, 0.0f);
	glVertex3f(1.52f, 0.79f, 0.0f);
	glVertex3f(1.52f, 0.796f, 0.0f);
	glVertex3f(1.45f, 0.796f, 0.0f);

	glColor3f(1.0f,1.0f,1.0f);//gray

	glVertex3f(1.45f, 0.82f, 0.0f);
	glVertex3f(1.52f, 0.82f, 0.0f);
	glVertex3f(1.52f, 0.826f, 0.0f);
	glVertex3f(1.45f, 0.826f, 0.0f);

	glColor3f(1.0f,1.0f,1.0f);//gray

	glVertex3f(1.45f, 0.85f, 0.0f);
	glVertex3f(1.52f, 0.85f, 0.0f);
	glVertex3f(1.52f, 0.856f, 0.0f);
	glVertex3f(1.45f, 0.856f, 0.0f);
	//Trapezoid
  /*  glColor3f(0.5294f,0.6392f,0.643f);//gray

	glVertex3f(0.50f, 0.50f, 0.0f);
	glVertex3f(0.70f, 0.50f, 0.0f);
	glVertex3f(0.70f, 1.02f, 0.0f);
	glVertex3f(0.50f, 1.00f, 0.0f);

	glColor3f(0.365f, 0.678f, 0.8863f);//light blue

	glVertex3f(0.51f, 0.51f, 0.0f);
	glVertex3f(0.65f, 0.51f, 0.0f);
	glVertex3f(0.65f, 1.005f, 0.0f);
	glVertex3f(0.51f, 0.99f, 0.0f);

	glColor3f(0.365f, 0.678f, 0.8863f);//gray

	glVertex3f(0.65f, 0.51f, 0.0f);
	glVertex3f(0.69f, 0.51f, 0.0f);
	glVertex3f(0.69f, 0.90f, 0.0f);
	glVertex3f(0.65f, 0.90f, 0.0f);

	glColor3f(0.5294f,0.6392f,0.643f);//gray

	glVertex3f(0.7f, 0.5f, 0.0f);
	glVertex3f(1.5f, 0.5f, 0.0f);
	glVertex3f(1.5f, 1.02f, 0.0f);
	glVertex3f(0.7f, 1.02f, 0.0f);

	glColor3f(0.365f, 0.678f, 0.8863f);//light blue

	glVertex3f(0.71f, 0.51f, 0.0f);
	glVertex3f(1.45f, 0.51f, 0.0f);
	glVertex3f(1.45f, 0.70f, 0.0f);
	glVertex3f(0.71f, 0.70f, 0.0f);

	glColor3f(0.365f, 0.678f, 0.8863f);//light blue

	glVertex3f(0.71f, 0.72f, 0.0f);
	glVertex3f(1.45f, 0.72f, 0.0f);
	glVertex3f(1.45f, 0.88f, 0.0f);
	glVertex3f(0.71f, 0.88f, 0.0f);

	glColor3f(0.365f, 0.678f, 0.8863f);//light blue

	glVertex3f(0.75f, 0.90f, 0.0f);
	glVertex3f(1.45f, 0.90f, 0.0f);
	glVertex3f(1.45f, 1.01f, 0.0f);
	glVertex3f(0.75f, 1.01f, 0.0f);

	glColor3f(0.682f, 0.714f, 0.749f);

	glVertex3f(1.5f, 0.5f, 0.0f);
	glVertex3f(1.65f, 0.50f, 0.0f);
	glVertex3f(1.65f, 0.60f, 0.0f);
	glVertex3f(1.5f, 0.60f, 0.0f);

	glColor3f(0.514f, 0.569f, 0.572f);//Deep gray

	glVertex3f(1.5f, 0.6f, 0.0f);
	glVertex3f(1.6f, 0.6f, 0.0f);
	glVertex3f(1.6f, 1.1f, 0.0f);
	glVertex3f(1.5f, 1.1f, 0.0f);

	glColor3f(0.2039f, 0.2863f, 0.2686f);

	glVertex3f(1.51f, 0.61f, 0.0f);
	glVertex3f(1.59f, 0.61f, 0.0f);
	glVertex3f(1.59f, 0.70f, 0.0f);
	glVertex3f(1.51f, 0.70f, 0.0f);

	glColor3f(0.2039f, 0.2863f, 0.2686f);

	glVertex3f(1.51f, 0.71f, 0.0f);
	glVertex3f(1.59f, 0.71f, 0.0f);
	glVertex3f(1.59f, 0.79f, 0.0f);
	glVertex3f(1.51f, 0.79f, 0.0f);

	glColor3f(0.2039f, 0.2863f, 0.2686f);

	glVertex3f(1.51f, 0.8f, 0.0f);
	glVertex3f(1.59f, 0.8f, 0.0f);
	glVertex3f(1.59f, 0.89f, 0.0f);
	glVertex3f(1.51f, 0.89f, 0.0f);

	glColor3f(0.2039f, 0.2863f, 0.2686f);

	glVertex3f(1.51f, 0.9f, 0.0f);
	glVertex3f(1.59f, 0.9f, 0.0f);
	glVertex3f(1.59f, 0.99f, 0.0f);
	glVertex3f(1.51f, 0.99f, 0.0f);

	glColor3f(0.2039f, 0.2863f, 0.2686f);

	glVertex3f(1.51f, 1.0f, 0.0f);
	glVertex3f(1.59f, 1.0f, 0.0f);
	glVertex3f(1.59f, 1.09f, 0.0f);
	glVertex3f(1.51f, 1.09f, 0.0f);

	glColor3f(0.521f, 0.572f, 0.6196f);

	glVertex3f(0.7f, 0.5f, 0.0f);
	glVertex3f(0.5f, 0.0f, 0.0f);
	glVertex3f(1.4f, 0.0f, 0.0f);
	glVertex3f(1.2f, 0.5f, 0.0f);

glColor3ub(247,220,111);

	glVertex3f(0.78f, 0.4f, 0.0f);
	glVertex3f(1.1f, 0.4f, 0.0f);
	glVertex3f(1.1f, 0.43f, 0.0f);
	glVertex3f(0.78f, 0.43f, 0.0f);

	glColor3ub(247,220,111);

	glVertex3f(0.70f, 0.2f, 0.0f);
	glVertex3f(1.2f, 0.2f, 0.0f);
	glVertex3f(1.2f, 0.23f, 0.0f);
	glVertex3f(0.70f, 0.23f, 0.0f);


	glEnd(); //End quadrilateral coordinates
/*
	glBegin(GL_TRIANGLES); //Begin triangle coordinates

	//Pentagon
	glVertex3f(0.5f, 0.05f, 0.0f);
	glVertex3f(0.75f, 0.05f, 0.0f);
	glVertex3f(0.5f, 0.35f, 0.0f);

	glVertex3f(0.5f, 0.35f, 0.0f);
	glVertex3f(0.75f, 0.05f, 0.0f);
	glVertex3f(0.75f, 0.35f, 0.0f);

	glVertex3f(0.5f, 0.35f, 0.0f);
	glVertex3f(0.75f, 0.35f, 0.0f);
	glVertex3f(0.63f, 0.50f, 0.0f);

	//Triangle
	glVertex3f(0.30f, 0.65f, 0.0f);
	glVertex3f(0.60f, 0.65f, 0.0f);
	glVertex3f(0.45, 0.85f, 0.0f);

	glEnd();//End triangle coordinates
/* don't wait!
* start processing buffered OpenGL routines
*/
/*
int i;

	GLfloat x=1.7f; GLfloat y=1.7f; GLfloat radius =.2f;
	int triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(247,220,111);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
		*/
	glEnd();

glFlush ();
}
void init (void)
{
/* select clearing (background) color */

glClearColor(1.0,1.0,1.0,1.0);

/* initialize viewing values */
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(0.0, 2.0, 0.0, 2.0, -10.0, 10.0);
}
/*
* Declare initial window size, position, and display mode
* (single buffer and RGBA). Open window with "hello"
* in its title bar. Call initialization routines.
* Register callback function to display graphics.
* Enter main loop and process events.
*/
int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (900, 700);
glutInitWindowPosition (100, 100);
glutCreateWindow ("LabExam-Ship");
init ();
glutDisplayFunc(display);
glutMainLoop();
return 0; /* ISO C requires main to return int. */
}
