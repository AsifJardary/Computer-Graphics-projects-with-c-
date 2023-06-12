#include<stdio.h>
#include<windows.h>
#include<GL/glut.h>
#include <GL/gl.h>
#define SPEED 4.0    //speed of traffic

float i=0.0;    //movement of car
float m=0.0;    //movement of flag
float r=0;
float c1xp=0.0,c1yp=0.0,c1zp=0.0;
float c2xp=0.0,c2yp=0.0,c2zp=0.0;
float p1xp=0.0,p1yp=0.0,p1zp=0.0;
float p1sxp=0.0,p1syp=0.0,p1szp=0.0;
float x=1.0;
float rxp=0.0,ryp=0.0,rzp=0.0;
int c=1;
int w=1;


void draw_pixel(GLint cx, GLint cy)
{

	glBegin(GL_POINTS);
	glVertex2i(cx,cy);
	glEnd();
}

void plotpixels(GLint h, GLint k, GLint x, GLint y)
{
	draw_pixel(x + h, y + k);
	draw_pixel(-x + h, y + k);
	draw_pixel(x + h, -y + k);
	draw_pixel(-x + h, -y + k);
	draw_pixel(y + h, x + k);
	draw_pixel(-y + h, x + k);
	draw_pixel(y + h, -x + k);
	draw_pixel(-y + h, -x + k);
}

void draw_circle(GLint h, GLint k, GLint r)
{
	GLint d = 1 - r, x = 0, y = r;
	while (y>x)
	{
		plotpixels(h, k, x, y);
		if (d<0) d += 2 * x + 3;
		else
		{
			d += 2 * (x - y) + 5;
			--y;
		}
		++x;
	}
	plotpixels(h, k, x, y);
}


GLint position = 100;
GLint speed = 5;

void display_night();
void display_day();

void updatever (int value) {

    if(position < -300)
    {
        position = 100;
        glutDisplayFunc(display_night);
    }


    position -= speed; //position=position-speed;1-.1=.9

	glutPostRedisplay();


	glutTimerFunc(100, updatever, 0);
}



GLint nposition = 100;
GLint nspeed = 5;

void updatevernight (int value) {

    if(nposition < -300)
    {
        nposition = 100;
        glutDisplayFunc(display_day);
    }


    nposition -= nspeed; //position=position-speed;1-.1=.9

	glutPostRedisplay();


	glutTimerFunc(100, updatevernight, 0);
}

