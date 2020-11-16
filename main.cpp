#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
void displayMe(void) //kerangka garis yang sudah dihubungkan beserta warna
{
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POLYGON);
    glColor3b(120,120,0);//code warna kuning
    glVertex2f(6.84, 4.12);//N
    glVertex2f(9.98, 5.72);//A
    glVertex2f(9, 7);//B
    glVertex2f(7, 8);//C
    glVertex2f(5, 8);//D
    glVertex2f(3.48, 7.04);//E
    glVertex2f(2.46, 5.68);//F
    glVertex2f(2, 4.42);//G
    glVertex2f(2.38, 3.12);//H
    glVertex2f(3.36, 1.92);//I
    glVertex2f(5, 1);//J
    glVertex2f(7, 1);//K
    glVertex2f(8.96, 1.84);//L
    glVertex2f(10, 3.34);//M
    glEnd();
    glutSwapBuffers();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
    glutInitWindowSize(728, 728);//ukuran window
    glutInitWindowPosition(0,0);
    glutCreateWindow("Hello world!");
    glutDisplayFunc(displayMe);
    gluOrtho2D(0, 12, 0, 9);//ukuran gambar yang ditampilkan pada window
    glutMainLoop();
    return 0;
}
