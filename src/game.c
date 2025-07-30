#include <stdlib.h>
#include <zfw.h>

bool InitGame(const zfw_s_game_init_context* const zfw_context) {
    return true;
}

zfw_e_game_tick_result GameTick(const zfw_s_game_tick_context* const zfw_context) {
    return zfw_ek_game_tick_result_normal;
}

bool RenderGame(const zfw_s_game_render_context* const zfw_context) {
    return true;
}

void CleanGame(void* const dev_mem) {
}

int main() {
    const zfw_s_game_info game_info = {
        .window_init_size = {1280, 720},
        .window_title = "Untitled Game",

        .init_func = InitGame,
        .tick_func = GameTick,
        .render_func = RenderGame,
        .clean_func = CleanGame
    };

    return ZFW_RunGame(&game_info) ? EXIT_SUCCESS : EXIT_FAILURE;
}
