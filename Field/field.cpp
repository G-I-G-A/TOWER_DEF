#include "field.h"

using namespace std;


Field::Field() {
}

Field::~Field() {}

void Field::getTilesFromFile()
{
    string lineR;
    ifstream tile;

    tile.open ("C:/Qt/Projects/TOWERDEF/Assets/ExternFiles/setupField.txt");

    if (tile.is_open()) {
        while (getline(tile,lineR)) {
            for (int i = 0; lineR[i] != 0; ++i) {
                allTiles.push_back(lineR[i]); }
        }
        tile.close();
    }
//    for (unsigned long long i = 0; i < allTiles.size(); i++) {
//                cout << allTiles[i] << " ";
//                cout.flush();
//    }
}

void Field::checkPutTower() {
    for (unsigned long long i = 0; i < allTiles.size(); i++) {
        if (allTiles[i] == 'D') {
            // fonction pour poser
        }
    }
}
