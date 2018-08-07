// S2I3D

// -----------------
// S2I - Intelligent Industrial Systems
// DAS - Department of Automation and Systems Engineering
// UFSC - Federal University of Santa Catarina
// -----------------
// http://s2i.ufsc.br/
//
//
// AUTHORS:
// Mauricio Edgar Stivanello 	maustiva
//
//

#include <opencv2/opencv.hpp>
#include "stdio.h"
#include <iostream>
#include "Uteis.h"

using namespace cv;
using namespace std;

void Exemplo(){
    IplImage* imagemColorida = cvCreateImage(cvSize(800,600), 8, 3);
    for(int x = 0; x < imagemColorida->width; x++){
        for(int y = 0; y < imagemColorida->height;y++){
            //Os dois fazem a mesma coisa
            //imagem->imageData[y * imagem->width + x] = 100;
            //setGray(imagem, x, y, 200);

            if((x >=100)&&(x<=200)&&(y >= 100)&&(y<=200)){
                setRGB(imagemColorida, x, y,255,0,0);

            }else{
                setRGB(imagemColorida, x, y,0,0,0);

            }
        }
    }
    cvShowImage("Janela", imagemColorida);

    cvWaitKey();
}

int main(){
    Exemplo();
	return 0;
}
