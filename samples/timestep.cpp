#include <cute.h>
using namespace Cute;

int main(int argc, char* argv[])
{
	int w = 640;
	int h = 480;
	CF_Result result = make_app("Timestep", 0, 0, 0, w, h, CF_APP_OPTIONS_WINDOW_POS_CENTERED_BIT, argv[0]);
	if (is_error(result)) return -1;

	float frame_times[10] = { 0 };
	int frame_index = 0;
	float fps = 0;

	set_target_framerate(60);

	while (app_is_running()) {
		app_update();

		frame_times[frame_index] = CF_DELTA_TIME;
		frame_index = (frame_index + 1) % 10;
		float sum = 0;
		for (int i = 0; i < 10; ++i) {
			sum += frame_times[i];
		}
		sum /= 10.0f;
		fps = (1.0f / sum);

		String s = String::fmt("fps  %f", fps);
		draw_text(s.c_str(), V2(-40,15));
		s = String::fmt("dt    %f", CF_DELTA_TIME);
		draw_text(s.c_str(), V2(-40,-15));

		app_draw_onto_screen();
	}

	destroy_app();

	return 0;
}
