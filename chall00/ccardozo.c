#include <stdlib.h>

char *hv_rgb2hex(int r, int g, int b)
{   //Variables
    char    *rgb;
    char    *base = "0123456789abcdef";
    int     numbase = 16, auxrgb = 0, index = 0;
    // Crea un espacio de memoria
    if (!(rgb = (char *)malloc(255)))
        return (NULL);
    rgb[index++] = '#'; 
    if (r >= 0 && r <= 255) //verificamos que r cumpla la condicion
    {
        auxrgb = r / numbase; //generamos el indice para recorrer la variable "base"
        rgb[index++] = base[auxrgb]; 
        auxrgb = r % numbase;
        rgb[index++] = base[auxrgb];
    }
    if (g >= 0 && g <= 255)
    {
        auxrgb = g / numbase;
        rgb[index++] = base[auxrgb];
        auxrgb = g % numbase;
        rgb[index++] = base[auxrgb];
    }
    if (b >= 0 && b <= 255)
    {
        auxrgb = b / numbase;
        rgb[index++] = base[auxrgb];
        auxrgb = b % numbase;
        rgb[index++] = base[auxrgb];
    }
    rgb[index] = '\0';
    return (rgb);
}