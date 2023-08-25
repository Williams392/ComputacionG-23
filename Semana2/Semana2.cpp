
#include <GL/freeglut.h>
#include <math.h>

void dibujar() {

    glLoadIdentity();
    gluOrtho2D(0, 10, 0, 10);
    glClear(GL_COLOR_BUFFER_BIT); // Para limipiar

    /*
    glLineWidth(5);
    glBegin(GL_LINES);
       glColor3ub(255, 50, 30);
       glVertex2d(7, 2);
       glVertex2d(2, 7);
    glEnd();*/

    /*
    glLineWidth(5);
    glBegin(GL_LINE_STRIP);
       glColor3ub(55, 200, 80);
       glVertex2d(1, 7);
       glVertex2d(7, 7);
       glVertex2d(7, 2);
       glVertex2d(2, 7);
    glEnd();*/

    /*
    glLineWidth(5);
    glBegin(GL_LINE_LOOP);
       glColor3ub(55, 200, 80);
       glVertex2d(1, 1);
       glVertex2d(7, 7);
       glVertex2d(7, 2);
    glEnd();*/

    /*
    glLineWidth(5);
    glBegin(GL_POLYGON);
       glColor3ub(55, 200, 80);
       glVertex2d(1, 1);
       glColor3ub(200, 200, 80);
       glVertex2d(7, 7);
       glColor3ub(100, 200, 20);
       glVertex2d(7, 2);
    glEnd();*/

    /*
    glLineWidth(5);
       glBegin(GL_QUADS);
       glColor3ub(55, 200, 80);
       glVertex2d(1, 1);
       glVertex2d(1, 7);
       glColor3ub(10, 20, 80);
       glVertex2d(7, 7);
       glVertex2d(7, 1);
    glEnd();*/

    // Manual, hacer figuras:
    float radio = 4;
    float cx, cy;

    glColor3ub(500, 200, 80);

    glBegin(GL_POINTS); // -> en puntos
    //glBegin(GL_POLYGON); // -> mas rellenos
      
    for (double i = 0; i < 3.14 * 2; i += 0.01) {
        cx = radio * cos(i);
        cy = radio * sin(i);

        glVertex2d(5 + cx, 5 + cy);
    }

    glEnd();
    glFlush();
}


int main(int argc, char * argv[]) {

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(300, 300);
    glutInitWindowPosition(50, 50);
    glutCreateWindow("Semana 2 - Primitivas");
    glutDisplayFunc(dibujar);
    glutMainLoop();
    return 0;

}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
