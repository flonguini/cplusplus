#include <iostream>

#define LOG(x) std::cout << x << std::endl;

class Player 
{
	public:
		int x, y;
		int speed;

		void Move(int xa, int ya) 
		{
			x += xa * speed;
			y += ya * speed;
		}
};

int main()
{
	Player player;

	player.x = 1;
	player.y = 5;
	player.speed = 1;

	player.Move(3, 5);

	LOG(player.x);
	LOG(player.y);

	std::cin.get();
}