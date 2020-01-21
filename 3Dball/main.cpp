/*
 * GLUT 3D shapes
 *
 * Written by Chandu Kurapati
 *
 * This program is show the 3D balls with GLUT.
 *
 */

#include<windows.h>

#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include "3Dball.h"

int main(int argc, char *argv[])
{
    /* Initialize the GLUT library */
    glutInit(&argc, argv);

    /* Set Initial window size */
    glutInitWindowSize(1500,1000);

    /* Set Initial window position */
    glutInitWindowPosition(10,10);

    /* Initial display mode */
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);

    /* Display 3D balls */
    glut3Dball();
    glutMainLoop();

    return EXIT_SUCCESS;
}
