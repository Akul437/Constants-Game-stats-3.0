//Константы

#include <iostream>

using namespace std;
int main()
{

    const int ALIAN_POINTS = 150;                    // Определение константы с указанием стоимости очков за збитых пришельцев 
    int aliensKilled = 10;                           // Переменная сбитых пришельцев
    int score = aliensKilled * ALIAN_POINTS;         // Сбитые пришельцы * очки
    cout << "score:" << score << endl;

    /* Перечислители взаимносвязаны и распологаются в определенном порядке
    * Определено перечисление под названием difficulty, где значения начинаются с нуля
    * и у каждого увеличиваются на единицу:
    * NOVICE=0,EASY=1,NORMAL=2,HARD=3,UNBEATABLE=4
    */


    // ↓ перечислитель типа данных +   ↓ имя переменной (индификатор)  =  перечисляемые типы
    enum                            difficulty { NOVICE, EASY, NORMAL, HARD, UNBEATABLE };
    difficulty myDifficulty = EASY;                 // для перечисляемых типов создается переменная с значением EASY


    enum shipCost { FIGHTER_COST = 25, BOMMBER_COST, CRUISER_COST = 50 };
    // ↑ Присвоение некоторым перечислителям конкретных целочисленных значений
    //   Любой перечислитель которому не присвоили значение, получает значения на единицу больше чем у предыдущего


    shipCost myShopCost = BOMMBER_COST;
    cout << "\nTo upgrade my ship to a Cruiser will cast" << (CRUISER_COST - myShopCost) << "Resource Points\n";

    return 0;
}