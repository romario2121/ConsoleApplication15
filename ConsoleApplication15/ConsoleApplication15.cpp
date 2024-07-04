1)#include <iostream>
#include <fstream>
#include <cctype>

int main(int argc, char* argv[])
{

    if (argc != 2) 
    {
        std::cerr << "Using: " << argv[0] << " <file name>\n";
        return 1;
    }

    std::ifstream file(argv[1]);
    if (!file.is_open())
    {
        std::cerr << "Failed to open file: " << argv[1] << "\n";
        return 1;
    }

    char ch;
    while (file.get(ch))
    {
       
        if (std::isprint(ch)) {
            std::cout << ch;
        }
    }

    file.close();

    return 0;
}

////////////////////////////////////////////////////////////////

2)#include <iostream>


int main(int argc, char* argv[]) 
{

    for (int i = argc - 1; i > 0; --i) 
    {
       std:: cout << argv[i] << " ";
    }
    std::cout <<std:: endl;
    return 0;
}

//////////////////////////////////////////////////////////////////


3) cout и endl нужно использовать с пространством имен std



4) a.#include <iostream>

int main()
{
    std::cout << "Hello world!" << std::endl;
    return 0;
}

b.#include <iostream>

using std::cout;
using std::endl;

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}

c.#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
