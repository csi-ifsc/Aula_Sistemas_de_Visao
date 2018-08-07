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
    //Criando Imagem
    //Imagem preta com um ponto branco no centro
    //1 p = tamanho
    //2 p = bits por pixel
    //3 p = canais
    IplImage* imagem = cvCreateImage(cvSize(800,600),8,1);

    //Pintar imagem
    for(int x = 0; x < imagem->width; x++){
        for(int y = 0; y < imagem->height;y++){
            //Os dois fazem a mesma coisa
            //imagem->imageData[y * imagem->width + x] = 100;
            //setGray(imagem, x, y, 200);

            if((x == imagem->width / 2) && (y == imagem->height / 2)){
                setGray(imagem, x, y, 255);

            }else{
                setGray(imagem, x, y, 0);

            }
        }
    }

    cvShowImage("Janela1", imagem);

    cvWaitKey();

}

int main(){
    Exemplo();
	return 0;
}
