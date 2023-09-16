#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS];    //missing underline for N_ELEMENTS
    std::cout << "1-100 ertekek duplazasa" ; //missing ; and misused ' instead of ""
    for (int i = 0; i<100; i++)                //missing statement 2 and statement 3
    {
        b[i] = i * 2;
    }
    for (int i = 0; i<100; i++)         //infinite loop if leaved like this
    {
        std::cout << "Ertek:";  // missing ;
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag = 0;  //  missing initialization
    for (int i = 0; i < N_ELEMENTS; i++)        //needs a ; after N_ELEMENTS
    {
        atlag += b[i];                          //missing ;
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