void draw_object()
{

glClear (GL_COLOR_BUFFER_BIT);

//Sky:
glBegin(GL_QUADS);
    glColor3ub(51, 236, 255);
    glVertex2i(0,641);
    glVertex2i(959,641);
    glVertex2i(959,186);
    glVertex2i(0,186);
    glEnd();


//sun

glPushMatrix();
glTranslatef(0,position,0);

		for (int l = 0; l <= 30; l++)
	{
		glColor3ub(255, 69, 0);
		draw_circle(700, 600, l);

	}

glPopMatrix();
//glLoadIdentity();

//Ground:grass
glBegin(GL_QUADS);
    glColor3ub(  16, 246, 65);
    glVertex2i(0,186);
    glVertex2i(959,186);
    glVertex2i(959,2);
    glVertex2i(0,0);
    glEnd();

//stair1
	glBegin(GL_QUADS);
    glColor3ub( 160,82,45 );
    glVertex2i(0,187);
    glVertex2i(959,187);
    glVertex2i(959,168);
    glVertex2i(0,168);
    glEnd();
	//thin part
	glBegin(GL_QUADS);
    glColor3ub( 205,133,63 );
    glVertex2i(0,168);
    glVertex2i(959,168);
    glVertex2i(959,160);
    glVertex2i(0,160);
    glEnd();
//stair2
	glBegin(GL_QUADS);
    glColor3ub( 160,82,45 );
    glVertex2i(0,160);
    glVertex2i(959,160);
    glVertex2i(959,146);
    glVertex2i(0,146);
    glEnd();
	//thin part
	glBegin(GL_QUADS);
    glColor3ub( 205,133,63 );
    glVertex2i(0,146);
    glVertex2i(959,146);
    glVertex2i(959,136);
    glVertex2i(0,136);
    glEnd();
	//stair3
	glBegin(GL_QUADS);
    glColor3ub(160,82,45 );
    glVertex2i(0,137);
    glVertex2i(959,137);
    glVertex2i(959,124);
    glVertex2i(0,124);
    glEnd();

//road
	glBegin(GL_QUADS);
    glColor3ub( 0.1,0.1,0.1 );
    glVertex2i(0,100);
    glVertex2i(959,100);
    glVertex2i(959,0);
    glVertex2i(0,0);
    glEnd();
//lines
	glBegin(GL_QUADS);
    glColor3ub(245,245,220  );
    glVertex2i(100,52);
    glVertex2i(200,52);
    glVertex2i(200,48);
    glVertex2i(100,48);
    glEnd();
	glBegin(GL_QUADS);
    glColor3ub(245,245,220  );
    glVertex2i(299,53);
    glVertex2i(401,53);
    glVertex2i(401,47);
    glVertex2i(299,47);
    glEnd();

	glBegin(GL_QUADS);
    glColor3ub(245,245,220  );
    glVertex2i(499,54);
    glVertex2i(601,54);
    glVertex2i(601,48);
    glVertex2i(499,48);
    glEnd();

	glBegin(GL_QUADS);
    glColor3ub(245,245,220  );
    glVertex2i(700,53);
    glVertex2i(800,53);
    glVertex2i(800,47);
    glVertex2i(700,47);
    glEnd();

	glBegin(GL_QUADS);
    glColor3ub(245,245,220  );
    glVertex2i(869,52);
    glVertex2i(951,52);
    glVertex2i(951,47);
    glVertex2i(869,47);
    glEnd();



//1:
	//MainB:
glBegin(GL_QUADS);
    glColor3ub(163, 158, 157);
    glVertex2i(39,323);
    glVertex2i(108,323);
    glVertex2i(108,186);
    glVertex2i(39,186);
    glEnd();


	//extra
		glBegin(GL_QUADS);
    glColor3ub( 16, 17, 16 );
    glVertex2i(27,323);
    glVertex2i(39,323);
    glVertex2i(39,186);
    glVertex2i(27,186);
    glEnd();

//2
glBegin(GL_QUADS);
    glColor3ub(145, 140, 139);
    glVertex2i(108,331);
    glVertex2i(182,339);
    glVertex2i(182,186);
    glVertex2i(108,186);
    glEnd();
glBegin(GL_QUADS);
    glColor3ub(113, 108, 107);
    glVertex2i(182,339);
    glVertex2i(190,338);
    glVertex2i(190,186);
    glVertex2i(182,186);
    glEnd();

//3:
glBegin(GL_QUADS);
    glColor3ub(175, 170, 168);
    glVertex2i(190,340);
    glVertex2i(271,348);
    glVertex2i(271,186);
    glVertex2i(190,186);
    glEnd();
glBegin(GL_QUADS);
    glColor3ub(138, 132, 130);
    glVertex2i(271,348);
    glVertex2i(358,344);
    glVertex2i(358,186);
    glVertex2i(271,186);
    glEnd();



//4:
glBegin(GL_QUADS);
    glColor3ub(130, 113, 109);
    glVertex2i(358,372);
    glVertex2i(465,372);
    glVertex2i(465,186);
    glVertex2i(358,186);
    glEnd();

//5:
glBegin(GL_QUADS);
    glColor3ub(88, 83, 82);
    glVertex2i(465,371);
    glVertex2i(505,371);
    glVertex2i(505,214);
    glVertex2i(465,214);
    glEnd();

	//square
	glBegin(GL_QUADS);
    glColor3ub( 16, 17, 16 );
    glVertex2i(463,214);
    glVertex2i(510,214);
    glVertex2i(510,187);
    glVertex2i(463,187);
    glEnd();


//6:

glBegin(GL_QUADS);
    glColor3ub(130, 113, 109);
    glVertex2i(505,372);
    glVertex2i(612,372);
    glVertex2i(612,186);
    glVertex2i(505,186);
    glEnd();


//7:
glBegin(GL_QUADS);
    glColor3ub(113, 108, 107);
    glVertex2i(611,346);
    glVertex2i(659,351);
    glVertex2i(662,186);
    glVertex2i(612,186);
    glEnd();
glBegin(GL_QUADS);
    glColor3ub(170, 163, 161 );
    glVertex2i(659,352);
    glVertex2i(745,345);
    glVertex2i(745,186);
    glVertex2i(659,186);
    glEnd();

//8:
glBegin(GL_QUADS);
    glColor3ub(88, 83, 82 );
    glVertex2i(745,342);
    glVertex2i(754,345);
    glVertex2i(754,186);
    glVertex2i(745,186);
    glEnd();
glBegin(GL_QUADS);
    glColor3ub(126, 115, 112);
    glVertex2i(754,345);
    glVertex2i(834,338);
    glVertex2i(834,186);
    glVertex2i(754,186);
    glEnd();



//design
	//bl2
	glBegin(GL_QUADS);
    glColor3ub( 0,0,0 );
    glVertex2i(110,210);
    glVertex2i(137,210);
    glVertex2i(137,189);
    glVertex2i(110,189);
    glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub( 0,0,0 );
    glVertex2i(110,232);
    glVertex2i(139,232);
    glVertex2i(125,308);
    glEnd();
//bl3
	glBegin(GL_QUADS);
    glColor3ub( 0,0,0);
    glVertex2i(233,219);
    glVertex2i(268,219);
    glVertex2i(268,186);
    glVertex2i(233,186);
    glEnd();
	glBegin(GL_TRIANGLES);
    glColor3ub( 0,0,0);
    glVertex2i(233,236);
    glVertex2i(268,236);
    glVertex2i(252,315);
    glEnd();
//bl7
	glBegin(GL_QUADS);
    glColor3ub( 0,0,0);
    glVertex2i(665,220);
    glVertex2i(698,220);
    glVertex2i(698,190);
    glVertex2i(665,190);
    glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub( 0,0,0);
    glVertex2i(664,241);
    glVertex2i(700,241);
    glVertex2i(681,325);
    glEnd();

	//bl8
	glBegin(GL_QUADS);
    glColor3ub( 0,0,0);
    glVertex2i(803,215);
    glVertex2i(832,215);
    glVertex2i(832,189);
    glVertex2i(803,189);
    glEnd();
	glBegin(GL_TRIANGLES);
    glColor3ub( 0,0,0);
    glVertex2i(799,235);
    glVertex2i(834,235);
    glVertex2i(815,315);
    glEnd();

//lines of building
	glBegin(GL_QUADS);
    glColor3ub( 245,245,220 );
    glVertex2i(381,185);
    glVertex2i(381,376);
    glVertex2i(391,376);
    glVertex2i(391,185);
    glEnd();

	glBegin(GL_QUADS);
    glColor3ub(245,245,220);
    glVertex2i(433,185);
    glVertex2i(433,376);
    glVertex2i(442,376);
    glVertex2i(442,185);
    glEnd();

glBegin(GL_QUADS);
    glColor3ub(245,245,220);
    glVertex2i(531,185);
    glVertex2i(531,372);
    glVertex2i(541,372);
    glVertex2i(541,185);
    glEnd();
	glBegin(GL_QUADS);
    glColor3ub(245,245,220);
    glVertex2i(587,186);
    glVertex2i(587,372);
    glVertex2i(595,372);
    glVertex2i(595,186);
    glEnd();

glBegin(GL_QUADS);
    glColor3ub(245,245,220);
    glVertex2i(356,230);
    glVertex2i(612,230);
    glVertex2i(612,234);
    glVertex2i(356,234);
    glEnd();


glBegin(GL_QUADS);
    glColor3ub(245,245,220);
    glVertex2i(356,284);
    glVertex2i(612,284);
    glVertex2i(612,288);
    glVertex2i(356,288);
    glEnd();

	glBegin(GL_QUADS);
    glColor3ub(245,245,220);
    glVertex2i(356,320);
    glVertex2i(612,320);
    glVertex2i(612,325);
    glVertex2i(356,325);
    glEnd();



	//ROOF

	glBegin(GL_QUADS);
    glColor3ub(107,142,135);
    glVertex2i(38,321);
    glVertex2i(109,321);
    glVertex2i(109,355);
    glVertex2i(40,347);
    glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(107,142,135);
    glVertex2i(38,321);
    glVertex2i(40,347);
    glVertex2i(25,321);
    glEnd();

	glBegin(GL_QUADS);
    glColor3ub(113, 108, 107);
    glVertex2i(109,330);
    glVertex2i(271,344);
    glVertex2i(271,373);
    glVertex2i(109,355);
    glEnd();

	glBegin(GL_QUADS);
    glColor3ub(107,142,135);
    glVertex2i(271,346);
    glVertex2i(329,342);
    glVertex2i(329,373);
    glVertex2i(271,373);
    glEnd();
	glBegin(GL_QUADS);
    glColor3ub(113, 108, 107);
    glVertex2i(329,342);
    glVertex2i(359,339);
    glVertex2i(359,373);
    glVertex2i(329,427);
    glEnd();
	glBegin(GL_QUADS);
    glColor3ub(107,142,135);
    glVertex2i(360,367);
    glVertex2i(613,369);
    glVertex2i(580,427);
    glVertex2i(329,427);
    glEnd();
	glBegin(GL_QUADS);
    glColor3ub(145, 140, 139);
    glVertex2i(610,345);
    glVertex2i(659,350);
    glVertex2i(659,376);
    glVertex2i(610,369);
    glEnd();
	glBegin(GL_QUADS);
    glColor3ub(107,142,135);
    glVertex2i(659,350);
    glVertex2i(745,342);
    glVertex2i(745,376);
    glVertex2i(659,376);
    glEnd();
	glBegin(GL_POLYGON);
    glColor3ub(113, 108, 107);
    glVertex2i(745,342);
    glVertex2i(834,334);
	 glVertex2i(829,355);
    glVertex2i(813,371);
    glVertex2i(745,376);
    glEnd();





	//Flag stick
	glBegin(GL_QUADS);
    glColor3ub( 0,0,0 );
    glVertex2i(515,278);
    glVertex2i(517,278);
    glVertex2i(517,186);
    glVertex2i(515,186);
    glEnd();
	//main
	//Flag

	if(w!=0){
	glBegin(GL_QUADS);
    glColor3ub( 0,100,0 );
    glVertex2i(517,202+m);
    glVertex2i(554,202+m);
    glVertex2i(554,169+m);
    glVertex2i(517,169+m);
    glEnd();


	}else{
		glBegin(GL_QUADS);
    glColor3ub( 0,100,0 );
    glVertex2i(517,202+80);
    glVertex2i(554,202+80);
    glVertex2i(554,169+80);
    glVertex2i(517,169+80);
    glEnd();

	for (int l = 0; l <= 7; l++)
	{
		glColor3ub(255, 69, 0);
		draw_circle(535, 265, l);

	}


	}

//Tree1

	glBegin(GL_TRIANGLES);
    glColor3ub(0,139,0);
    glVertex2i(922,235);
    glVertex2i(957,235);
    glVertex2i(943,275);
    glEnd();
	glBegin(GL_TRIANGLES);
    glColor3ub(0,139,0);
    glVertex2i(924,261);
    glVertex2i(958,261);
    glVertex2i(945,310);
    glEnd();


	glBegin(GL_QUADS);
    glColor3ub(160,82,45);
    glVertex2i(934,234);
    glVertex2i(947,234);
    glVertex2i(947,186);
    glVertex2i(934,186);
    glEnd();

	//2
	glBegin(GL_QUADS);
    glColor3ub( 160,82,45);
    glVertex2i(891,186);
    glVertex2i(891,231);
    glVertex2i(871,231);
    glVertex2i(871,186);
    glEnd();
	glBegin(GL_TRIANGLES);
    glColor3ub(0,139,0);
    glVertex2i(845,225);
    glVertex2i(916,225);
    glVertex2i(881,268);
    glEnd();
	glBegin(GL_TRIANGLES);
    glColor3ub(0,139,0);
    glVertex2i(849,250);
    glVertex2i(916,250);
    glVertex2i(882,298);
    glEnd();
	glBegin(GL_TRIANGLES);
    glColor3ub(0,139,0);
    glVertex2i(843,274);
    glVertex2i(919,274);
    glVertex2i(884,328);
    glEnd();

//3
	 glBegin(GL_QUADS);
    glColor3ub( 160,82,45);
    glVertex2i(5,182);
    glVertex2i(5,234);
    glVertex2i(15,234);
    glVertex2i(15,182);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(0,139,0);
    glVertex2i(0,231);
    glVertex2i(24,231);
    glVertex2i(9,338);
    glEnd();



//2nd car body

	//wheel..1
	glColor3f(0.1, 0.1, 0.1);
	glBegin(GL_QUADS);
	glVertex2i(715-i , 25);
	glVertex2i(725-i , 25);
	glVertex2i(725-i , 35);
	glVertex2i(715-i , 35);
	glEnd();

	//wheel..2
	glColor3f(0.1, 0.1, 0.1);
	glBegin(GL_QUADS);
	glVertex2i(755-i, 25);
	glVertex2i(765-i, 25);
	glVertex2i(765-i, 35);
	glVertex2i(755-i, 35);
	glEnd();

    //body2
	glColor3f(1.0, 1.0, 0.1);
	glBegin(GL_QUADS);
	glVertex2i(695-i , 30);
	glVertex2i(780-i , 30);
	glVertex2i(780-i , 50);
	glVertex2i(695-i , 50);
	glEnd();

	//car up 1st roof
	glColor3f(0.0, 0.0, 0.5);
	glBegin(GL_QUADS);
	glVertex2i(710-i , 50);
	glVertex2i(770-i , 50);
	glVertex2i(760-i , 65);
	glVertex2i(720-i , 65);
	glEnd();

	//glass
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_QUADS);
	glVertex2i(714-i , 53);
	glVertex2i(766-i , 53);
	glVertex2i(756-i , 62);
	glVertex2i(724-i , 62);
	glEnd();

	//glass 2 gap
	glColor3f(0.0, 0.0, 0.5);
	glBegin(GL_QUADS);
	glVertex2i(738-i , 50);
	glVertex2i(742-i , 50);
	glVertex2i(742-i , 65);
	glVertex2i(738-i , 65);
	glEnd();


	//1st car body

	//wheel..1
	glColor3f(0.1, 0.1, 0.1);
	glBegin(GL_QUADS);
	glVertex2i(115+i , 15) ;
	glVertex2i(125+i , 15);
	glVertex2i(125+i , 25);
	glVertex2i(115+i , 25);
	glEnd();

	//wheel..2
	glColor3f(0.1, 0.1, 0.1);
	glBegin(GL_QUADS);
	glVertex2i(155+i , 15);
	glVertex2i(165+i , 15);
	glVertex2i(165+i , 25);
	glVertex2i(155+i , 25);
	glEnd();

	//body
	glColor3f(0.0, 0.0, 0.9);
	glBegin(GL_QUADS);
	glVertex2i(95+i , 20);
	glVertex2i(180+i , 20);
	glVertex2i(180+i , 40);
	glVertex2i(95+i , 40);
	glEnd();

	//car up 1st roof
	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_QUADS);
	glVertex2i(110+i , 40);
	glVertex2i(170 +i, 40);
	glVertex2i(160+i , 55);
	glVertex2i(120+i , 55);
	glEnd();

	//glass 1
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_QUADS);
	glVertex2i(114+i , 43);
	glVertex2i(166+i , 43);
	glVertex2i(156+i , 52);
	glVertex2i(124+i , 52);
	glEnd();

    //glass2 gap
	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_QUADS);
	glVertex2i(138+i , 40);
	glVertex2i(142+i , 40);
	glVertex2i(142+i , 55);
	glVertex2i(138+i , 55);
	glEnd();


	//CNG
    //wheel..1
	glColor3f(0.1, 0.1, 0.1);
	glBegin(GL_QUADS);
	glVertex2i(70+i*.7 , 60) ;
	glVertex2i(80+i*.7 , 60);
	glVertex2i(80+i*.7 , 70);
	glVertex2i(70+i*.7 , 70);
	glEnd();

	//wheel..2
	glColor3f(0.1, 0.1, 0.1);
	glBegin(GL_QUADS);
	glVertex2i(90+i*.7 , 60);
	glVertex2i(100+i*.7 , 60);
	glVertex2i(100+i*.7 , 70);
	glVertex2i(90+i*.7 , 70);
	glEnd();

    //body CNG
