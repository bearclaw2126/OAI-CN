#include <fstream>
#include <iostream>
#include <complex>

//Open file using if stream in binary format
//
int main(){
std::ifstream file("waveform.iq", std::ios::binary);
std::ofstream outfile("waveform.txt");
std::complex<double> sample;

//Read file and turn to complex number
//Since the IQ file is interleaved the first value is real and the second is the imaginary, and so on

//Done using pointers
char* buffer = new char[sizeof(double) * 2];
//While below reads the file every two terms and assigns to a ptr value which is a cast buffer
while (file.read(buffer,sizeof(double) * 2)){
    double *ptr = reinterpret_cast<double*>(buffer);
    sample.real(*ptr);
    sample.imag(*(ptr + 1));
    outfile << sample << '\n' ;
   
}
 delete[] buffer; // free the memory allocated for the buffer
    return 0;
}