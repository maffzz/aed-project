#include <iostream>
using namespace std;

class Suffix
{
private:
    const char *texto; // puntero al texto completo
    int posicion;      // posición donde comienza este sufijo

public:
    // constructor
    Suffix(const char *txt = nullptr, int pos = 0) : texto(txt), posicion(pos) {}

    // getters
    const char *getTexto() const { return texto; }
    int getPosicion() const { return posicion; }

    // comparación lexicográfica entre dos sufijos
    // retorna un valor negativo si este sufijo es menor, cero si son iguales, positivo si es mayor
    int comparar(const Suffix &otro) const
    {
        const char *s1 = texto + posicion;
        const char *s2 = otro.texto + otro.posicion;
        int i = 0;

        while (s1[i] != '\0' && s2[i] != '\0')
        {
            if (s1[i] != s2[i])
                return s1[i] - s2[i];
            i++;
        }

        // si uno es prefijo del otro, el más corto es menor
        if (s1[i] == '\0' && s2[i] == '\0')
            return 0;
        if (s1[i] == '\0')
            return -1;
        return 1;
    }

    // función para comparar este sufijo con un patrón
    // retorna negativo si sufijo < patrón, 0 si coinciden al inicio, positivo si sufijo > patrón
    int compararConPatron(const char *patron) const
    {
        const char *s = texto + posicion;
        int i = 0;

        while (s[i] != '\0' && patron[i] != '\0')
        {
            if (s[i] != patron[i])
                return s[i] - patron[i];
            i++;
        }
        // si se consumió todo el patrón, hay coincidencia
        if (patron[i] == '\0')
            return 0;

        // si el sufijo terminó primero, es menor
        if (s[i] == '\0')
            return -1;

        return 1;
    }
};

// clase que implementa el Suffix Array
class SuffixArray
{
private:
    const char *texto; // texto sobre el que se construye el suffix array
    int *sa;           // arreglo de sufijos
    int n;             // longitud del texto

    // función auxiliar para obtener la longitud de una cadena
    static int longitudCadena(const char *cadena) {
         int n = 0;
        while (cadena[n] != '\0')
        {n++;}
    return n;}

    // intercambia dos sufijos en el arreglo
    static void intercambiar(Suffix *arr, int i, int j) {
    Suffix temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
    }

    // partición para el quicksort
    static int particion(Suffix *arr, int inicio, int fin) {
        Suffix pivote = arr[fin];
    int i = inicio - 1;

    for (int j = inicio; j <= fin - 1; j++)
    {
        if (arr[j].comparar(pivote) <= 0)
        {
            i++;
            intercambiar(arr, i, j);
        }
    }
        intercambiar(arr, i + 1, fin);
    return i + 1;
    }

    // ordenamiento quicksort para los sufijos
    static void quicksort(Suffix* arr, int inicio, int fin) {
        if (inicio < fin) {
            int p = particion(arr, inicio, fin);
            quicksort(arr, inicio, p - 1);
            quicksort(arr, p + 1, fin);
        }
    }

    // construye el suffix array
    void construir() {
        // crear arreglo de sufijos
        Suffix* sufijos = new Suffix[n];

        // inicializar sufijos
        for (int i = 0; i < n; i++) {
            sufijos[i] = Suffix(texto, i);
        }

        // ordenar sufijos
        quicksort(sufijos, 0, n - 1);

        // guardar las posiciones ordenadas
        for (int i = 0; i < n; i++) {
            sa[i] = sufijos[i].getPosicion();
        }

        delete[] sufijos;
    }

public:
    // constructor
    SuffixArray(const char *txt)
    {
        texto = txt;
        n = longitudCadena(texto);
        sa = new int[n];
        construir();
    }

    // destructor
    ~SuffixArray()
    {
        delete[] sa;
    }

    // busca un patrón en el texto usando búsqueda binaria
    // retorna la posición de la primera ocurrencia o -1 si no se encuentra
    int buscar(const char *patron) const {}

    // imprime el suffix array
    void imprimir() const {}

    // obtiene el arreglo de sufijos
    const int *obtenerSuffixArray() const {}

    // obtiene la longitud del suffix array
    int obtenerLongitud() const {}
};

int main()
{

    return 0;
}