//front
	glColor3f(0.0, 1.0, 0.0);
	glBegin(GL_QUADS);
	glVertex2i(65+i*.7 , 70);
	glVertex2i(100+i*.7 , 70);
	glVertex2i(100+i*.7 , 95);
	glVertex2i(65+i*.7 , 95);
	glEnd();

//back
    glColor3f(0.0, 1.0, 0.0);
	glBegin(GL_QUADS);
	glVertex2i(101+i*.7 , 70);
	glVertex2i(110+i*.7 , 70);
	glVertex2i(110+i*.7 , 85);
	glVertex2i(101+i*.7 , 95);
	glEnd();



    //Travelers

    //Couple1

//1
    //pant
	glColor3f(1, 0, 0);
	glBegin(GL_QUADS);
	glVertex2f(70 , 100);
	glVertex2f(85 , 100);
	glVertex2f(85 , 120);
	glVertex2f(70 , 120);
	glEnd();
	//shirt
    glColor3f(1, 1 , 1);
	glBegin(GL_QUADS);
	glVertex2f(70 , 121);
	glVertex2f(85 , 121);
	glVertex2f(85 , 130);
	glVertex2f(70 , 130);
	glEnd();

//2
    //pant
	glColor3f(0, 0, 1);
	glBegin(GL_QUADS);
	glVertex2f(86 , 100);
	glVertex2f(100 , 100);
	glVertex2f(100 , 120);
	glVertex2f(86 , 120);
	glEnd();
	//shirt
    glColor3f(1, 1 , 1);
	glBegin(GL_QUADS);
	glVertex2f(86 , 121);
	glVertex2f(100 , 121);
	glVertex2f(100 , 130);
	glVertex2f(86 , 130);
	glEnd();

	//couple2
	//3
    //pant
	glColor3f(1, 1, 0);
	glBegin(GL_QUADS);
	glVertex2f(370 , 100);
	glVertex2f(385 , 100);
	glVertex2f(385 , 120);
	glVertex2f(370 , 120);
	glEnd();
	//shirt
    glColor3f(1, 1 , 1);
	glBegin(GL_QUADS);
	glVertex2f(370 , 121);
	glVertex2f(385 , 121);
	glVertex2f(385 , 130);
	glVertex2f(370 , 130);
	glEnd();

    //4
    //pant
	glColor3f(0, 1, 1);
	glBegin(GL_QUADS);
	glVertex2f(386 , 100);
	glVertex2f(400 , 100);
	glVertex2f(400 , 120);
	glVertex2f(386 , 120);
	glEnd();
	//shirt
    glColor3f(1, 1 , 1);
	glBegin(GL_QUADS);
	glVertex2f(386 , 121);
	glVertex2f(400 , 121);
	glVertex2f(400 , 130);
	glVertex2f(386 , 130);
	glEnd();


