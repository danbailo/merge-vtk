/*! \mainpage My Personal Index Page
 *
 * \section intro_sec Introduction
 *
 * This is the introduction.
 *
 * \section install_sec Installation
 *
 * \subsection step1 Step 1: Opening the box
 *
 * etc...
 */

#include <iostream>
#include "polydata.h"
#include "polygon.h"
#include "point.h"

using namespace std;

int main(int argc, char const *argv[]){
    
    Polydata P;

    cout << "Points" << endl;

    P.polydata_point("points_sphere.txt");
    P.print_point();

    cout << endl;

    cout << "Polygons" << endl;

    P.polydata_polygon("polygons_sphere.txt");
    P.print_polygon();
    // printf("%i\n",P.size());

    P.saveToFile("esfera_final.vtk");
    return 0;
}
