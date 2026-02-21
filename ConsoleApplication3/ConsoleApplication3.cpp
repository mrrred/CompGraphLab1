#include <iostream>
#include <vector>

#include <windows.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>

int index = 0;
// Forward declarations so the vector can reference the functions below
void  displaySolidSphere(void);
void  displayWireSphere(void);
void  displaySolidCube(void);
void  displayWireCube(void);
void  displaySolidTorus(void);
void  displayWireTorus(void);
void  displaySolidIcosahedron(void);
void  displayWireIcosahedron(void);
void  displaySolidOctahedron(void);
void  displayWireOctahedron(void);
void  displaySolidTetrahedron(void);
void  displayWireTetrahedron(void);
void  displaySolidDodecahedron(void);
void  displayWireDodecahedron(void);
void  displaySolidCone(void);
void  displayWireCone(void);
void  displaySolidTeapot(void);
void  displayWireTeapot(void);

std::vector<void(*)(void)> displayVector = {
	displaySolidSphere,
	displayWireSphere,
	displaySolidCube,
	displayWireCube,
	displaySolidTorus,
	displayWireTorus,
	displaySolidIcosahedron,
	displayWireIcosahedron,
	displaySolidOctahedron,
	displayWireOctahedron,
	displaySolidTetrahedron,
	displayWireTetrahedron,
	displaySolidDodecahedron,
	displayWireDodecahedron,
	displaySolidCone,
	displayWireCone,
	displaySolidTeapot,
	displayWireTeapot
};


void resize(int width, int height)
{
}

/*
void glutWireSphere(GLdouble radius, GLint slices, GLint stacks);
void glutSolidSphere(GLdouble radius, GLint slices, GLint stacks);
void glutWireCube(GLdouble size);
void glutSolidCube(GLdouble size);
void glutWireTorus(GLdouble innerRadius, GLdouble outerRadius,
GLint nsides, GLint rings);
void glutSolidTorus(GLdouble innerRadius, GLdouble outerRadius,
GLint nsides, GLint rings);
void glutWireIcosahedron(void);
void glutSolidIcosahedron(void);
void glutWireOctahedron(void);
void glutSolidOctahedron(void);
void glutWireTetrahedron(void);
void glutSolidTetrahedron(void);
void glutWireDodecahedron(GLdouble radius);
void glutSolidDodecahedron(GLdouble radius);
void glutWireCone(GLdouble radius, GLdouble height, GLint slices,
GLint stacks);
void glutSolidCone(GLdouble radius, GLdouble height, GLint slices,
GLint stacks);
void glutWireTeapot(GLdouble size);
void glutSolidTeapot(GLdouble size);
*/

void  displaySolidSphere(void)
{
	glColor3d(1.0, 1.0, 0.0);
	glutSolidSphere(1.0, 24, 24);
	glFlush();
}

void  displayWireSphere(void)
{
	glColor3d(1.0, 1.0, 0.0);
	glutWireSphere(1.0, 16, 16);
	glFlush();
}

void  displaySolidCube(void)
{
	glColor3d(1.0, 1.0, 0.0);
	glutSolidCube(1.2);
	glFlush();
}

void  displayWireCube(void)
{
	glColor3d(1.0, 1.0, 0.0);
	glutWireCube(1.2);
	glFlush();
}

void  displaySolidTorus(void)
{
	glColor3d(1.0, 1.0, 0.0);
	glutSolidTorus(0.4, 0.9, 24, 24);
	glFlush();
}

void  displayWireTorus(void)
{
	glColor3d(1.0, 1.0, 0.0);
	glutWireTorus(0.4, 0.9, 18, 18);
	glFlush();
}

void  displaySolidIcosahedron(void)
{
	glColor3d(1.0, 1.0, 0.0);
	glutSolidIcosahedron();
	glFlush();
}

void  displayWireIcosahedron(void)
{
	glColor3d(1.0, 1.0, 0.0);
	glutWireIcosahedron();
	glFlush();
}

void  displaySolidOctahedron(void)
{
	glColor3d(1.0, 1.0, 0.0);
	glutSolidOctahedron();
	glFlush();
}

void  displayWireOctahedron(void)
{
	glColor3d(1.0, 1.0, 0.0);
	glutWireOctahedron();
	glFlush();
}

void  displaySolidTetrahedron(void)
{
	glColor3d(1.0, 1.0, 0.0);
	glutSolidTetrahedron();
	glFlush();
}

void  displayWireTetrahedron(void)
{
	glColor3d(1.0, 1.0, 0.0);
	glutWireTetrahedron();
	glFlush();
}

void  displaySolidDodecahedron(void)
{
	glColor3d(1.0, 1.0, 0.0);
	glutSolidDodecahedron();
	glFlush();
}

void  displayWireDodecahedron(void)
{
	glColor3d(1.0, 1.0, 0.0);
	glutWireDodecahedron();
	glFlush();
}

void  displaySolidCone(void)
{
	glColor3d(1.0, 1.0, 0.0);
	glutSolidCone(0.8, 1.2, 24, 24);
	glFlush();
}

void  displayWireCone(void)
{
	glColor3d(1.0, 1.0, 0.0);
	glutWireCone(0.8, 1.2, 16, 16);
	glFlush();
}

void  displaySolidTeapot(void)
{
	glColor3d(1.0, 1.0, 0.0);
	glutSolidTeapot(1.0);
	glFlush();

}

void  displayWireTeapot(void)
{
	glColor3d(1.0, 1.0, 0.0);
	glutWireTeapot(1.0);
	glFlush();
}



void init(void)
{
	glEnable(GL_COLOR_MATERIAL);
	glEnable(GL_LIGHTING);
	glEnable(GL_LIGHT0);
	glEnable(GL_DEPTH_TEST);
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-5.0, 5.0, -5.0, 5.0, 2.0, 12.0);
	glMatrixMode(GL_MODELVIEW);
	gluLookAt(0, 0, 5, 0, 1, 0, 0, 1, 0);

}

void keyboard(unsigned char key, int x, int y) {
	if (key == 13) // 13 = Enter
	{
		index++;
		
		if (index >= displayVector.size()) index = 0;

		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
		glutDisplayFunc(displayVector[index]);
		glutPostRedisplay();
	}

	if (key == 27) // 27 = ESC
		exit(0);
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowPosition(50, 10);
	glutInitWindowSize(400, 400);
	glutCreateWindow("Hello");
	glutReshapeFunc(resize);
	init();
	glutDisplayFunc(displaySolidSphere);
	glutKeyboardFunc(keyboard);
	glutMainLoop();
	return 0;
}