//couple3
	//5
    //pant
	glColor3f(1, 0, 1);
	glBegin(GL_QUADS);
	glVertex2f(770 , 100);
	glVertex2f(785 , 100);
	glVertex2f(785 , 120);
	glVertex2f(770 , 120);
	glEnd();
	//shirt
    glColor3f(1, 1 , 1);
	glBegin(GL_QUADS);
	glVertex2f(770 , 121);
	glVertex2f(785 , 121);
	glVertex2f(785 , 130);
	glVertex2f(770 , 130);
	glEnd();

    //6
    //pant
	glColor3f(0, 0, 1);
	glBegin(GL_QUADS);
	glVertex2f(786 , 100);
	glVertex2f(800 , 100);
	glVertex2f(800 , 120);
	glVertex2f(786 , 120);
	glEnd();
	//shirt
    glColor3f(1, 1 , 1);
	glBegin(GL_QUADS);
	glVertex2f(786 , 121);
	glVertex2f(800 , 121);
	glVertex2f(800 , 130);
	glVertex2f(786 , 130);
	glEnd();


	// Traveler3
	//pant
	glColor3f(1, 1, 0);
	glBegin(GL_POLYGON);
	glVertex2f(960 - i*.8, 100);
	glVertex2f(970 - i*.8, 100);
	glVertex2f(970 - i*.8, 125);
	glVertex2f(960 - i*.8, 125);
	glEnd();

	//shirt
	glColor3f(1, 0, 0);
    glBegin(GL_POLYGON);
	glVertex2f(960 - i*.8, 125);
	glVertex2f(970 - i*.8, 125);
	glVertex2f(970 - i*.8, 140);
	glVertex2f(960 - i*.8, 140);
	glEnd();

	//birds
//red
	glColor3f(1, 0, 0);
    glBegin(GL_TRIANGLES);
	glVertex2f(20 + i*.8, 610);
	glVertex2f(30 + i*.8, 595);
	glVertex2f(20 + i*.8,580);

	glEnd();
//green
    glColor3f(0, 1, 0);
    glBegin(GL_TRIANGLES);
	glVertex2f(-10 + i*.8, 570);
	glVertex2f(0 + i*.8, 585);
	glVertex2f(-10 + i*.8,600);

	glEnd();
//yellow
    glColor3f(1, 1, 0);
    glBegin(GL_TRIANGLES);
	glVertex2f(0 + i*.8, 600);
	glVertex2f(10 + i*.8, 615);
	glVertex2f(0 + i*.8,630);

	glEnd();



    glFlush ();

}


