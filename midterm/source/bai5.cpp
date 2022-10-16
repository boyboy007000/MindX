#include <stdio.h>
#include <string>


//Greedy algorithm
char nameItem(int cost){
    if (cost == 8){
        return 'd';
    }
    else if (cost == 4)
    {
        return 'c';
    }
    else if (cost == 2)
    {
        return 'b';
    }
    else if (cost == 1)
    {
        return 'a';
    }  
}

std::string listItemsInBill(__uint8_t total_cost){
    int array_menu[] = {8,4,2,1};
    int index = 0;
    std::string result;
    while (total_cost >0)
    {
        if(total_cost - array_menu[index] < 0){
            index++;
            continue;
        }
        total_cost -= array_menu[index];
        result += nameItem(array_menu[index]);
        index++;
    }
    return result;
}