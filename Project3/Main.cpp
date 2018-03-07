
#include <conio.h>
#include <iostream>
#include "Enemy.h"
#include "Bear.h"
#include "Blimp.h"
#include "DirtyCop.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>

#include <string>
#include <iostream>
using namespace std;   

int main(int argc, char* argv[]) {    
    const int max_enemy = 20;
    Enemy* enemy_ptr[max_enemy];
    int num_enemy =0;
	
	// create Enemy objects, place in array
	// set value of num_enemy
	Bear* b = new Bear();
	Blimp* bl = new Blimp();
	DirtyCop* dc = new DirtyCop();


	for(int i = 0; i < 3; i ++ ) {
		enemy_ptr[num_enemy++] = b;
		enemy_ptr[num_enemy++] = bl;
		enemy_ptr[num_enemy++] = dc;
	}
	
    while ( true ) {
		int random = rand() %num_enemy;         // every Enemy object should move_position 
		enemy_ptr[random] -> move_position();   // Pick a random Enemy to fire_weapon
		enemy_ptr[random] -> fire_weapon();     // Pick a random Enemy to update_status		
		enemy_ptr[random] -> update_status();
        _getch();
        cout << endl;
    }
    return 0;
};