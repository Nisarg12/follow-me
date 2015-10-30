#ifndef PKMN_UTIL_H_
#define PKMN_UTIL_H_

#include "npc.h"

void gf_memcpy(void *dst, void *src, u32 size);

u8 task_add(void (*task_func)(u8), u8 priority);
void task_del(u8);


struct task {
	u32 func;
	u8 inuse;
	u8 prev;
	u8 next;
	u8 priority;
	u16 arg[16];
};

extern struct task tasks[16];
struct npc_state *player_npc_state(void);
struct npc_state *follower_npc_state(void);
void npc_make_invisible(struct npc_state *npc);
void npc_make_visible(struct npc_state *npc);
void follower_set_sprite(u8 sprite_index);
u8 follower_get_sprite();

#endif /* PKMN_UTIL_H_ */