void draw_object_night()
{

glClear (GL_COLOR_BUFFER_BIT);



//Sky:
glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2i(0,641);
    glVertex2i(959,641);
    glVertex2i(959,186);
    glVertex2i(0,186);
    glEnd();

    //sun
glPushMatrix();
glTranslatef(0,position,0);
		for (int l = 0; l <= 20; l++)
	{
		glColor3ub(255, 255, 255);
		draw_circle(200, 600, l);

	}

glPopMatrix();

//clouds

		for (int l = 0; l <= 20; l++)
	{
		glColor3ub(36, 36, 36);
		draw_circle(700, 600, l);

	}


		for (int l = 0; l <= 20; l++)
	{
		glColor3ub(36, 36, 36);
		draw_circle(720, 600, l);

	}


		for (int l = 0; l <= 20; l++)
	{
		glColor3ub(36, 36, 36);
		draw_circle(740, 600, l);

	}


	//cloud 2


			for (int l = 0; l <= 20; l++)
	{
		glColor3ub(36, 36, 36);
		draw_circle(800, 550, l);

	}


		for (int l = 0; l <= 20; l++)
	{
		glColor3ub(36, 36, 36);
		draw_circle(820, 550, l);

	}


		for (int l = 0; l <= 20; l++)
	{
		glColor3ub(36, 36, 36);
		draw_circle(840, 550, l);

	}


		//cloud 3


			for (int l = 0; l <= 20; l++)
	{
		glColor3ub(36, 36, 36);
		draw_circle(900, 600, l);

	}


		for (int l = 0; l <= 20; l++)
	{
		glColor3ub(36, 36, 36);
		draw_circle(920, 600, l);

	}


		for (int l = 0; l <= 20; l++)
	{
		glColor3ub(36, 36, 36);
		draw_circle(940, 600, l);

	}


//Ground:grass
glBegin(GL_QUADS);
    glColor3ub(  16, 246, 65);
    glVertex2i(0,186);
    glVertex2i(959,186);
    glVertex2i(959,2);
    glVertex2i(0,0);
    glEnd();

//stair1
	glBegin(GL_QUADS);
    glColor3ub( 160,82,45 );
    glVertex2i(0,187);
    glVertex2i(959,187);
    glVertex2i(959,168);
    glVertex2i(0,168);
    glEnd();
	//thin part
	glBegin(GL_QUADS);
    glColor3ub( 205,133,63 );
    glVertex2i(0,168);
    glVertex2i(959,168);
    glVertex2i(959,160);
    glVertex2i(0,160);
    glEnd();
//stair2
	glBegin(GL_QUADS);
    glColor3ub( 160,82,45 );
    glVertex2i(0,160);
    glVertex2i(959,160);
    glVertex2i(959,146);
    glVertex2i(0,146);
    glEnd();
	//thin part
	glBegin(GL_QUADS);
    glColor3ub( 205,133,63 );
    glVertex2i(0,146);
    glVertex2i(959,146);
    glVertex2i(959,136);
    glVertex2i(0,136);
    glEnd();
	//stair3
	glBegin(GL_QUADS);
    glColor3ub(160,82,45 );
    glVertex2i(0,137);
    glVertex2i(959,137);
    glVertex2i(959,124);
    glVertex2i(0,124);
    glEnd();

//road
	glBegin(GL_QUADS);
    glColor3ub( 0.1,0.1,0.1 );
    glVertex2i(0,100);
    glVertex2i(959,100);
    glVertex2i(959,0);
    glVertex2i(0,0);
    glEnd();
//lines
	glBegin(GL_QUADS);
    glColor3ub(245,245,220  );
    glVertex2i(100,52);
    glVertex2i(200,52);
    glVertex2i(200,48);
    glVertex2i(100,48);
    glEnd();
	glBegin(GL_QUADS);
    glColor3ub(245,245,220  );
    glVertex2i(299,53);
    glVertex2i(401,53);
    glVertex2i(401,47);
    glVertex2i(299,47);
    glEnd();

	glBegin(GL_QUADS);
    glColor3ub(245,245,220  );
    glVertex2i(499,54);
    glVertex2i(601,54);
    glVertex2i(601,48);
    glVertex2i(499,48);
    glEnd();

	glBegin(GL_QUADS);
    glColor3ub(245,245,220  );
    glVertex2i(700,53);
    glVertex2i(800,53);
    glVertex2i(800,47);
    glVertex2i(700,47);
    glEnd();

	glBegin(GL_QUADS);
    glColor3ub(245,245,220  );
    glVertex2i(869,52);
    glVertex2i(951,52);
    glVertex2i(951,47);
    glVertex2i(869,47);
    glEnd();



//1:
	//MainB:
glBegin(GL_QUADS);
    glColor3ub(163, 158, 157);
    glVertex2i(39,323);
    glVertex2i(108,323);
    glVertex2i(108,186);
    glVertex2i(39,186);
    glEnd();


	//extra
		glBegin(GL_QUADS);
    glColor3ub( 16, 17, 16 );
    glVertex2i(27,323);
    glVertex2i(39,323);
    glVertex2i(39,186);
    glVertex2i(27,186);
    glEnd();

//2
glBegin(GL_QUADS);
    glColor3ub(145, 140, 139);
    glVertex2i(108,331);
    glVertex2i(182,339);
    glVertex2i(182,186);
    glVertex2i(108,186);
    glEnd();
glBegin(GL_QUADS);
    glColor3ub(113, 108, 107);
    glVertex2i(182,339);
    glVertex2i(190,338);
    glVertex2i(190,186);
    glVertex2i(182,186);
    glEnd();

//3:
glBegin(GL_QUADS);
    glColor3ub(175, 170, 168);
    glVertex2i(190,340);
    glVertex2i(271,348);
    glVertex2i(271,186);
    glVertex2i(190,186);
    glEnd();
glBegin(GL_QUADS);
    glColor3ub(138, 132, 130);
    glVertex2i(271,348);
    glVertex2i(358,344);
    glVertex2i(358,186);
    glVertex2i(271,186);
    glEnd();



//4:
glBegin(GL_QUADS);
    glColor3ub(130, 113, 109);
    glVertex2i(358,372);
    glVertex2i(465,372);
    glVertex2i(465,186);
    glVertex2i(358,186);
    glEnd();

//5:
glBegin(GL_QUADS);
    glColor3ub(88, 83, 82);
    glVertex2i(465,371);
    glVertex2i(505,371);
    glVertex2i(505,214);
    glVertex2i(465,214);
    glEnd();

	//square
	glBegin(GL_QUADS);
    glColor3ub( 16, 17, 16 );
    glVertex2i(463,214);
    glVertex2i(510,214);
    glVertex2i(510,187);
    glVertex2i(463,187);
    glEnd();


//6:

glBegin(GL_QUADS);
    glColor3ub(130, 113, 109);
    glVertex2i(505,372);
    glVertex2i(612,372);
    glVertex2i(612,186);
    glVertex2i(505,186);
    glEnd();


//7:
glBegin(GL_QUADS);
    glColor3ub(113, 108, 107);
    glVertex2i(611,346);
    glVertex2i(659,351);
    glVertex2i(662,186);
    glVertex2i(612,186);
    glEnd();
glBegin(GL_QUADS);
    glColor3ub(170, 163, 161 );
    glVertex2i(659,352);
    glVertex2i(745,345);
    glVertex2i(745,186);
    glVertex2i(659,186);
    glEnd();

//8:
glBegin(GL_QUADS);
    glColor3ub(88, 83, 82 );
    glVertex2i(745,342);
    glVertex2i(754,345);
    glVertex2i(754,186);
    glVertex2i(745,186);
    glEnd();
glBegin(GL_QUADS);
    glColor3ub(126, 115, 112);
    glVertex2i(754,345);
    glVertex2i(834,338);
    glVertex2i(834,186);
    glVertex2i(754,186);
    glEnd();



//design
	//bl2
	glBegin(GL_QUADS);
    glColor3ub( 0,0,0 );
    glVertex2i(110,210);
    glVertex2i(137,210);
    glVertex2i(137,189);
    glVertex2i(110,189);
    glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub( 0,0,0 );
    glVertex2i(110,232);
    glVertex2i(139,232);
    glVertex2i(125,308);
    glEnd();
//bl3
	glBegin(GL_QUADS);
    glColor3ub( 0,0,0);
    glVertex2i(233,219);
    glVertex2i(268,219);
    glVertex2i(268,186);
    glVertex2i(233,186);
    glEnd();
	glBegin(GL_TRIANGLES);
    glColor3ub( 0,0,0);
    glVertex2i(233,236);
    glVertex2i(268,236);
    glVertex2i(252,315);
    glEnd();
//bl7
	glBegin(GL_QUADS);
    glColor3ub( 0,0,0);
    glVertex2i(665,220);
    glVertex2i(698,220);
    glVertex2i(698,190);
    glVertex2i(665,190);
    glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub( 0,0,0);
    glVertex2i(664,241);
    glVertex2i(700,241);
    glVertex2i(681,325);
    glEnd();

	//bl8
	glBegin(GL_QUADS);
    glColor3ub( 0,0,0);
    glVertex2i(803,215);
    glVertex2i(832,215);
    glVertex2i(832,189);
    glVertex2i(803,189);
    glEnd();
	glBegin(GL_TRIANGLES);
    glColor3ub( 0,0,0);
    glVertex2i(799,235);
    glVertex2i(834,235);
    glVertex2i(815,315);
    glEnd();

//lines of building
	glBegin(GL_QUADS);
    glColor3ub( 245,245,220 );
    glVertex2i(381,185);
    glVertex2i(381,376);
    glVertex2i(391,376);
    glVertex2i(391,185);
    glEnd();

	glBegin(GL_QUADS);
    glColor3ub(245,245,220);
    glVertex2i(433,185);
    glVertex2i(433,376);
    glVertex2i(442,376);
    glVertex2i(442,185);
    glEnd();

glBegin(GL_QUADS);
    glColor3ub(245,245,220);
    glVertex2i(531,185);
    glVertex2i(531,372);
    glVertex2i(541,372);
    glVertex2i(541,185);
    glEnd();
	glBegin(GL_QUADS);
    glColor3ub(245,245,220);
    glVertex2i(587,186);
    glVertex2i(587,372);
    glVertex2i(595,372);
    glVertex2i(595,186);
    glEnd();

glBegin(GL_QUADS);
    glColor3ub(245,245,220);
    glVertex2i(356,230);
    glVertex2i(612,230);
    glVertex2i(612,234);
    glVertex2i(356,234);
    glEnd();


glBegin(GL_QUADS);
    glColor3ub(245,245,220);
    glVertex2i(356,284);
    glVertex2i(612,284);
    glVertex2i(612,288);
    glVertex2i(356,288);
    glEnd();

	glBegin(GL_QUADS);
    glColor3ub(245,245,220);
    glVertex2i(356,320);
    glVertex2i(612,320);
    glVertex2i(612,325);
    glVertex2i(356,325);
    glEnd();

	//ROOF

	glBegin(GL_QUADS);
    glColor3ub(107,142,135);
    glVertex2i(38,321);
    glVertex2i(109,321);
    glVertex2i(109,355);
    glVertex2i(40,347);
    glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(107,142,135);
    glVertex2i(38,321);
    glVertex2i(40,347);
    glVertex2i(25,321);
    glEnd();

	glBegin(GL_QUADS);
    glColor3ub(113, 108, 107);
    glVertex2i(109,330);
    glVertex2i(271,344);
    glVertex2i(271,373);
    glVertex2i(109,355);
    glEnd();

	glBegin(GL_QUADS);
    glColor3ub(107,142,135);
    glVertex2i(271,346);
    glVertex2i(329,342);
    glVertex2i(329,373);
    glVertex2i(271,373);
    glEnd();
	glBegin(GL_QUADS);
    glColor3ub(113, 108, 107);
    glVertex2i(329,342);
    glVertex2i(359,339);
    glVertex2i(359,373);
    glVertex2i(329,427);
    glEnd();
	glBegin(GL_QUADS);
    glColor3ub(107,142,135);
    glVertex2i(360,367);
    glVertex2i(613,369);
    glVertex2i(580,427);
    glVertex2i(329,427);
    glEnd();
	glBegin(GL_QUADS);
    glColor3ub(145, 140, 139);
    glVertex2i(610,345);
    glVertex2i(659,350);
    glVertex2i(659,376);
    glVertex2i(610,369);
    glEnd();
	glBegin(GL_QUADS);
    glColor3ub(107,142,135);
    glVertex2i(659,350);
    glVertex2i(745,342);
    glVertex2i(745,376);
    glVertex2i(659,376);
    glEnd();
	glBegin(GL_POLYGON);
    glColor3ub(113, 108, 107);
    glVertex2i(745,342);
    glVertex2i(834,334);
	 glVertex2i(829,355);
    glVertex2i(813,371);
    glVertex2i(745,376);
    glEnd();





	//Flag stick
	glBegin(GL_QUADS);
    glColor3ub( 0,0,0 );
    glVertex2i(515,278);
    glVertex2i(517,278);
    glVertex2i(517,186);
    glVertex2i(515,186);
    glEnd();
	//main
	//Flag

	if(w!=0){
	glBegin(GL_QUADS);
    glColor3ub( 0,100,0 );
    glVertex2i(517,202+m);
    glVertex2i(554,202+m);
    glVertex2i(554,169+m);
    glVertex2i(517,169+m);
    glEnd();


	}else{
		glBegin(GL_QUADS);
    glColor3ub( 0,100,0 );
    glVertex2i(517,202+80);
    glVertex2i(554,202+80);
    glVertex2i(554,169+80);
    glVertex2i(517,169+80);
    glEnd();

	for (int l = 0; l <= 7; l++)
	{
		glColor3ub(255, 69, 0);
		draw_circle(535, 265, l);

	}


	}

//Tree1

	glBegin(GL_TRIANGLES);
    glColor3ub(0,139,0);
    glVertex2i(922,235);
    glVertex2i(957,235);
    glVertex2i(943,275);
    glEnd();
	glBegin(GL_TRIANGLES);
    glColor3ub(0,139,0);
    glVertex2i(924,261);
    glVertex2i(958,261);
    glVertex2i(945,310);
    glEnd();


	glBegin(GL_QUADS);
    glColor3ub(160,82,45);
    glVertex2i(934,234);
    glVertex2i(947,234);
    glVertex2i(947,186);
    glVertex2i(934,186);
    glEnd();

	//2
	glBegin(GL_QUADS);
    glColor3ub( 160,82,45);
    glVertex2i(891,186);
    glVertex2i(891,231);
    glVertex2i(871,231);
    glVertex2i(871,186);
    glEnd();
	glBegin(GL_TRIANGLES);
    glColor3ub(0,139,0);
    glVertex2i(845,225);
    glVertex2i(916,225);
    glVertex2i(881,268);
    glEnd();
	glBegin(GL_TRIANGLES);
    glColor3ub(0,139,0);
    glVertex2i(849,250);
    glVertex2i(916,250);
    glVertex2i(882,298);
    glEnd();
	glBegin(GL_TRIANGLES);
    glColor3ub(0,139,0);
    glVertex2i(843,274);
    glVertex2i(919,274);
    glVertex2i(884,328);
    glEnd();

//3
	 glBegin(GL_QUADS);
    glColor3ub( 160,82,45);
    glVertex2i(5,182);
    glVertex2i(5,234);
    glVertex2i(15,234);
    glVertex2i(15,182);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(0,139,0);
    glVertex2i(0,231);
    glVertex2i(24,231);
    glVertex2i(9,338);
    glEnd();



//2nd car body

	//wheel..1
	glColor3f(0.1, 0.1, 0.1);
	glBegin(GL_QUADS);
	glVertex2i(715-i , 25);
	glVertex2i(725-i , 25);
	glVertex2i(725-i , 35);
	glVertex2i(715-i , 35);
	glEnd();

	//wheel..2
	glColor3f(0.1, 0.1, 0.1);
	glBegin(GL_QUADS);
	glVertex2i(755-i, 25);
	glVertex2i(765-i, 25);
	glVertex2i(765-i, 35);
	glVertex2i(755-i, 35);
	glEnd();

    //body2
	glColor3f(1.0, 1.0, 0.1);
	glBegin(GL_QUADS);
	glVertex2i(695-i , 30);
	glVertex2i(780-i , 30);
	glVertex2i(780-i , 50);
	glVertex2i(695-i , 50);
	glEnd();

	//car up 1st roof
	glColor3f(0.0, 0.0, 0.5);
	glBegin(GL_QUADS);
	glVertex2i(710-i , 50);
	glVertex2i(770-i , 50);
	glVertex2i(760-i , 65);
	glVertex2i(720-i , 65);
	glEnd();

	//glass
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_QUADS);
	glVertex2i(714-i , 53);
	glVertex2i(766-i , 53);
	glVertex2i(756-i , 62);
	glVertex2i(724-i , 62);
	glEnd();

	//glass 2 gap
	glColor3f(0.0, 0.0, 0.5);
	glBegin(GL_QUADS);
	glVertex2i(738-i , 50);
	glVertex2i(742-i , 50);
	glVertex2i(742-i , 65);
	glVertex2i(738-i , 65);
	glEnd();


	//1st car body

	//wheel..1
	glColor3f(0.1, 0.1, 0.1);
	glBegin(GL_QUADS);
	glVertex2i(115+i , 15) ;
	glVertex2i(125+i , 15);
	glVertex2i(125+i , 25);
	glVertex2i(115+i , 25);
	glEnd();

	//wheel..2
	glColor3f(0.1, 0.1, 0.1);
	glBegin(GL_QUADS);
	glVertex2i(155+i , 15);
	glVertex2i(165+i , 15);
	glVertex2i(165+i , 25);
	glVertex2i(155+i , 25);
	glEnd();

	//body
	glColor3f(0.0, 0.0, 0.9);
	glBegin(GL_QUADS);
	glVertex2i(95+i , 20);
	glVertex2i(180+i , 20);
	glVertex2i(180+i , 40);
	glVertex2i(95+i , 40);
	glEnd();

	//car up 1st roof
	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_QUADS);
	glVertex2i(110+i , 40);
	glVertex2i(170 +i, 40);
	glVertex2i(160+i , 55);
	glVertex2i(120+i , 55);
	glEnd();

	//glass 1
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_QUADS);
	glVertex2i(114+i , 43);
	glVertex2i(166+i , 43);
	glVertex2i(156+i , 52);
	glVertex2i(124+i , 52);
	glEnd();

    //glass2 gap
	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_QUADS);
	glVertex2i(138+i , 40);
	glVertex2i(142+i , 40);
	glVertex2i(142+i , 55);
	glVertex2i(138+i , 55);
	glEnd();


	//CNG
    //wheel..1
	glColor3f(0.1, 0.1, 0.1);
	glBegin(GL_QUADS);
	glVertex2i(70+i*.7 , 60) ;
	glVertex2i(80+i*.7 , 60);
	glVertex2i(80+i*.7 , 70);
	glVertex2i(70+i*.7 , 70);
	glEnd();

	//wheel..2
	glColor3f(0.1, 0.1, 0.1);
	glBegin(GL_QUADS);
	glVertex2i(90+i*.7 , 60);
	glVertex2i(100+i*.7 , 60);
	glVertex2i(100+i*.7 , 70);
	glVertex2i(90+i*.7 , 70);
	glEnd();

    //body CNG
