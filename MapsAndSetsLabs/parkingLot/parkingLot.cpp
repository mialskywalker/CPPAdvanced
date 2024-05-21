#include <iostream>
#include <set>

using namespace std;

int main()
{
	set<string> parkingLot;

	while (1) {
		string cmd;
		cin >> cmd;
		if (cmd == "END") {
			break;
		}
		else {
			string plate;
			cin >> plate;

			if (cmd == "IN,") {
				parkingLot.insert(plate);
			}
			else {
				parkingLot.erase(plate);
			}
		}		
	}

	if (parkingLot.size() == 0) {
		cout << "Parking Lot is Empty" << endl;
	}
	else {
		for (string plate : parkingLot) {
			cout << plate << endl;
		}
	}	
}