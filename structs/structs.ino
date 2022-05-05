struct gold{
  int Increment;
  int Max;
  int Current;
};

struct Board {
    int * battleground;
    int tickrate;
    int time;
    int * spawnrate;
};

struct Unit {
		int position;
		int health;
		int damage;
		int colour[4];
		bool direction;
		bool enemy;
		int cost;
};

