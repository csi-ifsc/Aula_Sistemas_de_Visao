/*
 * Uteis.h
 *
 *  Created on: 22/08/2014
 *      Author: maustiva
 */

#ifndef UTEIS_H_
#define UTEIS_H_


/****************   Funções utilitárias para acessar pixeis em rgb ou cinza *********************************/
void getRGB(IplImage* apoImage, int x, int y, uchar *r, uchar *g, uchar *b)
{
	*b = (uchar) apoImage->imageData[apoImage->widthStep * y + x * 3];
	*g = (uchar) apoImage->imageData[apoImage->widthStep * y + x * 3 + 1];
	*r = (uchar) apoImage->imageData[apoImage->widthStep * y + x * 3 + 2];
}

void setRGB(IplImage* apoImage, int x, int y, uchar r, uchar g, uchar b)
{
	apoImage->imageData[apoImage->widthStep * y + x * 3] = b;
	apoImage->imageData[apoImage->widthStep * y + x * 3 + 1] = g;
	apoImage->imageData[apoImage->widthStep * y + x * 3 + 2] = r;
}

uchar getGray(IplImage* apoImage, int x, int y)
{
	return (uchar) apoImage->imageData[apoImage->widthStep * y + x];
}

void setGray(IplImage* apoImage, int x, int y, uchar value)
{
	apoImage->imageData[apoImage->widthStep * y + x] = value;
}

IplImage* getRed(IplImage* apoImage)
{
	IplImage* r = cvCreateImage(cvGetSize(apoImage), 8, 1);
	for (int x = 0; x < apoImage->width; x++)
	{
		for (int y = 0; y < apoImage->height; y++)
		{
			r->imageData[r->widthStep * y + x] = apoImage->imageData[apoImage->widthStep * y + x * 3 + 2];
		}

	}

	return r;
}
/************************************************************************************************************/



#endif /* UTEIS_H_ */
