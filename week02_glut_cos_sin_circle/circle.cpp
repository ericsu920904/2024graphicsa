#include <GL/glut.h>
#include <math.h>
void display()
{
    glBegin(GL_POLYGON);
    for(float a=0;a<=3.1415*2;a+=0.1){
        glVertex2f(0.6*cos(a)+0.5,0.6*sin(a)+0.5);

    }
    glEnd();
    glutSwapBuffers();

}
int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("week02_glut_color_teapot");
    glutDisplayFunc(display);
    glutMainLoop();
}
