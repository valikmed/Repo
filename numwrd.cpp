#include<iostream>
#include<cstring>

//“added some really great code”
//not so good as it could be but OK
//some configuration reading
//one more nice code block


int main(int argc, char* argv[])
{
    
    int i;
 
    for (i = 0; i < argc; i++)
    {

        if (std::strcmp(argv[i], "-h")==0)
             {

                std::cout << argv[0] << "\n";
                break;

             }

    }
    
}

void main()
{

    char str[100];
    int i, numwrds = 0;

    std::cout << "Enter String : ";
    std::cin.getline(str, 100);


    for (int i = 0; str[i] != '\0'; i++)
    {

        if (str[i] == ' ')
            numwrds++;

    }

    std::cout << "Total words = " << numwrds + 1;

}