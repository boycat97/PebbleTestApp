#include <pebble_os.h>
#include <pebble_app.h>
#include <pebble_fonts.h>
	
#define MY_UUID { 0xBC, 0xA6, 0x14, 0x3A, 0x60, 0xFA, 0x4F, 0xFD, 0xB2, 0x5A, 0x5E, 0xCA, 0x74, 0xEB, 0x59, 0x56 }


PBL_APP_INFO(MY_UUID,
			 "Template App", "Your Company",
			1, 0, /* App Version*/
			DEFAULT_MENU_ICON,
			APP_INFO_STANDARD_APP);

Window window;

void handle_init(AppContextRef ctx) {
	window_init(&window, "Window Name");
	window_stack_push(&window, true /* Animated */);
}

void pbl_main(void *params) {
	
	PebbleAppHandlers handlers = {
		.init_handler = &handle_init	
	};
	
	app_event_loop(params, &handlers);
}

