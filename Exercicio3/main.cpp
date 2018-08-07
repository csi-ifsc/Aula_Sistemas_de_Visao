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
    //Carregar imagem
    //Carrega imagem colorida CV_LOAD_IMAGE_COLOR
    //Carrega imagem cinza CV_LOAD_IMAGEM_GRAYSCALE
    IplImage* imagem = cvLoadImage("..\\Imagens\\lena.jpg", CV_LOAD_IMAGE_GRAYSCALE);
    cvShowImage("Janela", imagem);
    cvWaitKey();
    for(int x=0; x<imagem->width;x++){
        for(int y=0; y<imagem->height;y++){
            uchar cor = getGray(imagem,x,y);
            cor = cor*0.5;
            setGray(imagem,x,y,cor);
        }
    }
    cvShowImage("Janela", imagem);
    cvWaitKey();
    cvSaveImage("..\\Imagens\\lenaEscura.jpg",imagem);
}

int main(){
    Exemplo();
	return 0;
}