//front
	glColor3f(0.0, 1.0, 0.0);
	glBegin(GL_QUADS);
	glVertex2i(65+i*.7 , 70);
	glVertex2i(100+i*.7 , 70);
	glVertex2i(100+i*.7 , 95);
	glVertex2i(65+i*.7 , 95);
	glEnd();

//back
    glColor3f(0.0, 1.0, 0.0);
	glBegin(GL_QUADS);
	glVertex2i(101+i*.7 , 70);
	glVertex2i(110+i*.7 , 70);
	glVertex2i(110+i*.7 , 85);
	glVertex2i(101+i*.7 , 95);
	glEnd();



    //Travelers

    //Couple1

//1
    //pant
	glColor3f(1, 0, 0);
	glBegin(GL_QUADS);
	glVertex2f(70 , 100);
	glVertex2f(85 , 100);
	glVertex2f(85 , 120);
	glVertex2f(70 , 120);
	glEnd();
	//shirt
    glColor3f(1, 1 , 1);
	glBegin(GL_QUADS);
	glVertex2f(70 , 121);
	glVertex2f(85 , 121);
	glVertex2f(85 , 130);
	glVertex2f(70 , 130);
	glEnd();

//2
    //pant
	glColor3f(0, 0, 1);
	glBegin(GL_QUADS);
	glVertex2f(86 , 100);
	glVertex2f(100 , 100);
	glVertex2f(100 , 120);
	glVertex2f(86 , 120);
	glEnd();
	//shirt
    glColor3f(1, 1 , 1);
	glBegin(GL_QUADS);
	glVertex2f(86 , 121);
	glVertex2f(100 , 121);
	glVertex2f(100 , 130);
	glVertex2f(86 , 130);
	glEnd();

	//couple2
	//3
    //pant
	glColor3f(1, 1, 0);
	glBegin(GL_QUADS);
	glVertex2f(370 , 100);
	glVertex2f(385 , 100);
	glVertex2f(385 , 120);
	glVertex2f(370 , 120);
	glEnd();
	//shirt
    glColor3f(1, 1 , 1);
	glBegin(GL_QUADS);
	glVertex2f(370 , 121);
	glVertex2f(385 , 121);
	glVertex2f(385 , 130);
	glVertex2f(370 , 130);
	glEnd();

    //4
    //pant
	glColor3f(0, 1, 1);
	glBegin(GL_QUADS);
	glVertex2f(386 , 100);
	glVertex2f(400 , 100);
	glVertex2f(400 , 120);
	glVertex2f(386 , 120);
	glEnd();
	//shirt
    glColor3f(1, 1 , 1);
	glBegin(GL_QUADS);
	glVertex2f(386 , 121);
	glVertex2f(400 , 121);
	glVertex2f(400 , 130);
	glVertex2f(386 , 130);
	glEnd();


