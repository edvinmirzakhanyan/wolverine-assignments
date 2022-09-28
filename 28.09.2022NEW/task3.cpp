#include <iostream>
#include <fstream>

int main ()
{
    std::ifstream fin;
    std::ofstream fout;

    fin.open("input.txt");
    fout.open("output.txt");

    while (!fin.eof())
    {
        std::string txt;
        std::string split;
        getline(fin,txt);
        int size = txt.size();

        for (int i = 0; i < size; ++i)
        {
            if (txt[i] != ' ' && txt[i] != ',')
            {
                split += txt[i];
                if (i == size - 1) 
                {
                    fout << split;
                }
                continue;
            }
            split += '\n';
            fout << split;
            split = "";
        }
    }
    fin.close();
    fout.close();
}