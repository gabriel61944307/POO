/*
 * Trabalho 4 de programação de computadores
 * 
 * Gabriel Rodrigues Malaquias, 758906, 2018.
 */

#ifndef CESAR_H
#define CESAR_H
#include <string>

using namespace std;

namespace cifra{
    class Cesar {
        public:
            Cesar();
            virtual ~Cesar();
            encripte(string gileIn, string fileOut, int k);
        private:
            string fileIn, fileOut;
            int k;
        };
}

#endif /* CESAR_H */