//couple3
	//5
    //pant
	glColor3f(1, 0, 1);
	glBegin(GL_QUADS);
	glVertex2f(770 , 100);
	glVertex2f(785 , 100);
	glVertex2f(785 , 120);
	glVertex2f(770 , 120);
	glEnd();
	//shirt
    glColor3f(1, 1 , 1);
	glBegin(GL_QUADS);
	glVertex2f(770 , 121);
	glVertex2f(785 , 121);
	glVertex2f(785 , 130);
	glVertex2f(770 , 130);
	glEnd();

    //6
    //pant
	glColor3f(0, 0, 1);
	glBegin(GL_QUADS);
	glVertex2f(786 , 100);
	glVertex2f(800 , 100);
	glVertex2f(800 , 120);
	glVertex2f(786 , 120);
	glEnd();
	//shirt
    glColor3f(1, 1 , 1);
	glBegin(GL_QUADS);
	glVertex2f(786 , 121);
	glVertex2f(800 , 121);
	glVertex2f(800 , 130);
	glVertex2f(786 , 130);
	glEnd();


	// Traveler3
	//pant
	glColor3f(1, 1, 0);
	glBegin(GL_POLYGON);
	glVertex2f(960 - i*.8, 100);
	glVertex2f(970 - i*.8, 100);
	glVertex2f(970 - i*.8, 125);
	glVertex2f(960 - i*.8, 125);
	glEnd();

	//shirt
	glColor3f(1, 0, 0);
    glBegin(GL_POLYGON);
	glVertex2f(960 - i*.8, 125);
	glVertex2f(970 - i*.8, 125);
	glVertex2f(970 - i*.8, 140);
	glVertex2f(960 - i*.8, 140);
	glEnd();

