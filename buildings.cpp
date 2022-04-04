
#include <windows.h>
#include <GL/glut.h>



void display1() {
glClearColor(1.0f, 1.0f, 1.0f, 0.0f);
glClear(GL_COLOR_BUFFER_BIT);

glBegin(GL_QUADS);///road 1
glColor3ub(200, 194, 174);

glVertex2f(1.0f,-1.0f);
glVertex2f(-1.0f,-1.0f);
glVertex2f(-1.0f,-0.70f);
glVertex2f(1.0f,-0.70f);
glEnd();

glBegin(GL_QUADS);///road 2
glColor3ub(93, 101, 90);

glVertex2f(1.0f,-0.70f);
glVertex2f(-1.0f,-0.70f);
glVertex2f(-1.0f,-0.50f);
glVertex2f(1.0f,-0.50f);
glEnd();


glBegin(GL_QUADS);///road 3
glColor3ub(200, 194, 174);
glVertex2f(1.0f,-0.50f);
glVertex2f(-1.0f,-0.50f);
glVertex2f(-1.0f,-0.30f);
glVertex2f(1.0f,-0.30f);
glEnd();


glBegin(GL_QUADS);///sky
glColor3ub(191, 230, 232);
glVertex2f(1.00f,-0.30f);
glVertex2f(-1.00f,-0.30f);
glVertex2f(-1.00f,1.0f);
glVertex2f(1.00f,1.0f);
glEnd();
////////////////////////////////////////
            ///back side bari

glBegin(GL_QUADS);///bari 1
glColor3ub(145, 173, 176);
glVertex2f(0.99f,-0.30f);
glVertex2f(0.80f,-0.30f);
glVertex2f(0.80f,-0.09f);
glVertex2f(0.99f,-0.09f);
glEnd();

glBegin(GL_QUADS);///bari 2
glColor3ub(145, 173, 176);
glVertex2f(0.97f,-0.30f);
glVertex2f(0.80f,-0.30f);
glVertex2f(0.80f,0.05f);
glVertex2f(0.97f,0.05f);
glEnd();

glBegin(GL_QUADS);///bari 3
glColor3ub(145, 173, 176);
glVertex2f(0.93f,-0.30f);
glVertex2f(0.80f,-0.30f);
glVertex2f(0.80f,0.10f);
glVertex2f(0.93f,0.10f);
glEnd();

glBegin(GL_QUADS);///bari 4
glColor3ub(145, 173, 176);
glVertex2f(0.92f,-0.30f);
glVertex2f(0.89f,-0.30f);
glVertex2f(0.89f,0.15f);
glVertex2f(0.92f,0.15f);
glEnd();

glBegin(GL_QUADS);///bari 5
glColor3ub(145, 173, 176);
glVertex2f(0.75f,-0.30f);
glVertex2f(0.80f,-0.30f);
glVertex2f(0.80f,0.20f);
glVertex2f(0.75f,0.20f);
glEnd();
////////////////////////////////////////////////////////////
/////////////////////////////////////
glBegin(GL_QUADS);///bari 1
glColor3ub(94, 143, 138);
glVertex2f(0.97f,-0.30f);
glVertex2f(0.90f,-0.30f);
glVertex2f(0.90f,-0.10f);
glVertex2f(0.97f,-0.10f);
glEnd();

glBegin(GL_QUADS);///bari 1
glColor3ub(94, 143, 138);
glVertex2f(0.91f,-0.30f);
glVertex2f(0.96f,-0.30f);
glVertex2f(0.96f,0.02f);
glVertex2f(0.91f,0.02f);
glEnd();

glBegin(GL_QUADS);///bari 1
glColor3ub(94, 143, 138);
glVertex2f(0.95f,0.02f);
glVertex2f(0.92f,0.02f);
glVertex2f(0.92f,0.05f);
glVertex2f(0.95f,0.05f);
glEnd();

glBegin(GL_QUADS);///bari 1
glColor3ub(255, 255, 255);
glVertex2f(0.965f,-0.29f);
glVertex2f(0.905f,-0.29f);
glVertex2f(0.905f,-0.11f);
glVertex2f(0.965f,-0.11f);
glEnd();

glBegin(GL_QUADS);///bari 1
glColor3ub(255, 255, 255);
glVertex2f(0.915f,-0.09f);
glVertex2f(0.955f,-0.09f);
glVertex2f(0.955f,0.015f);
glVertex2f(0.915f,0.015f);
glEnd();

glLineWidth(03);
glBegin(GL_LINES);
glColor3ub(94, 143, 138);

    glVertex2f(0.915,-0.30);
    glVertex2f(0.915,-0.10);


     glVertex2f(0.925,-0.30);
    glVertex2f(0.925,0.02);

     glVertex2f(0.935,-0.30);
    glVertex2f(0.935,0.02);

    glVertex2f(0.945,-0.30);
    glVertex2f(0.945,0.02);

     glVertex2f(0.955,-0.30);
    glVertex2f(0.955,-0.10);

///////////////////////////////////////////////
         ///right to left line

          glVertex2f(0.90,-0.275);
          glVertex2f(0.97,-0.275);

         glVertex2f(0.90,-0.255);
         glVertex2f(0.97,-0.255);

          glVertex2f(0.90,-0.235);
          glVertex2f(0.97,-0.235);

          glVertex2f(0.90,-0.21);
          glVertex2f(0.97,-0.21);

          glVertex2f(0.90,-0.185);
          glVertex2f(0.97,-0.185);

          glVertex2f(0.90,-0.16);
          glVertex2f(0.97,-0.16);

          glVertex2f(0.90,-0.135);
          glVertex2f(0.97,-0.135);

          glVertex2f(0.91,-0.07);
          glVertex2f(0.96,-0.07);

          glVertex2f(0.91,-0.05);
          glVertex2f(0.96,-0.05);


          glVertex2f(0.91,-0.03);
          glVertex2f(0.96,-0.03);

          glVertex2f(0.91,-0.01);
          glVertex2f(0.96,-0.01);

glEnd();
////////////////////////////////////////////////
               ///bari 2
glBegin(GL_QUADS);///bari 2
glColor3ub(185, 52, 48);
glVertex2f(0.895f,-0.30f);
glVertex2f(0.75f,-0.30f);
glVertex2f(0.75f,0.12f);
glVertex2f(0.895f,0.12f);
glEnd();

glBegin(GL_QUADS);///bari 2
glColor3ub(185, 52, 48);
glVertex2f(0.88f,0.12f);
glVertex2f(0.77f,0.12f);
glVertex2f(0.77f,0.38f);
glVertex2f(0.88f,0.38f);
glEnd();

glBegin(GL_QUADS);///bari 2
glColor3ub(247, 251, 254);
glVertex2f(0.885f,-0.25f);
glVertex2f(0.76f,-0.25f);
glVertex2f(0.76f,0.11f);
glVertex2f(0.885f,0.11f);
glEnd();

glBegin(GL_QUADS);///bari 2
glColor3ub(247, 251, 254);
glVertex2f(0.87f,0.13f);
glVertex2f(0.78f,0.13f);
glVertex2f(0.78f,0.37f);
glVertex2f(0.87f,0.37f);
glEnd();

glLineWidth(05);
glBegin(GL_LINES);
glColor3ub(185, 52, 48);

    glVertex2f(0.87,-0.30);
    glVertex2f(0.87,0.12);

     glVertex2f(0.85,-0.30);
    glVertex2f(0.85,0.37);

     glVertex2f(0.83,-0.30);
    glVertex2f(0.83,0.375);


     glVertex2f(0.81,-0.30);
    glVertex2f(0.81,0.375);

     glVertex2f(0.79,-0.30);
    glVertex2f(0.79,0.375);

     glVertex2f(0.77,-0.30);
    glVertex2f(0.77,0.12);
///////////////////////////////////////////////////////
//////////////////////////////////////////////////////
                ///right to left


    glVertex2f(0.89,-0.23);
    glVertex2f(0.75,-0.23);

     glVertex2f(0.89,-0.20);
    glVertex2f(0.75,-0.20);

    glVertex2f(0.89,-0.17);
    glVertex2f(0.75,-0.17);

    glVertex2f(0.89,-0.14);
    glVertex2f(0.75,-0.14);

    glVertex2f(0.89,-0.11);
    glVertex2f(0.75,-0.11);

    glVertex2f(0.89,-0.20);
    glVertex2f(0.75,-0.20);

    glVertex2f(0.89,-0.20);
    glVertex2f(0.75,-0.20);

    glVertex2f(0.89,-0.20);
    glVertex2f(0.75,-0.20);



glEnd();



glFlush();
}



int main(int argc, char** argv) {
glutInit(&argc, argv);
glutCreateWindow("Test");
glutInitWindowSize(700,700);
glutDisplayFunc(display1);
glutMainLoop();
return 0;
}
