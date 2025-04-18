#include <iostream>

#define CRUZEIRO 1
#define FLAMENGO 2
#define PALMEIRAS 3
#define GREMIO 4
#define DESCONHECIDO 0

int main()
{
    std::string team;
    int teamConst = DESCONHECIDO;

    std::cout << "Digite o nome do time de futebol: ";
    std::cin >> team;

    for (int i = 0; i < team.length(); i++)
    {
        if (team[i] >= 'A' && team[i] <= 'Z')
        {
            team[i] = team[i] + 32;
        }
    }

    if (team == "cruzeiro")
        teamConst = CRUZEIRO;
    else if (team == "flamengo")
        teamConst = FLAMENGO;
    else if (team == "palmeiras")
        teamConst = PALMEIRAS;
    else if (team == "gremio")
        teamConst = GREMIO;

    switch (teamConst)
    {
    case CRUZEIRO:
    std::cout << "MG" << std::endl;
        break;
    case FLAMENGO:
    std::cout << "RJ" << std::endl;
        break;
    case PALMEIRAS:
    std::cout << "SP" << std::endl;
        break;
    case GREMIO:
    std::cout << "RS" << std::endl;
        break;
    default:
    std::cout << "?" << std::endl;
    }

    return 0;


    // string
    // for (int i = 0; i < string.length(); i++)
    // {
    //     string+= (toupper(string[i])*(i+i));    
    // }
    
}
