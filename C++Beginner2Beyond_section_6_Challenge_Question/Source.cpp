#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
	const int costRoomS = 25,
		costRoomL = 35;
	float MItax = .06;
	int roomS, roomL;

	cout << "Hello, welcom to Frank's Carpet Cleaning Service\n\nHow many small rooms would you like cleaned? ";
	cin >> roomS;
	cout << "How many large rooms would you like cleaned? ";
	cin >> roomL;
	cout << "\nEstimate for carpet cleaning service\n";
	cout << "Number of small rooms: " << roomS << "\nNumber of large rooms: " << roomL << endl;
	cout << "Price per small room: $" << costRoomS << endl;
	cout << "Price per large room: $" << costRoomL << endl;
	cout << "Cost: $" << (roomS * costRoomS) + (roomL * costRoomL) << endl;
	cout << "Tax: $" << ((roomS * costRoomS) + (roomL * costRoomL)) * MItax << endl;
	cout << "======================" << endl << "Total estimate: $" << ((roomS * costRoomS) + (roomL * costRoomL)) + (((roomS * costRoomS) + (roomL * costRoomL)) * MItax) << endl << "This estimate is valid for 30 days";
	return 0;
}