//no birds



    glFlush ();
}



void Rain()
{
    glPushMatrix();
    glTranslatef(c1xp,(-1)*p1yp,0);
    glColor3ub(103,155,176);
    for(int j=0;j<20*160;j+=20)
    {
        for(int i=0;i<20*160;i+=20)
        {
            glBegin(GL_LINES);
            glVertex2f(0+i+j,0+i);
            glVertex2f(-5.5+i+j,10+i);
            glEnd();

            glBegin(GL_LINES);
            glVertex2f(0+i-j,0+i);
            glVertex2f(-5.5+i-j,10+i);
            glEnd();
        }
    }
    glPopMatrix();
}

void idle()
{
glClearColor(1.0,1.0,1.0,1.0);
if(c==0 )
 {

	 i+=2;

     m+=0.2;
 }


if(c==3){
i-=10;
}

if(c==2){
i-=i;

}

else
 {

     i+=SPEED/10;

     m+=0.2;

 }
if(i>1630)
	 i=0.0;
if(m>80){
	 m=0.0;
	 w=0;
}
glutPostRedisplay();

}

void Raining()
{
    if(r==0)
    {
        r=1;
    }else
    {
        r=0;
    }
}

void mouse(int button,int state,int x,int y)
{
    switch(button)
    {
    case GLUT_RIGHT_BUTTON:
        if(state==GLUT_DOWN)
        Raining();
        break;
    default:
        break;
    }
}



void myinit()
{
glClearColor(1.0,1.0,1.0,1.0);
glColor3f(0.0,0.0,1.0);
glPointSize(2.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0, 960.0, 0.0, 642.0);
}



void display_day()
{


glClear(GL_COLOR_BUFFER_BIT);
draw_object();
 if(r==1)
    {
        Rain();
    }
glFlush();
}


void display_night()
{


glClear(GL_COLOR_BUFFER_BIT);
draw_object_night();
 if(r==1)
    {
        Rain();
    }
glFlush();
}

void keyboardFunc( unsigned char key, int x, int y )
{
switch( key )
    {

		case 'S':
	case 's':
 i=0.0;
 m=0.0;


 c=1;
	break;

	case 'w':
	case 'W':
	c=2;
	break;
case 'a':
case 'A':
	c=1;
break;

	case 'D':
	case 'd':
		c=0;
		break;

		case 'q':
	case 'Q':
		c=3;
		break;

case 'n': glutDisplayFunc(display_night);
break;
case 'm': glutDisplayFunc(display_day);
break;
    };

}




int main(int argc,char** argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glutInitWindowSize (1200, 700);
    glutInitWindowPosition (0, 0);
	glutCreateWindow("National Assembly Building");
	glutDisplayFunc(display_day);
	glutTimerFunc(100, updatever, 0);
    glutTimerFunc(100, updatevernight, 0);
	glutIdleFunc(idle);
	glutKeyboardFunc(keyboardFunc);
    glutMouseFunc(mouse);
	myinit();
    //glutTimerFunc(1000,update,0);
	glutMainLoop();
	return 0;
}









