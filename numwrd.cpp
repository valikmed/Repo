#include<iostream>
#include<cstring>

//“added some really great code”
//not so good as it could be but OK
//some configuration reading
//one more nice code block


int Arvg(int argc, char* argv[])
{

    int i;

    for (i = 0; i < argc; i++)
    {

        if (std::strcmp(argv[i], "-c") == 0)
        {

            printf("%d\n", argc);
            break;

        }

    }

    return 0;
}

int main()
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

    return 0;
}