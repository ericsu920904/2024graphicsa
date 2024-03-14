#include <GL/glut.h>
#include <stdio.h>
float angle=0,oldX=0;
void display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glPushMatrix();
        glRotatef(angle,0,0,1);
        glutSolidTeapot(0.3);
    glPopMatrix();
    glutSwapBuffers();
}
void keyboard(unsigned char key,int x,int y)
{
    printf("key: %c x: %d y:%d\n",key,x,y);
}
void mouse(int button,int stae,int x,int y)
{
    oldX=x;///當滑鼠按下時，記錄他的座標
}
void motion(int x,int y)
{
    angle+=(x-oldX);
    oldX=x;
    display();
}
int main(int argc,char*argv[])
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_DEPTH);
    glutCreateWindow("week04 keyboard mouse motion");
    glutDisplayFunc(display);
    glutKeyboardFunc(keyboard);///這一行
    glutMouseFunc(mouse);///在加這一行
    glutMotionFunc(motion);///在加這一行

    glutMainLoop();
}
