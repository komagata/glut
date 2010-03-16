#include <GLUT/glut.h>

void display(void)
{
  glClear(GL_COLOR_BUFFER_BIT);
  glColor3d(1.0, 0.0, 0.0);
  glBegin(GL_POLYGON);
    glColor3d(1.0, 0.0, 0.0); // red
    glVertex2d(-0.9, -0.9);
    glColor3d(0.0, 1.0, 0.0); // green
    glVertex2d(0.9, -0.9);
    glColor3d(0.0, 0.0, 1.0); // blue
    glVertex2d(0.9, 0.9);
    glColor3d(1.0, 1.0, 0.0); // yellow
    glVertex2d(-0.9, 0.9);
  glEnd();
  glFlush();
}

void resize(int w, int h)
{
  glViewport(0, 0, w, h);
  glLoadIdentity();
  glOrtho(-w / 200.0, w / 200.0, -h / 200.0, h / 200.0, -1.0, 1.0);
}

void init(void)
{
  glClearColor(1.0, 1.0, 1.0, 1.0);
}

int main(int argc, char *argv[])
{
  glutInit(&argc, argv);
  glutInitDisplayMode(GLUT_RGBA);
  glutCreateWindow(argv[0]);
  glutDisplayFunc(display);
  glutReshapeFunc(resize);
  init();
  glutMainLoop();
  return 0;
}
