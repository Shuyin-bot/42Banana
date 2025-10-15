#include "bot.h"

void ft_on_tick(unsigned long tick);

int	main(int argc, char **argv)
{
	return core_startGame("ytaras", argc, argv, ft_on_tick, false);
}

void ft_on_tick(unsigned long tick)
{
	printf("-----> [⚡️ TICK %ld🔥]\n", tick);

	core_action_createUnit(UNIT_WARRIOR);

	for (int i = 0; game.objects[i] != NULL; i++)
	{
		t_obj 
	}	
	t_pos pos1;
	pos1.x = 1;
	pos1.y = 1;
	core_action_move(, post)
}
