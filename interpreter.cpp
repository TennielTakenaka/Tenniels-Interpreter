#include <iostream>
#include <string>
#include <fstream>

using namespace std;
void runFile(string path)
{
    ifstream file;
    file.open(path, ios::in);

    if (file.is_open())
    {
        cout << "file is open" << endl;
    }
}

void runPrompt()
{
    string filePath = "";
    cout << "> ";
    cin >> filePath;

    ifstream file;
    file.open(filePath, ios::in);
    if (file.is_open())
    {
        cout << "file is open" << endl;
    }
}

int main(int argc, char *argv[])
{
    if (argc > 2)
    {
        cout << "Usage: jlox [script]" << endl;
    }
    else if (argc == 2)
    {
        runFile(argv[1]);
    }
    else
    {
        runPrompt();
    }
    return 0;
}
