#------------------------------------------------------------------------------#
# PowerProgress Community MakeFile for H-Craft 1.0                             #
#------------------------------------------------------------------------------#


WORKDIR = `pwd`

CC = gcc
CXX = g++
AR = ar
LD = g++
WINDRES = windres

INC = 
CFLAGS = -D_IRR_STATIC_LIB_
RESINC = 
LIBDIR = 
LIB = 
LDFLAGS = 

INC_LINUX64_DEBUG = $(INC) -I../libs/libogg/linux/include -I../libs/libvorbis/linux/include -I../libs/freealut/linux/include -I../libs/openal/linux/include -I../libs/sdl/linux/include -I../libs/libfreetype/linux/include/freetype2 -I../libs/irrlicht/include
CFLAGS_LINUX64_DEBUG = $(CFLAGS) -Wall -g -W -fno-strict-aliasing -Wno-unused-parameter -fno-rtti -fno-exceptions -D_IRR_STATIC_LIB_ -DDEBUG -D_DEBUG
RESINC_LINUX64_DEBUG = 
RCFLAGS_LINUX64_DEBUG = $(RCFLAGS)
LIBDIR_LINUX64_DEBUG = $(LIBDIR) -L../libs/irrlicht/lib/Linux -L../libs/libvorbis/linux/lib64 -L../libs/libvorbis/linux/lib -L../libs/libogg/linux/lib64 -L../libs/libogg/linux/lib -L../libs/libfreetype/linux/lib64 -L../libs/libfreetype/linux/lib -L../libs/sdl/linux/lib64 -L../libs/sdl/linux/lib -L../libs/openal/linux/lib64 -L../libs/openal/linux/lib -L../libs/freealut/linux/lib64 -L../libs/freealut/linux/lib -L../libs/linux_shared
LIB_LINUX64_DEBUG = $(LIB)-lIrrlicht -lGL -lGLU -lXext -lX11 -lpthread libvorbisfile.a libvorbisenc.a libvorbis.a libogg.a libfreetype.a -lSDL -lopenal -lalut -lXrandr -lXxf86vm
LDFLAGS_LINUX64_DEBUG = $(LDFLAGS) -Wl,-rpath -Wl,./libs/linux_shared
OBJDIR_LINUX64_DEBUG = .linux64objsD
DEP_LINUX64_DEBUG = 
OUT_LINUX64_DEBUG = ../hovercraftD64

INC_LINUX64_RELEASE = $(INC) -I../libs/libogg/linux/include -I../libs/libvorbis/linux/include -I../libs/freealut/linux/include -I../libs/openal/linux/include -I../libs/sdl/linux/include -I../libs/libfreetype/linux/include/freetype2 -I../libs/irrlicht/include
CFLAGS_LINUX64_RELEASE = $(CFLAGS) -fexpensive-optimizations -O2 -Wall -W -fno-strict-aliasing -Wno-unused-parameter -fno-rtti -fno-exceptions -D_IRR_STATIC_LIB_ -DNDEBUG -DHOVER_RELEASE
RESINC_LINUX64_RELEASE = 
RCFLAGS_LINUX64_RELEASE = $(RCFLAGS)
LIBDIR_LINUX64_RELEASE = $(LIBDIR) -L../libs/irrlicht/lib/Linux -L../libs/libvorbis/linux/lib64 -L../libs/libvorbis/linux/lib -L../libs/libogg/linux/lib64 -L../libs/libogg/linux/lib -L../libs/libfreetype/linux/lib64 -L../libs/libfreetype/linux/lib -L../libs/sdl/linux/lib64 -L../libs/sdl/linux/lib -L../libs/openal/linux/lib64 -L../libs/openal/linux/lib -L../libs/freealut/linux/lib64 -L../libs/freealut/linux/lib -L../libs/linux_shared
LIB_LINUX64_RELEASE = $(LIB)-lIrrlicht -lGL -lGLU -lXext -lX11 -lpthread ../libs/libvorbis/linux/lib/libvorbisfile.a ../libs/libvorbis/linux/lib/libvorbisenc.a ../libs/libvorbis/linux/lib/libvorbis.a ../libs/libogg/linux/lib/libogg.a ../libs/libfreetype/linux/lib/libfreetype.a -lSDL -lopenal -lalut -lXrandr -lXxf86vm
LDFLAGS_LINUX64_RELEASE = $(LDFLAGS) -s -Wl,-rpath -Wl,./libs/linux_shared
OBJDIR_LINUX64_RELEASE = .linux64objs
DEP_LINUX64_RELEASE = 
OUT_LINUX64_RELEASE = ../hovercraft64

INC_LINUX32_DEBUG = $(INC) -I../libs/libogg/linux/include -I../libs/libvorbis/linux/include -I../libs/freealut/linux/include -I../libs/openal/linux/include -I../libs/sdl/linux/include -I../libs/libfreetype/linux/include/freetype2 -I../libs/irrlicht/include
CFLAGS_LINUX32_DEBUG = $(CFLAGS) -march=i686 -Wall -g -W -fno-strict-aliasing -Wno-unused-parameter -fno-rtti -fno-exceptions -DDEBUG -D_DEBUG
RESINC_LINUX32_DEBUG = 
RCFLAGS_LINUX32_DEBUG = $(RCFLAGS)
LIBDIR_LINUX32_DEBUG = $(LIBDIR) -L/usr/local/lib -L/usr/X11R6/lib
LIB_LINUX32_DEBUG = $(LIB)../libs/irrlicht/lib/Linux/libIrrlicht.a -lGL -lGLU -lXext -lX11 -lpthread ../libs/libvorbis/linux/lib/libvorbisfile.a ../libs/libvorbis/linux/lib/libvorbisenc.a ../libs/libvorbis/linux/lib/libvorbis.a ../libs/libogg/linux/lib/libogg.a ../libs/libfreetype/linux/lib/libfreetype.a -l../libs/sdl/linux/lib/libSDL.so -l../libs/openal/linux/lib/libopenal.so -l../libs/freealut/linux/lib/libalut.so -lXrandr
LDFLAGS_LINUX32_DEBUG = $(LDFLAGS) -Wl,-rpath -Wl,./libs/linux_shared
OBJDIR_LINUX32_DEBUG = .linux32objsD
DEP_LINUX32_DEBUG = 
OUT_LINUX32_DEBUG = ../hovercraftD

INC_LINUX32_RELEASE = $(INC) -I../libs/libogg/linux/include -I../libs/libvorbis/linux/include -I../libs/freealut/linux/include -I../libs/openal/linux/include -I../libs/sdl/linux/include -I../libs/libfreetype/linux/include/freetype2 -I../libs/irrlicht/include
CFLAGS_LINUX32_RELEASE = $(CFLAGS) -march=i686 -fexpensive-optimizations -O2 -Wall -W -fno-strict-aliasing -Wno-unused-parameter -fno-rtti -fno-exceptions -DNDEBUG
RESINC_LINUX32_RELEASE = 
RCFLAGS_LINUX32_RELEASE = $(RCFLAGS)
LIBDIR_LINUX32_RELEASE = $(LIBDIR) -L/usr/local/lib -L/usr/X11R6/lib
LIB_LINUX32_RELEASE = $(LIB)../libs/irrlicht/lib/Linux/libIrrlicht.a -lGL -lGLU /usr/lib/libXxf86vm.a /usr/lib/libXext.a -lX11 -lpthread ../libs/libvorbis/linux/lib/libvorbisfile.a ../libs/libvorbis/linux/lib/libvorbisenc.a ../libs/libvorbis/linux/lib/libvorbis.a ../libs/libogg/linux/lib/libogg.a ../libs/libfreetype/linux/lib/libfreetype.a -l../libs/sdl/linux/lib/libSDL.so -l../libs/openal/linux/lib/libopenal.so -l../libs/freealut/linux/lib/libalut.so -lXrandr
LDFLAGS_LINUX32_RELEASE = $(LDFLAGS) -Wl,-rpath -Wl,./libs/linux_shared
OBJDIR_LINUX32_RELEASE = .linux32objs
DEP_LINUX32_RELEASE = 
OUT_LINUX32_RELEASE = ../hovercraft

INC_LINUX64ES2_DEBUG = $(INC) -I../libs/libogg/linux/include -I../libs/libvorbis/linux/include -I../libs/freealut/linux/include -I../libs/openal/linux/include -I../libs/sdl/linux/include -I../libs/libfreetype/linux/include/freetype2 -I../libs/irrlicht_ogl-es/include
CFLAGS_LINUX64ES2_DEBUG = $(CFLAGS) -Wnon-virtual-dtor -Winit-self -Wredundant-decls -Wcast-align -Winline -Wunreachable-code -Wall -g -W -fno-strict-aliasing -Wno-unused-parameter -fno-rtti -fno-exceptions -D_IRR_STATIC_LIB_ -DDEBUG -D_DEBUG -DHC1_OGLES
RESINC_LINUX64ES2_DEBUG = 
RCFLAGS_LINUX64ES2_DEBUG = $(RCFLAGS)
LIBDIR_LINUX64ES2_DEBUG = $(LIBDIR) -L../libs/irrlicht_ogl-es/lib/Linux -L../libs/libvorbis/linux/lib64 -L../libs/libvorbis/linux/lib -L../libs/libogg/linux/lib64 -L../libs/libogg/linux/lib -L../libs/libfreetype/linux/lib64 -L../libs/libfreetype/linux/lib -L../libs/sdl/linux/lib64 -L../libs/sdl/linux/lib -L../libs/openal/linux/lib64 -L../libs/openal/linux/lib -L../libs/freealut/linux/lib64 -L../libs/freealut/linux/lib -L../libs/linux_shared
LIB_LINUX64ES2_DEBUG = $(LIB)-lIrrlicht -lXext -lX11 -lpthread libvorbisfile.a libvorbisenc.a libvorbis.a libogg.a libfreetype.a -lSDL -lopenal -lalut -lXrandr -lXxf86vm -lGLESv2 -lEGL -lGL
LDFLAGS_LINUX64ES2_DEBUG = $(LDFLAGS) -Wl,-rpath -Wl,./libs/linux_shared
OBJDIR_LINUX64ES2_DEBUG = .linux64es2objsD
DEP_LINUX64ES2_DEBUG = 
OUT_LINUX64ES2_DEBUG = ../hovercraftD64

OBJ_LINUX64_DEBUG = $(OBJDIR_LINUX64_DEBUG)/irrlicht_manager.o $(OBJDIR_LINUX64_DEBUG)/helper_math.o $(OBJDIR_LINUX64_DEBUG)/helper_str.o $(OBJDIR_LINUX64_DEBUG)/helper_xml.o $(OBJDIR_LINUX64_DEBUG)/highscores.o $(OBJDIR_LINUX64_DEBUG)/hover.o $(OBJDIR_LINUX64_DEBUG)/input_device.o $(OBJDIR_LINUX64_DEBUG)/input_device_manager.o $(OBJDIR_LINUX64_DEBUG)/keycode_strings.o $(OBJDIR_LINUX64_DEBUG)/level.o $(OBJDIR_LINUX64_DEBUG)/level_manager.o $(OBJDIR_LINUX64_DEBUG)/logging.o $(OBJDIR_LINUX64_DEBUG)/main.o $(OBJDIR_LINUX64_DEBUG)/mesh_texture_loader.o $(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_menu_tutorial3.o $(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_menu_profiles.o $(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_menu_replaytheatre.o $(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_menu_rivals.o $(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_menu_rivals_score.o $(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_menu_selecthover.o $(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_menu_timeattack.o $(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_modellist.o $(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_nodemanager.o $(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_touch.o $(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_user_controls.o $(OBJDIR_LINUX64_DEBUG)/helper_file.o $(OBJDIR_LINUX64_DEBUG)/helper_irr.o $(OBJDIR_LINUX64_DEBUG)/streaming.o $(OBJDIR_LINUX64_DEBUG)/random.o $(OBJDIR_LINUX64_DEBUG)/recorder.o $(OBJDIR_LINUX64_DEBUG)/rivalsmode.o $(OBJDIR_LINUX64_DEBUG)/sound_openal.o $(OBJDIR_LINUX64_DEBUG)/sound_settings.o $(OBJDIR_LINUX64_DEBUG)/start_browser.o $(OBJDIR_LINUX64_DEBUG)/string_table.o $(OBJDIR_LINUX64_DEBUG)/timer.o $(OBJDIR_LINUX64_DEBUG)/tinyxml/tinystr.o $(OBJDIR_LINUX64_DEBUG)/tinyxml/tinyxml.o $(OBJDIR_LINUX64_DEBUG)/tinyxml/tinyxmlerror.o $(OBJDIR_LINUX64_DEBUG)/tinyxml/tinyxmlparser.o $(OBJDIR_LINUX64_DEBUG)/track_marker.o $(OBJDIR_LINUX64_DEBUG)/mobile/advert_admob.o $(OBJDIR_LINUX64_DEBUG)/mobile/android_tools.o $(OBJDIR_LINUX64_DEBUG)/mobile/app_restrictions.o $(OBJDIR_LINUX64_DEBUG)/mobile/billing_googleplay.o $(OBJDIR_LINUX64_DEBUG)/music_manager.o $(OBJDIR_LINUX64_DEBUG)/nn.o $(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_menu_pause.o $(OBJDIR_LINUX64_DEBUG)/node_manager.o $(OBJDIR_LINUX64_DEBUG)/ogg_stream.o $(OBJDIR_LINUX64_DEBUG)/ogles2_materials.o $(OBJDIR_LINUX64_DEBUG)/ov_callbacks.o $(OBJDIR_LINUX64_DEBUG)/physics.o $(OBJDIR_LINUX64_DEBUG)/player.o $(OBJDIR_LINUX64_DEBUG)/profiles.o $(OBJDIR_LINUX64_DEBUG)/game.o $(OBJDIR_LINUX64_DEBUG)/device_keyboard.o $(OBJDIR_LINUX64_DEBUG)/device_mouse.o $(OBJDIR_LINUX64_DEBUG)/device_touch.o $(OBJDIR_LINUX64_DEBUG)/device_touch_settings.o $(OBJDIR_LINUX64_DEBUG)/editor.o $(OBJDIR_LINUX64_DEBUG)/event_receiver_base.o $(OBJDIR_LINUX64_DEBUG)/font_manager.o $(OBJDIR_LINUX64_DEBUG)/grid_triangle_selector.o $(OBJDIR_LINUX64_DEBUG)/gui.o $(OBJDIR_LINUX64_DEBUG)/gui_dialog.o $(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_ai.o $(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_controller_display.o $(OBJDIR_LINUX64_DEBUG)/CGUITextSlider.o $(OBJDIR_LINUX64_DEBUG)/CLMOMeshFileLoader.o $(OBJDIR_LINUX64_DEBUG)/ai_track.o $(OBJDIR_LINUX64_DEBUG)/app_tester.o $(OBJDIR_LINUX64_DEBUG)/camera.o $(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_developer_settings.o $(OBJDIR_LINUX64_DEBUG)/championship.o $(OBJDIR_LINUX64_DEBUG)/config.o $(OBJDIR_LINUX64_DEBUG)/controller.o $(OBJDIR_LINUX64_DEBUG)/convert_utf.o $(OBJDIR_LINUX64_DEBUG)/device_joystick.o $(OBJDIR_LINUX64_DEBUG)/device_joystick_settings.o $(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_menu_keyboard.o $(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_menu_gameend.o $(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_menu_gameend_champ.o $(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_menu_gameend_rivals.o $(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_menu_graphics.o $(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_menu_highscores.o $(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_menu_hover_unlocked.o $(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_menu_credits.o $(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_menu_licenses.o $(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_menu_loadingscreen.o $(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_menu_main.o $(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_menu_nagscreen.o $(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_menu_newprofile.o $(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_menu_options.o $(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_levelmanager.o $(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_dlg_okcancel.o $(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_editor.o $(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_game.o $(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_helper.o $(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_hud.o $(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_intro.o $(OBJDIR_LINUX64_DEBUG)/CGUITTFont.o $(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_menu_analog.o $(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_menu_arcade.o $(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_menu_championship.o $(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_menu_championship_progress.o $(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_menu_championship_winner.o $(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_menu_controls.o

OBJ_LINUX64_RELEASE = $(OBJDIR_LINUX64_RELEASE)/irrlicht_manager.o $(OBJDIR_LINUX64_RELEASE)/helper_math.o $(OBJDIR_LINUX64_RELEASE)/helper_str.o $(OBJDIR_LINUX64_RELEASE)/helper_xml.o $(OBJDIR_LINUX64_RELEASE)/highscores.o $(OBJDIR_LINUX64_RELEASE)/hover.o $(OBJDIR_LINUX64_RELEASE)/input_device.o $(OBJDIR_LINUX64_RELEASE)/input_device_manager.o $(OBJDIR_LINUX64_RELEASE)/keycode_strings.o $(OBJDIR_LINUX64_RELEASE)/level.o $(OBJDIR_LINUX64_RELEASE)/level_manager.o $(OBJDIR_LINUX64_RELEASE)/logging.o $(OBJDIR_LINUX64_RELEASE)/main.o $(OBJDIR_LINUX64_RELEASE)/mesh_texture_loader.o $(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_menu_tutorial3.o $(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_menu_profiles.o $(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_menu_replaytheatre.o $(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_menu_rivals.o $(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_menu_rivals_score.o $(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_menu_selecthover.o $(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_menu_timeattack.o $(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_modellist.o $(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_nodemanager.o $(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_touch.o $(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_user_controls.o $(OBJDIR_LINUX64_RELEASE)/helper_file.o $(OBJDIR_LINUX64_RELEASE)/helper_irr.o $(OBJDIR_LINUX64_RELEASE)/streaming.o $(OBJDIR_LINUX64_RELEASE)/random.o $(OBJDIR_LINUX64_RELEASE)/recorder.o $(OBJDIR_LINUX64_RELEASE)/rivalsmode.o $(OBJDIR_LINUX64_RELEASE)/sound_openal.o $(OBJDIR_LINUX64_RELEASE)/sound_settings.o $(OBJDIR_LINUX64_RELEASE)/start_browser.o $(OBJDIR_LINUX64_RELEASE)/string_table.o $(OBJDIR_LINUX64_RELEASE)/timer.o $(OBJDIR_LINUX64_RELEASE)/tinyxml/tinystr.o $(OBJDIR_LINUX64_RELEASE)/tinyxml/tinyxml.o $(OBJDIR_LINUX64_RELEASE)/tinyxml/tinyxmlerror.o $(OBJDIR_LINUX64_RELEASE)/tinyxml/tinyxmlparser.o $(OBJDIR_LINUX64_RELEASE)/track_marker.o $(OBJDIR_LINUX64_RELEASE)/mobile/advert_admob.o $(OBJDIR_LINUX64_RELEASE)/mobile/android_tools.o $(OBJDIR_LINUX64_RELEASE)/mobile/app_restrictions.o $(OBJDIR_LINUX64_RELEASE)/mobile/billing_googleplay.o $(OBJDIR_LINUX64_RELEASE)/music_manager.o $(OBJDIR_LINUX64_RELEASE)/nn.o $(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_menu_pause.o $(OBJDIR_LINUX64_RELEASE)/node_manager.o $(OBJDIR_LINUX64_RELEASE)/ogg_stream.o $(OBJDIR_LINUX64_RELEASE)/ogles2_materials.o $(OBJDIR_LINUX64_RELEASE)/ov_callbacks.o $(OBJDIR_LINUX64_RELEASE)/physics.o $(OBJDIR_LINUX64_RELEASE)/player.o $(OBJDIR_LINUX64_RELEASE)/profiles.o $(OBJDIR_LINUX64_RELEASE)/game.o $(OBJDIR_LINUX64_RELEASE)/device_keyboard.o $(OBJDIR_LINUX64_RELEASE)/device_mouse.o $(OBJDIR_LINUX64_RELEASE)/device_touch.o $(OBJDIR_LINUX64_RELEASE)/device_touch_settings.o $(OBJDIR_LINUX64_RELEASE)/editor.o $(OBJDIR_LINUX64_RELEASE)/event_receiver_base.o $(OBJDIR_LINUX64_RELEASE)/font_manager.o $(OBJDIR_LINUX64_RELEASE)/grid_triangle_selector.o $(OBJDIR_LINUX64_RELEASE)/gui.o $(OBJDIR_LINUX64_RELEASE)/gui_dialog.o $(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_ai.o $(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_controller_display.o $(OBJDIR_LINUX64_RELEASE)/CGUITextSlider.o $(OBJDIR_LINUX64_RELEASE)/CLMOMeshFileLoader.o $(OBJDIR_LINUX64_RELEASE)/ai_track.o $(OBJDIR_LINUX64_RELEASE)/app_tester.o $(OBJDIR_LINUX64_RELEASE)/camera.o $(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_developer_settings.o $(OBJDIR_LINUX64_RELEASE)/championship.o $(OBJDIR_LINUX64_RELEASE)/config.o $(OBJDIR_LINUX64_RELEASE)/controller.o $(OBJDIR_LINUX64_RELEASE)/convert_utf.o $(OBJDIR_LINUX64_RELEASE)/device_joystick.o $(OBJDIR_LINUX64_RELEASE)/device_joystick_settings.o $(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_menu_keyboard.o $(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_menu_gameend.o $(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_menu_gameend_champ.o $(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_menu_gameend_rivals.o $(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_menu_graphics.o $(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_menu_highscores.o $(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_menu_hover_unlocked.o $(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_menu_credits.o $(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_menu_licenses.o $(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_menu_loadingscreen.o $(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_menu_main.o $(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_menu_nagscreen.o $(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_menu_newprofile.o $(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_menu_options.o $(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_levelmanager.o $(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_dlg_okcancel.o $(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_editor.o $(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_game.o $(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_helper.o $(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_hud.o $(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_intro.o $(OBJDIR_LINUX64_RELEASE)/CGUITTFont.o $(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_menu_analog.o $(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_menu_arcade.o $(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_menu_championship.o $(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_menu_championship_progress.o $(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_menu_championship_winner.o $(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_menu_controls.o

OBJ_LINUX32_DEBUG = $(OBJDIR_LINUX32_DEBUG)/irrlicht_manager.o $(OBJDIR_LINUX32_DEBUG)/helper_math.o $(OBJDIR_LINUX32_DEBUG)/helper_str.o $(OBJDIR_LINUX32_DEBUG)/helper_xml.o $(OBJDIR_LINUX32_DEBUG)/highscores.o $(OBJDIR_LINUX32_DEBUG)/hover.o $(OBJDIR_LINUX32_DEBUG)/input_device.o $(OBJDIR_LINUX32_DEBUG)/input_device_manager.o $(OBJDIR_LINUX32_DEBUG)/keycode_strings.o $(OBJDIR_LINUX32_DEBUG)/level.o $(OBJDIR_LINUX32_DEBUG)/level_manager.o $(OBJDIR_LINUX32_DEBUG)/logging.o $(OBJDIR_LINUX32_DEBUG)/main.o $(OBJDIR_LINUX32_DEBUG)/mesh_texture_loader.o $(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_menu_tutorial3.o $(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_menu_profiles.o $(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_menu_replaytheatre.o $(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_menu_rivals.o $(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_menu_rivals_score.o $(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_menu_selecthover.o $(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_menu_timeattack.o $(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_modellist.o $(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_nodemanager.o $(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_touch.o $(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_user_controls.o $(OBJDIR_LINUX32_DEBUG)/helper_file.o $(OBJDIR_LINUX32_DEBUG)/helper_irr.o $(OBJDIR_LINUX32_DEBUG)/streaming.o $(OBJDIR_LINUX32_DEBUG)/random.o $(OBJDIR_LINUX32_DEBUG)/recorder.o $(OBJDIR_LINUX32_DEBUG)/rivalsmode.o $(OBJDIR_LINUX32_DEBUG)/sound_openal.o $(OBJDIR_LINUX32_DEBUG)/sound_settings.o $(OBJDIR_LINUX32_DEBUG)/start_browser.o $(OBJDIR_LINUX32_DEBUG)/string_table.o $(OBJDIR_LINUX32_DEBUG)/timer.o $(OBJDIR_LINUX32_DEBUG)/tinyxml/tinystr.o $(OBJDIR_LINUX32_DEBUG)/tinyxml/tinyxml.o $(OBJDIR_LINUX32_DEBUG)/tinyxml/tinyxmlerror.o $(OBJDIR_LINUX32_DEBUG)/tinyxml/tinyxmlparser.o $(OBJDIR_LINUX32_DEBUG)/track_marker.o $(OBJDIR_LINUX32_DEBUG)/mobile/advert_admob.o $(OBJDIR_LINUX32_DEBUG)/mobile/android_tools.o $(OBJDIR_LINUX32_DEBUG)/mobile/app_restrictions.o $(OBJDIR_LINUX32_DEBUG)/mobile/billing_googleplay.o $(OBJDIR_LINUX32_DEBUG)/music_manager.o $(OBJDIR_LINUX32_DEBUG)/nn.o $(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_menu_pause.o $(OBJDIR_LINUX32_DEBUG)/node_manager.o $(OBJDIR_LINUX32_DEBUG)/ogg_stream.o $(OBJDIR_LINUX32_DEBUG)/ogles2_materials.o $(OBJDIR_LINUX32_DEBUG)/ov_callbacks.o $(OBJDIR_LINUX32_DEBUG)/physics.o $(OBJDIR_LINUX32_DEBUG)/player.o $(OBJDIR_LINUX32_DEBUG)/profiles.o $(OBJDIR_LINUX32_DEBUG)/game.o $(OBJDIR_LINUX32_DEBUG)/device_keyboard.o $(OBJDIR_LINUX32_DEBUG)/device_mouse.o $(OBJDIR_LINUX32_DEBUG)/device_touch.o $(OBJDIR_LINUX32_DEBUG)/device_touch_settings.o $(OBJDIR_LINUX32_DEBUG)/editor.o $(OBJDIR_LINUX32_DEBUG)/event_receiver_base.o $(OBJDIR_LINUX32_DEBUG)/font_manager.o $(OBJDIR_LINUX32_DEBUG)/grid_triangle_selector.o $(OBJDIR_LINUX32_DEBUG)/gui.o $(OBJDIR_LINUX32_DEBUG)/gui_dialog.o $(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_ai.o $(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_controller_display.o $(OBJDIR_LINUX32_DEBUG)/CGUITextSlider.o $(OBJDIR_LINUX32_DEBUG)/CLMOMeshFileLoader.o $(OBJDIR_LINUX32_DEBUG)/ai_track.o $(OBJDIR_LINUX32_DEBUG)/app_tester.o $(OBJDIR_LINUX32_DEBUG)/camera.o $(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_developer_settings.o $(OBJDIR_LINUX32_DEBUG)/championship.o $(OBJDIR_LINUX32_DEBUG)/config.o $(OBJDIR_LINUX32_DEBUG)/controller.o $(OBJDIR_LINUX32_DEBUG)/convert_utf.o $(OBJDIR_LINUX32_DEBUG)/device_joystick.o $(OBJDIR_LINUX32_DEBUG)/device_joystick_settings.o $(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_menu_keyboard.o $(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_menu_gameend.o $(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_menu_gameend_champ.o $(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_menu_gameend_rivals.o $(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_menu_graphics.o $(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_menu_highscores.o $(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_menu_hover_unlocked.o $(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_menu_credits.o $(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_menu_licenses.o $(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_menu_loadingscreen.o $(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_menu_main.o $(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_menu_nagscreen.o $(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_menu_newprofile.o $(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_menu_options.o $(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_levelmanager.o $(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_dlg_okcancel.o $(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_editor.o $(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_game.o $(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_helper.o $(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_hud.o $(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_intro.o $(OBJDIR_LINUX32_DEBUG)/CGUITTFont.o $(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_menu_analog.o $(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_menu_arcade.o $(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_menu_championship.o $(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_menu_championship_progress.o $(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_menu_championship_winner.o $(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_menu_controls.o

OBJ_LINUX32_RELEASE = $(OBJDIR_LINUX32_RELEASE)/irrlicht_manager.o $(OBJDIR_LINUX32_RELEASE)/helper_math.o $(OBJDIR_LINUX32_RELEASE)/helper_str.o $(OBJDIR_LINUX32_RELEASE)/helper_xml.o $(OBJDIR_LINUX32_RELEASE)/highscores.o $(OBJDIR_LINUX32_RELEASE)/hover.o $(OBJDIR_LINUX32_RELEASE)/input_device.o $(OBJDIR_LINUX32_RELEASE)/input_device_manager.o $(OBJDIR_LINUX32_RELEASE)/keycode_strings.o $(OBJDIR_LINUX32_RELEASE)/level.o $(OBJDIR_LINUX32_RELEASE)/level_manager.o $(OBJDIR_LINUX32_RELEASE)/logging.o $(OBJDIR_LINUX32_RELEASE)/main.o $(OBJDIR_LINUX32_RELEASE)/mesh_texture_loader.o $(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_menu_tutorial3.o $(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_menu_profiles.o $(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_menu_replaytheatre.o $(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_menu_rivals.o $(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_menu_rivals_score.o $(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_menu_selecthover.o $(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_menu_timeattack.o $(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_modellist.o $(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_nodemanager.o $(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_touch.o $(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_user_controls.o $(OBJDIR_LINUX32_RELEASE)/helper_file.o $(OBJDIR_LINUX32_RELEASE)/helper_irr.o $(OBJDIR_LINUX32_RELEASE)/streaming.o $(OBJDIR_LINUX32_RELEASE)/random.o $(OBJDIR_LINUX32_RELEASE)/recorder.o $(OBJDIR_LINUX32_RELEASE)/rivalsmode.o $(OBJDIR_LINUX32_RELEASE)/sound_openal.o $(OBJDIR_LINUX32_RELEASE)/sound_settings.o $(OBJDIR_LINUX32_RELEASE)/start_browser.o $(OBJDIR_LINUX32_RELEASE)/string_table.o $(OBJDIR_LINUX32_RELEASE)/timer.o $(OBJDIR_LINUX32_RELEASE)/tinyxml/tinystr.o $(OBJDIR_LINUX32_RELEASE)/tinyxml/tinyxml.o $(OBJDIR_LINUX32_RELEASE)/tinyxml/tinyxmlerror.o $(OBJDIR_LINUX32_RELEASE)/tinyxml/tinyxmlparser.o $(OBJDIR_LINUX32_RELEASE)/track_marker.o $(OBJDIR_LINUX32_RELEASE)/mobile/advert_admob.o $(OBJDIR_LINUX32_RELEASE)/mobile/android_tools.o $(OBJDIR_LINUX32_RELEASE)/mobile/app_restrictions.o $(OBJDIR_LINUX32_RELEASE)/mobile/billing_googleplay.o $(OBJDIR_LINUX32_RELEASE)/music_manager.o $(OBJDIR_LINUX32_RELEASE)/nn.o $(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_menu_pause.o $(OBJDIR_LINUX32_RELEASE)/node_manager.o $(OBJDIR_LINUX32_RELEASE)/ogg_stream.o $(OBJDIR_LINUX32_RELEASE)/ogles2_materials.o $(OBJDIR_LINUX32_RELEASE)/ov_callbacks.o $(OBJDIR_LINUX32_RELEASE)/physics.o $(OBJDIR_LINUX32_RELEASE)/player.o $(OBJDIR_LINUX32_RELEASE)/profiles.o $(OBJDIR_LINUX32_RELEASE)/game.o $(OBJDIR_LINUX32_RELEASE)/device_keyboard.o $(OBJDIR_LINUX32_RELEASE)/device_mouse.o $(OBJDIR_LINUX32_RELEASE)/device_touch.o $(OBJDIR_LINUX32_RELEASE)/device_touch_settings.o $(OBJDIR_LINUX32_RELEASE)/editor.o $(OBJDIR_LINUX32_RELEASE)/event_receiver_base.o $(OBJDIR_LINUX32_RELEASE)/font_manager.o $(OBJDIR_LINUX32_RELEASE)/grid_triangle_selector.o $(OBJDIR_LINUX32_RELEASE)/gui.o $(OBJDIR_LINUX32_RELEASE)/gui_dialog.o $(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_ai.o $(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_controller_display.o $(OBJDIR_LINUX32_RELEASE)/CGUITextSlider.o $(OBJDIR_LINUX32_RELEASE)/CLMOMeshFileLoader.o $(OBJDIR_LINUX32_RELEASE)/ai_track.o $(OBJDIR_LINUX32_RELEASE)/app_tester.o $(OBJDIR_LINUX32_RELEASE)/camera.o $(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_developer_settings.o $(OBJDIR_LINUX32_RELEASE)/championship.o $(OBJDIR_LINUX32_RELEASE)/config.o $(OBJDIR_LINUX32_RELEASE)/controller.o $(OBJDIR_LINUX32_RELEASE)/convert_utf.o $(OBJDIR_LINUX32_RELEASE)/device_joystick.o $(OBJDIR_LINUX32_RELEASE)/device_joystick_settings.o $(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_menu_keyboard.o $(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_menu_gameend.o $(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_menu_gameend_champ.o $(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_menu_gameend_rivals.o $(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_menu_graphics.o $(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_menu_highscores.o $(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_menu_hover_unlocked.o $(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_menu_credits.o $(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_menu_licenses.o $(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_menu_loadingscreen.o $(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_menu_main.o $(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_menu_nagscreen.o $(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_menu_newprofile.o $(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_menu_options.o $(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_levelmanager.o $(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_dlg_okcancel.o $(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_editor.o $(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_game.o $(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_helper.o $(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_hud.o $(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_intro.o $(OBJDIR_LINUX32_RELEASE)/CGUITTFont.o $(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_menu_analog.o $(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_menu_arcade.o $(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_menu_championship.o $(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_menu_championship_progress.o $(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_menu_championship_winner.o $(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_menu_controls.o

OBJ_LINUX64ES2_DEBUG = $(OBJDIR_LINUX64ES2_DEBUG)/irrlicht_manager.o $(OBJDIR_LINUX64ES2_DEBUG)/helper_math.o $(OBJDIR_LINUX64ES2_DEBUG)/helper_str.o $(OBJDIR_LINUX64ES2_DEBUG)/helper_xml.o $(OBJDIR_LINUX64ES2_DEBUG)/highscores.o $(OBJDIR_LINUX64ES2_DEBUG)/hover.o $(OBJDIR_LINUX64ES2_DEBUG)/input_device.o $(OBJDIR_LINUX64ES2_DEBUG)/input_device_manager.o $(OBJDIR_LINUX64ES2_DEBUG)/keycode_strings.o $(OBJDIR_LINUX64ES2_DEBUG)/level.o $(OBJDIR_LINUX64ES2_DEBUG)/level_manager.o $(OBJDIR_LINUX64ES2_DEBUG)/logging.o $(OBJDIR_LINUX64ES2_DEBUG)/main.o $(OBJDIR_LINUX64ES2_DEBUG)/mesh_texture_loader.o $(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_menu_tutorial3.o $(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_menu_profiles.o $(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_menu_replaytheatre.o $(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_menu_rivals.o $(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_menu_rivals_score.o $(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_menu_selecthover.o $(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_menu_timeattack.o $(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_modellist.o $(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_nodemanager.o $(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_touch.o $(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_user_controls.o $(OBJDIR_LINUX64ES2_DEBUG)/helper_file.o $(OBJDIR_LINUX64ES2_DEBUG)/helper_irr.o $(OBJDIR_LINUX64ES2_DEBUG)/streaming.o $(OBJDIR_LINUX64ES2_DEBUG)/random.o $(OBJDIR_LINUX64ES2_DEBUG)/recorder.o $(OBJDIR_LINUX64ES2_DEBUG)/rivalsmode.o $(OBJDIR_LINUX64ES2_DEBUG)/sound_openal.o $(OBJDIR_LINUX64ES2_DEBUG)/sound_settings.o $(OBJDIR_LINUX64ES2_DEBUG)/start_browser.o $(OBJDIR_LINUX64ES2_DEBUG)/string_table.o $(OBJDIR_LINUX64ES2_DEBUG)/timer.o $(OBJDIR_LINUX64ES2_DEBUG)/tinyxml/tinystr.o $(OBJDIR_LINUX64ES2_DEBUG)/tinyxml/tinyxml.o $(OBJDIR_LINUX64ES2_DEBUG)/tinyxml/tinyxmlerror.o $(OBJDIR_LINUX64ES2_DEBUG)/tinyxml/tinyxmlparser.o $(OBJDIR_LINUX64ES2_DEBUG)/track_marker.o $(OBJDIR_LINUX64ES2_DEBUG)/mobile/advert_admob.o $(OBJDIR_LINUX64ES2_DEBUG)/mobile/android_tools.o $(OBJDIR_LINUX64ES2_DEBUG)/mobile/app_restrictions.o $(OBJDIR_LINUX64ES2_DEBUG)/mobile/billing_googleplay.o $(OBJDIR_LINUX64ES2_DEBUG)/music_manager.o $(OBJDIR_LINUX64ES2_DEBUG)/nn.o $(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_menu_pause.o $(OBJDIR_LINUX64ES2_DEBUG)/node_manager.o $(OBJDIR_LINUX64ES2_DEBUG)/ogg_stream.o $(OBJDIR_LINUX64ES2_DEBUG)/ogles2_materials.o $(OBJDIR_LINUX64ES2_DEBUG)/ov_callbacks.o $(OBJDIR_LINUX64ES2_DEBUG)/physics.o $(OBJDIR_LINUX64ES2_DEBUG)/player.o $(OBJDIR_LINUX64ES2_DEBUG)/profiles.o $(OBJDIR_LINUX64ES2_DEBUG)/game.o $(OBJDIR_LINUX64ES2_DEBUG)/device_keyboard.o $(OBJDIR_LINUX64ES2_DEBUG)/device_mouse.o $(OBJDIR_LINUX64ES2_DEBUG)/device_touch.o $(OBJDIR_LINUX64ES2_DEBUG)/device_touch_settings.o $(OBJDIR_LINUX64ES2_DEBUG)/editor.o $(OBJDIR_LINUX64ES2_DEBUG)/event_receiver_base.o $(OBJDIR_LINUX64ES2_DEBUG)/font_manager.o $(OBJDIR_LINUX64ES2_DEBUG)/grid_triangle_selector.o $(OBJDIR_LINUX64ES2_DEBUG)/gui.o $(OBJDIR_LINUX64ES2_DEBUG)/gui_dialog.o $(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_ai.o $(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_controller_display.o $(OBJDIR_LINUX64ES2_DEBUG)/CGUITextSlider.o $(OBJDIR_LINUX64ES2_DEBUG)/CLMOMeshFileLoader.o $(OBJDIR_LINUX64ES2_DEBUG)/ai_track.o $(OBJDIR_LINUX64ES2_DEBUG)/app_tester.o $(OBJDIR_LINUX64ES2_DEBUG)/camera.o $(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_developer_settings.o $(OBJDIR_LINUX64ES2_DEBUG)/championship.o $(OBJDIR_LINUX64ES2_DEBUG)/config.o $(OBJDIR_LINUX64ES2_DEBUG)/controller.o $(OBJDIR_LINUX64ES2_DEBUG)/convert_utf.o $(OBJDIR_LINUX64ES2_DEBUG)/device_joystick.o $(OBJDIR_LINUX64ES2_DEBUG)/device_joystick_settings.o $(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_menu_keyboard.o $(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_menu_gameend.o $(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_menu_gameend_champ.o $(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_menu_gameend_rivals.o $(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_menu_graphics.o $(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_menu_highscores.o $(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_menu_hover_unlocked.o $(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_menu_credits.o $(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_menu_licenses.o $(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_menu_loadingscreen.o $(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_menu_main.o $(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_menu_nagscreen.o $(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_menu_newprofile.o $(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_menu_options.o $(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_levelmanager.o $(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_dlg_okcancel.o $(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_editor.o $(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_game.o $(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_helper.o $(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_hud.o $(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_intro.o $(OBJDIR_LINUX64ES2_DEBUG)/CGUITTFont.o $(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_menu_analog.o $(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_menu_arcade.o $(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_menu_championship.o $(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_menu_championship_progress.o $(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_menu_championship_winner.o $(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_menu_controls.o

all: linux64_debug linux64_release linux32_debug linux32_release linux64es2_debug

clean: clean_linux64_debug clean_linux64_release clean_linux32_debug clean_linux32_release clean_linux64es2_debug

before_linux64_debug: 
	test -d .. || mkdir -p ..
	test -d $(OBJDIR_LINUX64_DEBUG) || mkdir -p $(OBJDIR_LINUX64_DEBUG)
	test -d $(OBJDIR_LINUX64_DEBUG)/gui_dialogs || mkdir -p $(OBJDIR_LINUX64_DEBUG)/gui_dialogs
	test -d $(OBJDIR_LINUX64_DEBUG)/tinyxml || mkdir -p $(OBJDIR_LINUX64_DEBUG)/tinyxml
	test -d $(OBJDIR_LINUX64_DEBUG)/mobile || mkdir -p $(OBJDIR_LINUX64_DEBUG)/mobile

after_linux64_debug: 

linux64_debug: before_linux64_debug out_linux64_debug after_linux64_debug

out_linux64_debug: before_linux64_debug $(OBJ_LINUX64_DEBUG) $(DEP_LINUX64_DEBUG)
	$(LD) $(LIBDIR_LINUX64_DEBUG) -o $(OUT_LINUX64_DEBUG) $(OBJ_LINUX64_DEBUG)  $(LDFLAGS_LINUX64_DEBUG) $(LIB_LINUX64_DEBUG)

$(OBJDIR_LINUX64_DEBUG)/irrlicht_manager.o: irrlicht_manager.cpp
	$(CXX) $(CFLAGS_LINUX64_DEBUG) $(INC_LINUX64_DEBUG) -c irrlicht_manager.cpp -o $(OBJDIR_LINUX64_DEBUG)/irrlicht_manager.o

$(OBJDIR_LINUX64_DEBUG)/helper_math.o: helper_math.cpp
	$(CXX) $(CFLAGS_LINUX64_DEBUG) $(INC_LINUX64_DEBUG) -c helper_math.cpp -o $(OBJDIR_LINUX64_DEBUG)/helper_math.o

$(OBJDIR_LINUX64_DEBUG)/helper_str.o: helper_str.cpp
	$(CXX) $(CFLAGS_LINUX64_DEBUG) $(INC_LINUX64_DEBUG) -c helper_str.cpp -o $(OBJDIR_LINUX64_DEBUG)/helper_str.o

$(OBJDIR_LINUX64_DEBUG)/helper_xml.o: helper_xml.cpp
	$(CXX) $(CFLAGS_LINUX64_DEBUG) $(INC_LINUX64_DEBUG) -c helper_xml.cpp -o $(OBJDIR_LINUX64_DEBUG)/helper_xml.o

$(OBJDIR_LINUX64_DEBUG)/highscores.o: highscores.cpp
	$(CXX) $(CFLAGS_LINUX64_DEBUG) $(INC_LINUX64_DEBUG) -c highscores.cpp -o $(OBJDIR_LINUX64_DEBUG)/highscores.o

$(OBJDIR_LINUX64_DEBUG)/hover.o: hover.cpp
	$(CXX) $(CFLAGS_LINUX64_DEBUG) $(INC_LINUX64_DEBUG) -c hover.cpp -o $(OBJDIR_LINUX64_DEBUG)/hover.o

$(OBJDIR_LINUX64_DEBUG)/input_device.o: input_device.cpp
	$(CXX) $(CFLAGS_LINUX64_DEBUG) $(INC_LINUX64_DEBUG) -c input_device.cpp -o $(OBJDIR_LINUX64_DEBUG)/input_device.o

$(OBJDIR_LINUX64_DEBUG)/input_device_manager.o: input_device_manager.cpp
	$(CXX) $(CFLAGS_LINUX64_DEBUG) $(INC_LINUX64_DEBUG) -c input_device_manager.cpp -o $(OBJDIR_LINUX64_DEBUG)/input_device_manager.o

$(OBJDIR_LINUX64_DEBUG)/keycode_strings.o: keycode_strings.cpp
	$(CXX) $(CFLAGS_LINUX64_DEBUG) $(INC_LINUX64_DEBUG) -c keycode_strings.cpp -o $(OBJDIR_LINUX64_DEBUG)/keycode_strings.o

$(OBJDIR_LINUX64_DEBUG)/level.o: level.cpp
	$(CXX) $(CFLAGS_LINUX64_DEBUG) $(INC_LINUX64_DEBUG) -c level.cpp -o $(OBJDIR_LINUX64_DEBUG)/level.o

$(OBJDIR_LINUX64_DEBUG)/level_manager.o: level_manager.cpp
	$(CXX) $(CFLAGS_LINUX64_DEBUG) $(INC_LINUX64_DEBUG) -c level_manager.cpp -o $(OBJDIR_LINUX64_DEBUG)/level_manager.o

$(OBJDIR_LINUX64_DEBUG)/logging.o: logging.cpp
	$(CXX) $(CFLAGS_LINUX64_DEBUG) $(INC_LINUX64_DEBUG) -c logging.cpp -o $(OBJDIR_LINUX64_DEBUG)/logging.o

$(OBJDIR_LINUX64_DEBUG)/main.o: main.cpp
	$(CXX) $(CFLAGS_LINUX64_DEBUG) $(INC_LINUX64_DEBUG) -c main.cpp -o $(OBJDIR_LINUX64_DEBUG)/main.o

$(OBJDIR_LINUX64_DEBUG)/mesh_texture_loader.o: mesh_texture_loader.cpp
	$(CXX) $(CFLAGS_LINUX64_DEBUG) $(INC_LINUX64_DEBUG) -c mesh_texture_loader.cpp -o $(OBJDIR_LINUX64_DEBUG)/mesh_texture_loader.o

$(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_menu_tutorial3.o: gui_dialogs/gui_menu_tutorial3.cpp
	$(CXX) $(CFLAGS_LINUX64_DEBUG) $(INC_LINUX64_DEBUG) -c gui_dialogs/gui_menu_tutorial3.cpp -o $(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_menu_tutorial3.o

$(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_menu_profiles.o: gui_dialogs/gui_menu_profiles.cpp
	$(CXX) $(CFLAGS_LINUX64_DEBUG) $(INC_LINUX64_DEBUG) -c gui_dialogs/gui_menu_profiles.cpp -o $(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_menu_profiles.o

$(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_menu_replaytheatre.o: gui_dialogs/gui_menu_replaytheatre.cpp
	$(CXX) $(CFLAGS_LINUX64_DEBUG) $(INC_LINUX64_DEBUG) -c gui_dialogs/gui_menu_replaytheatre.cpp -o $(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_menu_replaytheatre.o

$(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_menu_rivals.o: gui_dialogs/gui_menu_rivals.cpp
	$(CXX) $(CFLAGS_LINUX64_DEBUG) $(INC_LINUX64_DEBUG) -c gui_dialogs/gui_menu_rivals.cpp -o $(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_menu_rivals.o

$(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_menu_rivals_score.o: gui_dialogs/gui_menu_rivals_score.cpp
	$(CXX) $(CFLAGS_LINUX64_DEBUG) $(INC_LINUX64_DEBUG) -c gui_dialogs/gui_menu_rivals_score.cpp -o $(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_menu_rivals_score.o

$(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_menu_selecthover.o: gui_dialogs/gui_menu_selecthover.cpp
	$(CXX) $(CFLAGS_LINUX64_DEBUG) $(INC_LINUX64_DEBUG) -c gui_dialogs/gui_menu_selecthover.cpp -o $(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_menu_selecthover.o

$(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_menu_timeattack.o: gui_dialogs/gui_menu_timeattack.cpp
	$(CXX) $(CFLAGS_LINUX64_DEBUG) $(INC_LINUX64_DEBUG) -c gui_dialogs/gui_menu_timeattack.cpp -o $(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_menu_timeattack.o

$(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_modellist.o: gui_dialogs/gui_modellist.cpp
	$(CXX) $(CFLAGS_LINUX64_DEBUG) $(INC_LINUX64_DEBUG) -c gui_dialogs/gui_modellist.cpp -o $(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_modellist.o

$(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_nodemanager.o: gui_dialogs/gui_nodemanager.cpp
	$(CXX) $(CFLAGS_LINUX64_DEBUG) $(INC_LINUX64_DEBUG) -c gui_dialogs/gui_nodemanager.cpp -o $(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_nodemanager.o

$(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_touch.o: gui_dialogs/gui_touch.cpp
	$(CXX) $(CFLAGS_LINUX64_DEBUG) $(INC_LINUX64_DEBUG) -c gui_dialogs/gui_touch.cpp -o $(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_touch.o

$(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_user_controls.o: gui_dialogs/gui_user_controls.cpp
	$(CXX) $(CFLAGS_LINUX64_DEBUG) $(INC_LINUX64_DEBUG) -c gui_dialogs/gui_user_controls.cpp -o $(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_user_controls.o

$(OBJDIR_LINUX64_DEBUG)/helper_file.o: helper_file.cpp
	$(CXX) $(CFLAGS_LINUX64_DEBUG) $(INC_LINUX64_DEBUG) -c helper_file.cpp -o $(OBJDIR_LINUX64_DEBUG)/helper_file.o

$(OBJDIR_LINUX64_DEBUG)/helper_irr.o: helper_irr.cpp
	$(CXX) $(CFLAGS_LINUX64_DEBUG) $(INC_LINUX64_DEBUG) -c helper_irr.cpp -o $(OBJDIR_LINUX64_DEBUG)/helper_irr.o

$(OBJDIR_LINUX64_DEBUG)/streaming.o: streaming.cpp
	$(CXX) $(CFLAGS_LINUX64_DEBUG) $(INC_LINUX64_DEBUG) -c streaming.cpp -o $(OBJDIR_LINUX64_DEBUG)/streaming.o

$(OBJDIR_LINUX64_DEBUG)/random.o: random.cpp
	$(CXX) $(CFLAGS_LINUX64_DEBUG) $(INC_LINUX64_DEBUG) -c random.cpp -o $(OBJDIR_LINUX64_DEBUG)/random.o

$(OBJDIR_LINUX64_DEBUG)/recorder.o: recorder.cpp
	$(CXX) $(CFLAGS_LINUX64_DEBUG) $(INC_LINUX64_DEBUG) -c recorder.cpp -o $(OBJDIR_LINUX64_DEBUG)/recorder.o

$(OBJDIR_LINUX64_DEBUG)/rivalsmode.o: rivalsmode.cpp
	$(CXX) $(CFLAGS_LINUX64_DEBUG) $(INC_LINUX64_DEBUG) -c rivalsmode.cpp -o $(OBJDIR_LINUX64_DEBUG)/rivalsmode.o

$(OBJDIR_LINUX64_DEBUG)/sound_openal.o: sound_openal.cpp
	$(CXX) $(CFLAGS_LINUX64_DEBUG) $(INC_LINUX64_DEBUG) -c sound_openal.cpp -o $(OBJDIR_LINUX64_DEBUG)/sound_openal.o

$(OBJDIR_LINUX64_DEBUG)/sound_settings.o: sound_settings.cpp
	$(CXX) $(CFLAGS_LINUX64_DEBUG) $(INC_LINUX64_DEBUG) -c sound_settings.cpp -o $(OBJDIR_LINUX64_DEBUG)/sound_settings.o

$(OBJDIR_LINUX64_DEBUG)/start_browser.o: start_browser.cpp
	$(CXX) $(CFLAGS_LINUX64_DEBUG) $(INC_LINUX64_DEBUG) -c start_browser.cpp -o $(OBJDIR_LINUX64_DEBUG)/start_browser.o

$(OBJDIR_LINUX64_DEBUG)/string_table.o: string_table.cpp
	$(CXX) $(CFLAGS_LINUX64_DEBUG) $(INC_LINUX64_DEBUG) -c string_table.cpp -o $(OBJDIR_LINUX64_DEBUG)/string_table.o

$(OBJDIR_LINUX64_DEBUG)/timer.o: timer.cpp
	$(CXX) $(CFLAGS_LINUX64_DEBUG) $(INC_LINUX64_DEBUG) -c timer.cpp -o $(OBJDIR_LINUX64_DEBUG)/timer.o

$(OBJDIR_LINUX64_DEBUG)/tinyxml/tinystr.o: tinyxml/tinystr.cpp
	$(CXX) $(CFLAGS_LINUX64_DEBUG) $(INC_LINUX64_DEBUG) -c tinyxml/tinystr.cpp -o $(OBJDIR_LINUX64_DEBUG)/tinyxml/tinystr.o

$(OBJDIR_LINUX64_DEBUG)/tinyxml/tinyxml.o: tinyxml/tinyxml.cpp
	$(CXX) $(CFLAGS_LINUX64_DEBUG) $(INC_LINUX64_DEBUG) -c tinyxml/tinyxml.cpp -o $(OBJDIR_LINUX64_DEBUG)/tinyxml/tinyxml.o

$(OBJDIR_LINUX64_DEBUG)/tinyxml/tinyxmlerror.o: tinyxml/tinyxmlerror.cpp
	$(CXX) $(CFLAGS_LINUX64_DEBUG) $(INC_LINUX64_DEBUG) -c tinyxml/tinyxmlerror.cpp -o $(OBJDIR_LINUX64_DEBUG)/tinyxml/tinyxmlerror.o

$(OBJDIR_LINUX64_DEBUG)/tinyxml/tinyxmlparser.o: tinyxml/tinyxmlparser.cpp
	$(CXX) $(CFLAGS_LINUX64_DEBUG) $(INC_LINUX64_DEBUG) -c tinyxml/tinyxmlparser.cpp -o $(OBJDIR_LINUX64_DEBUG)/tinyxml/tinyxmlparser.o

$(OBJDIR_LINUX64_DEBUG)/track_marker.o: track_marker.cpp
	$(CXX) $(CFLAGS_LINUX64_DEBUG) $(INC_LINUX64_DEBUG) -c track_marker.cpp -o $(OBJDIR_LINUX64_DEBUG)/track_marker.o

$(OBJDIR_LINUX64_DEBUG)/mobile/advert_admob.o: mobile/advert_admob.cpp
	$(CXX) $(CFLAGS_LINUX64_DEBUG) $(INC_LINUX64_DEBUG) -c mobile/advert_admob.cpp -o $(OBJDIR_LINUX64_DEBUG)/mobile/advert_admob.o

$(OBJDIR_LINUX64_DEBUG)/mobile/android_tools.o: mobile/android_tools.cpp
	$(CXX) $(CFLAGS_LINUX64_DEBUG) $(INC_LINUX64_DEBUG) -c mobile/android_tools.cpp -o $(OBJDIR_LINUX64_DEBUG)/mobile/android_tools.o

$(OBJDIR_LINUX64_DEBUG)/mobile/app_restrictions.o: mobile/app_restrictions.cpp
	$(CXX) $(CFLAGS_LINUX64_DEBUG) $(INC_LINUX64_DEBUG) -c mobile/app_restrictions.cpp -o $(OBJDIR_LINUX64_DEBUG)/mobile/app_restrictions.o

$(OBJDIR_LINUX64_DEBUG)/mobile/billing_googleplay.o: mobile/billing_googleplay.cpp
	$(CXX) $(CFLAGS_LINUX64_DEBUG) $(INC_LINUX64_DEBUG) -c mobile/billing_googleplay.cpp -o $(OBJDIR_LINUX64_DEBUG)/mobile/billing_googleplay.o

$(OBJDIR_LINUX64_DEBUG)/music_manager.o: music_manager.cpp
	$(CXX) $(CFLAGS_LINUX64_DEBUG) $(INC_LINUX64_DEBUG) -c music_manager.cpp -o $(OBJDIR_LINUX64_DEBUG)/music_manager.o

$(OBJDIR_LINUX64_DEBUG)/nn.o: nn.cpp
	$(CXX) $(CFLAGS_LINUX64_DEBUG) $(INC_LINUX64_DEBUG) -c nn.cpp -o $(OBJDIR_LINUX64_DEBUG)/nn.o

$(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_menu_pause.o: gui_dialogs/gui_menu_pause.cpp
	$(CXX) $(CFLAGS_LINUX64_DEBUG) $(INC_LINUX64_DEBUG) -c gui_dialogs/gui_menu_pause.cpp -o $(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_menu_pause.o

$(OBJDIR_LINUX64_DEBUG)/node_manager.o: node_manager.cpp
	$(CXX) $(CFLAGS_LINUX64_DEBUG) $(INC_LINUX64_DEBUG) -c node_manager.cpp -o $(OBJDIR_LINUX64_DEBUG)/node_manager.o

$(OBJDIR_LINUX64_DEBUG)/ogg_stream.o: ogg_stream.cpp
	$(CXX) $(CFLAGS_LINUX64_DEBUG) $(INC_LINUX64_DEBUG) -c ogg_stream.cpp -o $(OBJDIR_LINUX64_DEBUG)/ogg_stream.o

$(OBJDIR_LINUX64_DEBUG)/ogles2_materials.o: ogles2_materials.cpp
	$(CXX) $(CFLAGS_LINUX64_DEBUG) $(INC_LINUX64_DEBUG) -c ogles2_materials.cpp -o $(OBJDIR_LINUX64_DEBUG)/ogles2_materials.o

$(OBJDIR_LINUX64_DEBUG)/ov_callbacks.o: ov_callbacks.cpp
	$(CXX) $(CFLAGS_LINUX64_DEBUG) $(INC_LINUX64_DEBUG) -c ov_callbacks.cpp -o $(OBJDIR_LINUX64_DEBUG)/ov_callbacks.o

$(OBJDIR_LINUX64_DEBUG)/physics.o: physics.cpp
	$(CXX) $(CFLAGS_LINUX64_DEBUG) $(INC_LINUX64_DEBUG) -c physics.cpp -o $(OBJDIR_LINUX64_DEBUG)/physics.o

$(OBJDIR_LINUX64_DEBUG)/player.o: player.cpp
	$(CXX) $(CFLAGS_LINUX64_DEBUG) $(INC_LINUX64_DEBUG) -c player.cpp -o $(OBJDIR_LINUX64_DEBUG)/player.o

$(OBJDIR_LINUX64_DEBUG)/profiles.o: profiles.cpp
	$(CXX) $(CFLAGS_LINUX64_DEBUG) $(INC_LINUX64_DEBUG) -c profiles.cpp -o $(OBJDIR_LINUX64_DEBUG)/profiles.o

$(OBJDIR_LINUX64_DEBUG)/game.o: game.cpp
	$(CXX) $(CFLAGS_LINUX64_DEBUG) $(INC_LINUX64_DEBUG) -c game.cpp -o $(OBJDIR_LINUX64_DEBUG)/game.o

$(OBJDIR_LINUX64_DEBUG)/device_keyboard.o: device_keyboard.cpp
	$(CXX) $(CFLAGS_LINUX64_DEBUG) $(INC_LINUX64_DEBUG) -c device_keyboard.cpp -o $(OBJDIR_LINUX64_DEBUG)/device_keyboard.o

$(OBJDIR_LINUX64_DEBUG)/device_mouse.o: device_mouse.cpp
	$(CXX) $(CFLAGS_LINUX64_DEBUG) $(INC_LINUX64_DEBUG) -c device_mouse.cpp -o $(OBJDIR_LINUX64_DEBUG)/device_mouse.o

$(OBJDIR_LINUX64_DEBUG)/device_touch.o: device_touch.cpp
	$(CXX) $(CFLAGS_LINUX64_DEBUG) $(INC_LINUX64_DEBUG) -c device_touch.cpp -o $(OBJDIR_LINUX64_DEBUG)/device_touch.o

$(OBJDIR_LINUX64_DEBUG)/device_touch_settings.o: device_touch_settings.cpp
	$(CXX) $(CFLAGS_LINUX64_DEBUG) $(INC_LINUX64_DEBUG) -c device_touch_settings.cpp -o $(OBJDIR_LINUX64_DEBUG)/device_touch_settings.o

$(OBJDIR_LINUX64_DEBUG)/editor.o: editor.cpp
	$(CXX) $(CFLAGS_LINUX64_DEBUG) $(INC_LINUX64_DEBUG) -c editor.cpp -o $(OBJDIR_LINUX64_DEBUG)/editor.o

$(OBJDIR_LINUX64_DEBUG)/event_receiver_base.o: event_receiver_base.cpp
	$(CXX) $(CFLAGS_LINUX64_DEBUG) $(INC_LINUX64_DEBUG) -c event_receiver_base.cpp -o $(OBJDIR_LINUX64_DEBUG)/event_receiver_base.o

$(OBJDIR_LINUX64_DEBUG)/font_manager.o: font_manager.cpp
	$(CXX) $(CFLAGS_LINUX64_DEBUG) $(INC_LINUX64_DEBUG) -c font_manager.cpp -o $(OBJDIR_LINUX64_DEBUG)/font_manager.o

$(OBJDIR_LINUX64_DEBUG)/grid_triangle_selector.o: grid_triangle_selector.cpp
	$(CXX) $(CFLAGS_LINUX64_DEBUG) $(INC_LINUX64_DEBUG) -c grid_triangle_selector.cpp -o $(OBJDIR_LINUX64_DEBUG)/grid_triangle_selector.o

$(OBJDIR_LINUX64_DEBUG)/gui.o: gui.cpp
	$(CXX) $(CFLAGS_LINUX64_DEBUG) $(INC_LINUX64_DEBUG) -c gui.cpp -o $(OBJDIR_LINUX64_DEBUG)/gui.o

$(OBJDIR_LINUX64_DEBUG)/gui_dialog.o: gui_dialog.cpp
	$(CXX) $(CFLAGS_LINUX64_DEBUG) $(INC_LINUX64_DEBUG) -c gui_dialog.cpp -o $(OBJDIR_LINUX64_DEBUG)/gui_dialog.o

$(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_ai.o: gui_dialogs/gui_ai.cpp
	$(CXX) $(CFLAGS_LINUX64_DEBUG) $(INC_LINUX64_DEBUG) -c gui_dialogs/gui_ai.cpp -o $(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_ai.o

$(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_controller_display.o: gui_dialogs/gui_controller_display.cpp
	$(CXX) $(CFLAGS_LINUX64_DEBUG) $(INC_LINUX64_DEBUG) -c gui_dialogs/gui_controller_display.cpp -o $(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_controller_display.o

$(OBJDIR_LINUX64_DEBUG)/CGUITextSlider.o: CGUITextSlider.cpp
	$(CXX) $(CFLAGS_LINUX64_DEBUG) $(INC_LINUX64_DEBUG) -c CGUITextSlider.cpp -o $(OBJDIR_LINUX64_DEBUG)/CGUITextSlider.o

$(OBJDIR_LINUX64_DEBUG)/CLMOMeshFileLoader.o: CLMOMeshFileLoader.cpp
	$(CXX) $(CFLAGS_LINUX64_DEBUG) $(INC_LINUX64_DEBUG) -c CLMOMeshFileLoader.cpp -o $(OBJDIR_LINUX64_DEBUG)/CLMOMeshFileLoader.o

$(OBJDIR_LINUX64_DEBUG)/ai_track.o: ai_track.cpp
	$(CXX) $(CFLAGS_LINUX64_DEBUG) $(INC_LINUX64_DEBUG) -c ai_track.cpp -o $(OBJDIR_LINUX64_DEBUG)/ai_track.o

$(OBJDIR_LINUX64_DEBUG)/app_tester.o: app_tester.cpp
	$(CXX) $(CFLAGS_LINUX64_DEBUG) $(INC_LINUX64_DEBUG) -c app_tester.cpp -o $(OBJDIR_LINUX64_DEBUG)/app_tester.o

$(OBJDIR_LINUX64_DEBUG)/camera.o: camera.cpp
	$(CXX) $(CFLAGS_LINUX64_DEBUG) $(INC_LINUX64_DEBUG) -c camera.cpp -o $(OBJDIR_LINUX64_DEBUG)/camera.o

$(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_developer_settings.o: gui_dialogs/gui_developer_settings.cpp
	$(CXX) $(CFLAGS_LINUX64_DEBUG) $(INC_LINUX64_DEBUG) -c gui_dialogs/gui_developer_settings.cpp -o $(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_developer_settings.o

$(OBJDIR_LINUX64_DEBUG)/championship.o: championship.cpp
	$(CXX) $(CFLAGS_LINUX64_DEBUG) $(INC_LINUX64_DEBUG) -c championship.cpp -o $(OBJDIR_LINUX64_DEBUG)/championship.o

$(OBJDIR_LINUX64_DEBUG)/config.o: config.cpp
	$(CXX) $(CFLAGS_LINUX64_DEBUG) $(INC_LINUX64_DEBUG) -c config.cpp -o $(OBJDIR_LINUX64_DEBUG)/config.o

$(OBJDIR_LINUX64_DEBUG)/controller.o: controller.cpp
	$(CXX) $(CFLAGS_LINUX64_DEBUG) $(INC_LINUX64_DEBUG) -c controller.cpp -o $(OBJDIR_LINUX64_DEBUG)/controller.o

$(OBJDIR_LINUX64_DEBUG)/convert_utf.o: convert_utf.c
	$(CC) $(CFLAGS_LINUX64_DEBUG) $(INC_LINUX64_DEBUG) -c convert_utf.c -o $(OBJDIR_LINUX64_DEBUG)/convert_utf.o

$(OBJDIR_LINUX64_DEBUG)/device_joystick.o: device_joystick.cpp
	$(CXX) $(CFLAGS_LINUX64_DEBUG) $(INC_LINUX64_DEBUG) -c device_joystick.cpp -o $(OBJDIR_LINUX64_DEBUG)/device_joystick.o

$(OBJDIR_LINUX64_DEBUG)/device_joystick_settings.o: device_joystick_settings.cpp
	$(CXX) $(CFLAGS_LINUX64_DEBUG) $(INC_LINUX64_DEBUG) -c device_joystick_settings.cpp -o $(OBJDIR_LINUX64_DEBUG)/device_joystick_settings.o

$(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_menu_keyboard.o: gui_dialogs/gui_menu_keyboard.cpp
	$(CXX) $(CFLAGS_LINUX64_DEBUG) $(INC_LINUX64_DEBUG) -c gui_dialogs/gui_menu_keyboard.cpp -o $(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_menu_keyboard.o

$(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_menu_gameend.o: gui_dialogs/gui_menu_gameend.cpp
	$(CXX) $(CFLAGS_LINUX64_DEBUG) $(INC_LINUX64_DEBUG) -c gui_dialogs/gui_menu_gameend.cpp -o $(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_menu_gameend.o

$(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_menu_gameend_champ.o: gui_dialogs/gui_menu_gameend_champ.cpp
	$(CXX) $(CFLAGS_LINUX64_DEBUG) $(INC_LINUX64_DEBUG) -c gui_dialogs/gui_menu_gameend_champ.cpp -o $(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_menu_gameend_champ.o

$(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_menu_gameend_rivals.o: gui_dialogs/gui_menu_gameend_rivals.cpp
	$(CXX) $(CFLAGS_LINUX64_DEBUG) $(INC_LINUX64_DEBUG) -c gui_dialogs/gui_menu_gameend_rivals.cpp -o $(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_menu_gameend_rivals.o

$(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_menu_graphics.o: gui_dialogs/gui_menu_graphics.cpp
	$(CXX) $(CFLAGS_LINUX64_DEBUG) $(INC_LINUX64_DEBUG) -c gui_dialogs/gui_menu_graphics.cpp -o $(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_menu_graphics.o

$(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_menu_highscores.o: gui_dialogs/gui_menu_highscores.cpp
	$(CXX) $(CFLAGS_LINUX64_DEBUG) $(INC_LINUX64_DEBUG) -c gui_dialogs/gui_menu_highscores.cpp -o $(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_menu_highscores.o

$(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_menu_hover_unlocked.o: gui_dialogs/gui_menu_hover_unlocked.cpp
	$(CXX) $(CFLAGS_LINUX64_DEBUG) $(INC_LINUX64_DEBUG) -c gui_dialogs/gui_menu_hover_unlocked.cpp -o $(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_menu_hover_unlocked.o

$(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_menu_credits.o: gui_dialogs/gui_menu_credits.cpp
	$(CXX) $(CFLAGS_LINUX64_DEBUG) $(INC_LINUX64_DEBUG) -c gui_dialogs/gui_menu_credits.cpp -o $(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_menu_credits.o

$(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_menu_licenses.o: gui_dialogs/gui_menu_licenses.cpp
	$(CXX) $(CFLAGS_LINUX64_DEBUG) $(INC_LINUX64_DEBUG) -c gui_dialogs/gui_menu_licenses.cpp -o $(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_menu_licenses.o

$(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_menu_loadingscreen.o: gui_dialogs/gui_menu_loadingscreen.cpp
	$(CXX) $(CFLAGS_LINUX64_DEBUG) $(INC_LINUX64_DEBUG) -c gui_dialogs/gui_menu_loadingscreen.cpp -o $(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_menu_loadingscreen.o

$(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_menu_main.o: gui_dialogs/gui_menu_main.cpp
	$(CXX) $(CFLAGS_LINUX64_DEBUG) $(INC_LINUX64_DEBUG) -c gui_dialogs/gui_menu_main.cpp -o $(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_menu_main.o

$(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_menu_nagscreen.o: gui_dialogs/gui_menu_nagscreen.cpp
	$(CXX) $(CFLAGS_LINUX64_DEBUG) $(INC_LINUX64_DEBUG) -c gui_dialogs/gui_menu_nagscreen.cpp -o $(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_menu_nagscreen.o

$(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_menu_newprofile.o: gui_dialogs/gui_menu_newprofile.cpp
	$(CXX) $(CFLAGS_LINUX64_DEBUG) $(INC_LINUX64_DEBUG) -c gui_dialogs/gui_menu_newprofile.cpp -o $(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_menu_newprofile.o

$(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_menu_options.o: gui_dialogs/gui_menu_options.cpp
	$(CXX) $(CFLAGS_LINUX64_DEBUG) $(INC_LINUX64_DEBUG) -c gui_dialogs/gui_menu_options.cpp -o $(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_menu_options.o

$(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_levelmanager.o: gui_dialogs/gui_levelmanager.cpp
	$(CXX) $(CFLAGS_LINUX64_DEBUG) $(INC_LINUX64_DEBUG) -c gui_dialogs/gui_levelmanager.cpp -o $(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_levelmanager.o

$(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_dlg_okcancel.o: gui_dialogs/gui_dlg_okcancel.cpp
	$(CXX) $(CFLAGS_LINUX64_DEBUG) $(INC_LINUX64_DEBUG) -c gui_dialogs/gui_dlg_okcancel.cpp -o $(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_dlg_okcancel.o

$(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_editor.o: gui_dialogs/gui_editor.cpp
	$(CXX) $(CFLAGS_LINUX64_DEBUG) $(INC_LINUX64_DEBUG) -c gui_dialogs/gui_editor.cpp -o $(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_editor.o

$(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_game.o: gui_dialogs/gui_game.cpp
	$(CXX) $(CFLAGS_LINUX64_DEBUG) $(INC_LINUX64_DEBUG) -c gui_dialogs/gui_game.cpp -o $(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_game.o

$(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_helper.o: gui_dialogs/gui_helper.cpp
	$(CXX) $(CFLAGS_LINUX64_DEBUG) $(INC_LINUX64_DEBUG) -c gui_dialogs/gui_helper.cpp -o $(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_helper.o

$(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_hud.o: gui_dialogs/gui_hud.cpp
	$(CXX) $(CFLAGS_LINUX64_DEBUG) $(INC_LINUX64_DEBUG) -c gui_dialogs/gui_hud.cpp -o $(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_hud.o

$(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_intro.o: gui_dialogs/gui_intro.cpp
	$(CXX) $(CFLAGS_LINUX64_DEBUG) $(INC_LINUX64_DEBUG) -c gui_dialogs/gui_intro.cpp -o $(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_intro.o

$(OBJDIR_LINUX64_DEBUG)/CGUITTFont.o: CGUITTFont.cpp
	$(CXX) $(CFLAGS_LINUX64_DEBUG) $(INC_LINUX64_DEBUG) -c CGUITTFont.cpp -o $(OBJDIR_LINUX64_DEBUG)/CGUITTFont.o

$(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_menu_analog.o: gui_dialogs/gui_menu_analog.cpp
	$(CXX) $(CFLAGS_LINUX64_DEBUG) $(INC_LINUX64_DEBUG) -c gui_dialogs/gui_menu_analog.cpp -o $(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_menu_analog.o

$(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_menu_arcade.o: gui_dialogs/gui_menu_arcade.cpp
	$(CXX) $(CFLAGS_LINUX64_DEBUG) $(INC_LINUX64_DEBUG) -c gui_dialogs/gui_menu_arcade.cpp -o $(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_menu_arcade.o

$(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_menu_championship.o: gui_dialogs/gui_menu_championship.cpp
	$(CXX) $(CFLAGS_LINUX64_DEBUG) $(INC_LINUX64_DEBUG) -c gui_dialogs/gui_menu_championship.cpp -o $(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_menu_championship.o

$(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_menu_championship_progress.o: gui_dialogs/gui_menu_championship_progress.cpp
	$(CXX) $(CFLAGS_LINUX64_DEBUG) $(INC_LINUX64_DEBUG) -c gui_dialogs/gui_menu_championship_progress.cpp -o $(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_menu_championship_progress.o

$(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_menu_championship_winner.o: gui_dialogs/gui_menu_championship_winner.cpp
	$(CXX) $(CFLAGS_LINUX64_DEBUG) $(INC_LINUX64_DEBUG) -c gui_dialogs/gui_menu_championship_winner.cpp -o $(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_menu_championship_winner.o

$(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_menu_controls.o: gui_dialogs/gui_menu_controls.cpp
	$(CXX) $(CFLAGS_LINUX64_DEBUG) $(INC_LINUX64_DEBUG) -c gui_dialogs/gui_menu_controls.cpp -o $(OBJDIR_LINUX64_DEBUG)/gui_dialogs/gui_menu_controls.o

clean_linux64_debug: 
	rm -f $(OBJ_LINUX64_DEBUG) $(OUT_LINUX64_DEBUG)
	rm -rf ..
	rm -rf $(OBJDIR_LINUX64_DEBUG)
	rm -rf $(OBJDIR_LINUX64_DEBUG)/gui_dialogs
	rm -rf $(OBJDIR_LINUX64_DEBUG)/tinyxml
	rm -rf $(OBJDIR_LINUX64_DEBUG)/mobile

before_linux64_release: 
	test -d .. || mkdir -p ..
	test -d $(OBJDIR_LINUX64_RELEASE) || mkdir -p $(OBJDIR_LINUX64_RELEASE)
	test -d $(OBJDIR_LINUX64_RELEASE)/gui_dialogs || mkdir -p $(OBJDIR_LINUX64_RELEASE)/gui_dialogs
	test -d $(OBJDIR_LINUX64_RELEASE)/tinyxml || mkdir -p $(OBJDIR_LINUX64_RELEASE)/tinyxml
	test -d $(OBJDIR_LINUX64_RELEASE)/mobile || mkdir -p $(OBJDIR_LINUX64_RELEASE)/mobile

after_linux64_release: 

linux64_release: before_linux64_release out_linux64_release after_linux64_release

out_linux64_release: before_linux64_release $(OBJ_LINUX64_RELEASE) $(DEP_LINUX64_RELEASE)
	$(LD) $(LIBDIR_LINUX64_RELEASE) -o $(OUT_LINUX64_RELEASE) $(OBJ_LINUX64_RELEASE)  $(LDFLAGS_LINUX64_RELEASE) $(LIB_LINUX64_RELEASE)

$(OBJDIR_LINUX64_RELEASE)/irrlicht_manager.o: irrlicht_manager.cpp
	$(CXX) $(CFLAGS_LINUX64_RELEASE) $(INC_LINUX64_RELEASE) -c irrlicht_manager.cpp -o $(OBJDIR_LINUX64_RELEASE)/irrlicht_manager.o

$(OBJDIR_LINUX64_RELEASE)/helper_math.o: helper_math.cpp
	$(CXX) $(CFLAGS_LINUX64_RELEASE) $(INC_LINUX64_RELEASE) -c helper_math.cpp -o $(OBJDIR_LINUX64_RELEASE)/helper_math.o

$(OBJDIR_LINUX64_RELEASE)/helper_str.o: helper_str.cpp
	$(CXX) $(CFLAGS_LINUX64_RELEASE) $(INC_LINUX64_RELEASE) -c helper_str.cpp -o $(OBJDIR_LINUX64_RELEASE)/helper_str.o

$(OBJDIR_LINUX64_RELEASE)/helper_xml.o: helper_xml.cpp
	$(CXX) $(CFLAGS_LINUX64_RELEASE) $(INC_LINUX64_RELEASE) -c helper_xml.cpp -o $(OBJDIR_LINUX64_RELEASE)/helper_xml.o

$(OBJDIR_LINUX64_RELEASE)/highscores.o: highscores.cpp
	$(CXX) $(CFLAGS_LINUX64_RELEASE) $(INC_LINUX64_RELEASE) -c highscores.cpp -o $(OBJDIR_LINUX64_RELEASE)/highscores.o

$(OBJDIR_LINUX64_RELEASE)/hover.o: hover.cpp
	$(CXX) $(CFLAGS_LINUX64_RELEASE) $(INC_LINUX64_RELEASE) -c hover.cpp -o $(OBJDIR_LINUX64_RELEASE)/hover.o

$(OBJDIR_LINUX64_RELEASE)/input_device.o: input_device.cpp
	$(CXX) $(CFLAGS_LINUX64_RELEASE) $(INC_LINUX64_RELEASE) -c input_device.cpp -o $(OBJDIR_LINUX64_RELEASE)/input_device.o

$(OBJDIR_LINUX64_RELEASE)/input_device_manager.o: input_device_manager.cpp
	$(CXX) $(CFLAGS_LINUX64_RELEASE) $(INC_LINUX64_RELEASE) -c input_device_manager.cpp -o $(OBJDIR_LINUX64_RELEASE)/input_device_manager.o

$(OBJDIR_LINUX64_RELEASE)/keycode_strings.o: keycode_strings.cpp
	$(CXX) $(CFLAGS_LINUX64_RELEASE) $(INC_LINUX64_RELEASE) -c keycode_strings.cpp -o $(OBJDIR_LINUX64_RELEASE)/keycode_strings.o

$(OBJDIR_LINUX64_RELEASE)/level.o: level.cpp
	$(CXX) $(CFLAGS_LINUX64_RELEASE) $(INC_LINUX64_RELEASE) -c level.cpp -o $(OBJDIR_LINUX64_RELEASE)/level.o

$(OBJDIR_LINUX64_RELEASE)/level_manager.o: level_manager.cpp
	$(CXX) $(CFLAGS_LINUX64_RELEASE) $(INC_LINUX64_RELEASE) -c level_manager.cpp -o $(OBJDIR_LINUX64_RELEASE)/level_manager.o

$(OBJDIR_LINUX64_RELEASE)/logging.o: logging.cpp
	$(CXX) $(CFLAGS_LINUX64_RELEASE) $(INC_LINUX64_RELEASE) -c logging.cpp -o $(OBJDIR_LINUX64_RELEASE)/logging.o

$(OBJDIR_LINUX64_RELEASE)/main.o: main.cpp
	$(CXX) $(CFLAGS_LINUX64_RELEASE) $(INC_LINUX64_RELEASE) -c main.cpp -o $(OBJDIR_LINUX64_RELEASE)/main.o

$(OBJDIR_LINUX64_RELEASE)/mesh_texture_loader.o: mesh_texture_loader.cpp
	$(CXX) $(CFLAGS_LINUX64_RELEASE) $(INC_LINUX64_RELEASE) -c mesh_texture_loader.cpp -o $(OBJDIR_LINUX64_RELEASE)/mesh_texture_loader.o

$(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_menu_tutorial3.o: gui_dialogs/gui_menu_tutorial3.cpp
	$(CXX) $(CFLAGS_LINUX64_RELEASE) $(INC_LINUX64_RELEASE) -c gui_dialogs/gui_menu_tutorial3.cpp -o $(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_menu_tutorial3.o

$(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_menu_profiles.o: gui_dialogs/gui_menu_profiles.cpp
	$(CXX) $(CFLAGS_LINUX64_RELEASE) $(INC_LINUX64_RELEASE) -c gui_dialogs/gui_menu_profiles.cpp -o $(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_menu_profiles.o

$(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_menu_replaytheatre.o: gui_dialogs/gui_menu_replaytheatre.cpp
	$(CXX) $(CFLAGS_LINUX64_RELEASE) $(INC_LINUX64_RELEASE) -c gui_dialogs/gui_menu_replaytheatre.cpp -o $(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_menu_replaytheatre.o

$(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_menu_rivals.o: gui_dialogs/gui_menu_rivals.cpp
	$(CXX) $(CFLAGS_LINUX64_RELEASE) $(INC_LINUX64_RELEASE) -c gui_dialogs/gui_menu_rivals.cpp -o $(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_menu_rivals.o

$(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_menu_rivals_score.o: gui_dialogs/gui_menu_rivals_score.cpp
	$(CXX) $(CFLAGS_LINUX64_RELEASE) $(INC_LINUX64_RELEASE) -c gui_dialogs/gui_menu_rivals_score.cpp -o $(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_menu_rivals_score.o

$(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_menu_selecthover.o: gui_dialogs/gui_menu_selecthover.cpp
	$(CXX) $(CFLAGS_LINUX64_RELEASE) $(INC_LINUX64_RELEASE) -c gui_dialogs/gui_menu_selecthover.cpp -o $(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_menu_selecthover.o

$(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_menu_timeattack.o: gui_dialogs/gui_menu_timeattack.cpp
	$(CXX) $(CFLAGS_LINUX64_RELEASE) $(INC_LINUX64_RELEASE) -c gui_dialogs/gui_menu_timeattack.cpp -o $(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_menu_timeattack.o

$(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_modellist.o: gui_dialogs/gui_modellist.cpp
	$(CXX) $(CFLAGS_LINUX64_RELEASE) $(INC_LINUX64_RELEASE) -c gui_dialogs/gui_modellist.cpp -o $(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_modellist.o

$(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_nodemanager.o: gui_dialogs/gui_nodemanager.cpp
	$(CXX) $(CFLAGS_LINUX64_RELEASE) $(INC_LINUX64_RELEASE) -c gui_dialogs/gui_nodemanager.cpp -o $(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_nodemanager.o

$(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_touch.o: gui_dialogs/gui_touch.cpp
	$(CXX) $(CFLAGS_LINUX64_RELEASE) $(INC_LINUX64_RELEASE) -c gui_dialogs/gui_touch.cpp -o $(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_touch.o

$(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_user_controls.o: gui_dialogs/gui_user_controls.cpp
	$(CXX) $(CFLAGS_LINUX64_RELEASE) $(INC_LINUX64_RELEASE) -c gui_dialogs/gui_user_controls.cpp -o $(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_user_controls.o

$(OBJDIR_LINUX64_RELEASE)/helper_file.o: helper_file.cpp
	$(CXX) $(CFLAGS_LINUX64_RELEASE) $(INC_LINUX64_RELEASE) -c helper_file.cpp -o $(OBJDIR_LINUX64_RELEASE)/helper_file.o

$(OBJDIR_LINUX64_RELEASE)/helper_irr.o: helper_irr.cpp
	$(CXX) $(CFLAGS_LINUX64_RELEASE) $(INC_LINUX64_RELEASE) -c helper_irr.cpp -o $(OBJDIR_LINUX64_RELEASE)/helper_irr.o

$(OBJDIR_LINUX64_RELEASE)/streaming.o: streaming.cpp
	$(CXX) $(CFLAGS_LINUX64_RELEASE) $(INC_LINUX64_RELEASE) -c streaming.cpp -o $(OBJDIR_LINUX64_RELEASE)/streaming.o

$(OBJDIR_LINUX64_RELEASE)/random.o: random.cpp
	$(CXX) $(CFLAGS_LINUX64_RELEASE) $(INC_LINUX64_RELEASE) -c random.cpp -o $(OBJDIR_LINUX64_RELEASE)/random.o

$(OBJDIR_LINUX64_RELEASE)/recorder.o: recorder.cpp
	$(CXX) $(CFLAGS_LINUX64_RELEASE) $(INC_LINUX64_RELEASE) -c recorder.cpp -o $(OBJDIR_LINUX64_RELEASE)/recorder.o

$(OBJDIR_LINUX64_RELEASE)/rivalsmode.o: rivalsmode.cpp
	$(CXX) $(CFLAGS_LINUX64_RELEASE) $(INC_LINUX64_RELEASE) -c rivalsmode.cpp -o $(OBJDIR_LINUX64_RELEASE)/rivalsmode.o

$(OBJDIR_LINUX64_RELEASE)/sound_openal.o: sound_openal.cpp
	$(CXX) $(CFLAGS_LINUX64_RELEASE) $(INC_LINUX64_RELEASE) -c sound_openal.cpp -o $(OBJDIR_LINUX64_RELEASE)/sound_openal.o

$(OBJDIR_LINUX64_RELEASE)/sound_settings.o: sound_settings.cpp
	$(CXX) $(CFLAGS_LINUX64_RELEASE) $(INC_LINUX64_RELEASE) -c sound_settings.cpp -o $(OBJDIR_LINUX64_RELEASE)/sound_settings.o

$(OBJDIR_LINUX64_RELEASE)/start_browser.o: start_browser.cpp
	$(CXX) $(CFLAGS_LINUX64_RELEASE) $(INC_LINUX64_RELEASE) -c start_browser.cpp -o $(OBJDIR_LINUX64_RELEASE)/start_browser.o

$(OBJDIR_LINUX64_RELEASE)/string_table.o: string_table.cpp
	$(CXX) $(CFLAGS_LINUX64_RELEASE) $(INC_LINUX64_RELEASE) -c string_table.cpp -o $(OBJDIR_LINUX64_RELEASE)/string_table.o

$(OBJDIR_LINUX64_RELEASE)/timer.o: timer.cpp
	$(CXX) $(CFLAGS_LINUX64_RELEASE) $(INC_LINUX64_RELEASE) -c timer.cpp -o $(OBJDIR_LINUX64_RELEASE)/timer.o

$(OBJDIR_LINUX64_RELEASE)/tinyxml/tinystr.o: tinyxml/tinystr.cpp
	$(CXX) $(CFLAGS_LINUX64_RELEASE) $(INC_LINUX64_RELEASE) -c tinyxml/tinystr.cpp -o $(OBJDIR_LINUX64_RELEASE)/tinyxml/tinystr.o

$(OBJDIR_LINUX64_RELEASE)/tinyxml/tinyxml.o: tinyxml/tinyxml.cpp
	$(CXX) $(CFLAGS_LINUX64_RELEASE) $(INC_LINUX64_RELEASE) -c tinyxml/tinyxml.cpp -o $(OBJDIR_LINUX64_RELEASE)/tinyxml/tinyxml.o

$(OBJDIR_LINUX64_RELEASE)/tinyxml/tinyxmlerror.o: tinyxml/tinyxmlerror.cpp
	$(CXX) $(CFLAGS_LINUX64_RELEASE) $(INC_LINUX64_RELEASE) -c tinyxml/tinyxmlerror.cpp -o $(OBJDIR_LINUX64_RELEASE)/tinyxml/tinyxmlerror.o

$(OBJDIR_LINUX64_RELEASE)/tinyxml/tinyxmlparser.o: tinyxml/tinyxmlparser.cpp
	$(CXX) $(CFLAGS_LINUX64_RELEASE) $(INC_LINUX64_RELEASE) -c tinyxml/tinyxmlparser.cpp -o $(OBJDIR_LINUX64_RELEASE)/tinyxml/tinyxmlparser.o

$(OBJDIR_LINUX64_RELEASE)/track_marker.o: track_marker.cpp
	$(CXX) $(CFLAGS_LINUX64_RELEASE) $(INC_LINUX64_RELEASE) -c track_marker.cpp -o $(OBJDIR_LINUX64_RELEASE)/track_marker.o

$(OBJDIR_LINUX64_RELEASE)/mobile/advert_admob.o: mobile/advert_admob.cpp
	$(CXX) $(CFLAGS_LINUX64_RELEASE) $(INC_LINUX64_RELEASE) -c mobile/advert_admob.cpp -o $(OBJDIR_LINUX64_RELEASE)/mobile/advert_admob.o

$(OBJDIR_LINUX64_RELEASE)/mobile/android_tools.o: mobile/android_tools.cpp
	$(CXX) $(CFLAGS_LINUX64_RELEASE) $(INC_LINUX64_RELEASE) -c mobile/android_tools.cpp -o $(OBJDIR_LINUX64_RELEASE)/mobile/android_tools.o

$(OBJDIR_LINUX64_RELEASE)/mobile/app_restrictions.o: mobile/app_restrictions.cpp
	$(CXX) $(CFLAGS_LINUX64_RELEASE) $(INC_LINUX64_RELEASE) -c mobile/app_restrictions.cpp -o $(OBJDIR_LINUX64_RELEASE)/mobile/app_restrictions.o

$(OBJDIR_LINUX64_RELEASE)/mobile/billing_googleplay.o: mobile/billing_googleplay.cpp
	$(CXX) $(CFLAGS_LINUX64_RELEASE) $(INC_LINUX64_RELEASE) -c mobile/billing_googleplay.cpp -o $(OBJDIR_LINUX64_RELEASE)/mobile/billing_googleplay.o

$(OBJDIR_LINUX64_RELEASE)/music_manager.o: music_manager.cpp
	$(CXX) $(CFLAGS_LINUX64_RELEASE) $(INC_LINUX64_RELEASE) -c music_manager.cpp -o $(OBJDIR_LINUX64_RELEASE)/music_manager.o

$(OBJDIR_LINUX64_RELEASE)/nn.o: nn.cpp
	$(CXX) $(CFLAGS_LINUX64_RELEASE) $(INC_LINUX64_RELEASE) -c nn.cpp -o $(OBJDIR_LINUX64_RELEASE)/nn.o

$(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_menu_pause.o: gui_dialogs/gui_menu_pause.cpp
	$(CXX) $(CFLAGS_LINUX64_RELEASE) $(INC_LINUX64_RELEASE) -c gui_dialogs/gui_menu_pause.cpp -o $(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_menu_pause.o

$(OBJDIR_LINUX64_RELEASE)/node_manager.o: node_manager.cpp
	$(CXX) $(CFLAGS_LINUX64_RELEASE) $(INC_LINUX64_RELEASE) -c node_manager.cpp -o $(OBJDIR_LINUX64_RELEASE)/node_manager.o

$(OBJDIR_LINUX64_RELEASE)/ogg_stream.o: ogg_stream.cpp
	$(CXX) $(CFLAGS_LINUX64_RELEASE) $(INC_LINUX64_RELEASE) -c ogg_stream.cpp -o $(OBJDIR_LINUX64_RELEASE)/ogg_stream.o

$(OBJDIR_LINUX64_RELEASE)/ogles2_materials.o: ogles2_materials.cpp
	$(CXX) $(CFLAGS_LINUX64_RELEASE) $(INC_LINUX64_RELEASE) -c ogles2_materials.cpp -o $(OBJDIR_LINUX64_RELEASE)/ogles2_materials.o

$(OBJDIR_LINUX64_RELEASE)/ov_callbacks.o: ov_callbacks.cpp
	$(CXX) $(CFLAGS_LINUX64_RELEASE) $(INC_LINUX64_RELEASE) -c ov_callbacks.cpp -o $(OBJDIR_LINUX64_RELEASE)/ov_callbacks.o

$(OBJDIR_LINUX64_RELEASE)/physics.o: physics.cpp
	$(CXX) $(CFLAGS_LINUX64_RELEASE) $(INC_LINUX64_RELEASE) -c physics.cpp -o $(OBJDIR_LINUX64_RELEASE)/physics.o

$(OBJDIR_LINUX64_RELEASE)/player.o: player.cpp
	$(CXX) $(CFLAGS_LINUX64_RELEASE) $(INC_LINUX64_RELEASE) -c player.cpp -o $(OBJDIR_LINUX64_RELEASE)/player.o

$(OBJDIR_LINUX64_RELEASE)/profiles.o: profiles.cpp
	$(CXX) $(CFLAGS_LINUX64_RELEASE) $(INC_LINUX64_RELEASE) -c profiles.cpp -o $(OBJDIR_LINUX64_RELEASE)/profiles.o

$(OBJDIR_LINUX64_RELEASE)/game.o: game.cpp
	$(CXX) $(CFLAGS_LINUX64_RELEASE) $(INC_LINUX64_RELEASE) -c game.cpp -o $(OBJDIR_LINUX64_RELEASE)/game.o

$(OBJDIR_LINUX64_RELEASE)/device_keyboard.o: device_keyboard.cpp
	$(CXX) $(CFLAGS_LINUX64_RELEASE) $(INC_LINUX64_RELEASE) -c device_keyboard.cpp -o $(OBJDIR_LINUX64_RELEASE)/device_keyboard.o

$(OBJDIR_LINUX64_RELEASE)/device_mouse.o: device_mouse.cpp
	$(CXX) $(CFLAGS_LINUX64_RELEASE) $(INC_LINUX64_RELEASE) -c device_mouse.cpp -o $(OBJDIR_LINUX64_RELEASE)/device_mouse.o

$(OBJDIR_LINUX64_RELEASE)/device_touch.o: device_touch.cpp
	$(CXX) $(CFLAGS_LINUX64_RELEASE) $(INC_LINUX64_RELEASE) -c device_touch.cpp -o $(OBJDIR_LINUX64_RELEASE)/device_touch.o

$(OBJDIR_LINUX64_RELEASE)/device_touch_settings.o: device_touch_settings.cpp
	$(CXX) $(CFLAGS_LINUX64_RELEASE) $(INC_LINUX64_RELEASE) -c device_touch_settings.cpp -o $(OBJDIR_LINUX64_RELEASE)/device_touch_settings.o

$(OBJDIR_LINUX64_RELEASE)/editor.o: editor.cpp
	$(CXX) $(CFLAGS_LINUX64_RELEASE) $(INC_LINUX64_RELEASE) -c editor.cpp -o $(OBJDIR_LINUX64_RELEASE)/editor.o

$(OBJDIR_LINUX64_RELEASE)/event_receiver_base.o: event_receiver_base.cpp
	$(CXX) $(CFLAGS_LINUX64_RELEASE) $(INC_LINUX64_RELEASE) -c event_receiver_base.cpp -o $(OBJDIR_LINUX64_RELEASE)/event_receiver_base.o

$(OBJDIR_LINUX64_RELEASE)/font_manager.o: font_manager.cpp
	$(CXX) $(CFLAGS_LINUX64_RELEASE) $(INC_LINUX64_RELEASE) -c font_manager.cpp -o $(OBJDIR_LINUX64_RELEASE)/font_manager.o

$(OBJDIR_LINUX64_RELEASE)/grid_triangle_selector.o: grid_triangle_selector.cpp
	$(CXX) $(CFLAGS_LINUX64_RELEASE) $(INC_LINUX64_RELEASE) -c grid_triangle_selector.cpp -o $(OBJDIR_LINUX64_RELEASE)/grid_triangle_selector.o

$(OBJDIR_LINUX64_RELEASE)/gui.o: gui.cpp
	$(CXX) $(CFLAGS_LINUX64_RELEASE) $(INC_LINUX64_RELEASE) -c gui.cpp -o $(OBJDIR_LINUX64_RELEASE)/gui.o

$(OBJDIR_LINUX64_RELEASE)/gui_dialog.o: gui_dialog.cpp
	$(CXX) $(CFLAGS_LINUX64_RELEASE) $(INC_LINUX64_RELEASE) -c gui_dialog.cpp -o $(OBJDIR_LINUX64_RELEASE)/gui_dialog.o

$(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_ai.o: gui_dialogs/gui_ai.cpp
	$(CXX) $(CFLAGS_LINUX64_RELEASE) $(INC_LINUX64_RELEASE) -c gui_dialogs/gui_ai.cpp -o $(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_ai.o

$(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_controller_display.o: gui_dialogs/gui_controller_display.cpp
	$(CXX) $(CFLAGS_LINUX64_RELEASE) $(INC_LINUX64_RELEASE) -c gui_dialogs/gui_controller_display.cpp -o $(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_controller_display.o

$(OBJDIR_LINUX64_RELEASE)/CGUITextSlider.o: CGUITextSlider.cpp
	$(CXX) $(CFLAGS_LINUX64_RELEASE) $(INC_LINUX64_RELEASE) -c CGUITextSlider.cpp -o $(OBJDIR_LINUX64_RELEASE)/CGUITextSlider.o

$(OBJDIR_LINUX64_RELEASE)/CLMOMeshFileLoader.o: CLMOMeshFileLoader.cpp
	$(CXX) $(CFLAGS_LINUX64_RELEASE) $(INC_LINUX64_RELEASE) -c CLMOMeshFileLoader.cpp -o $(OBJDIR_LINUX64_RELEASE)/CLMOMeshFileLoader.o

$(OBJDIR_LINUX64_RELEASE)/ai_track.o: ai_track.cpp
	$(CXX) $(CFLAGS_LINUX64_RELEASE) $(INC_LINUX64_RELEASE) -c ai_track.cpp -o $(OBJDIR_LINUX64_RELEASE)/ai_track.o

$(OBJDIR_LINUX64_RELEASE)/app_tester.o: app_tester.cpp
	$(CXX) $(CFLAGS_LINUX64_RELEASE) $(INC_LINUX64_RELEASE) -c app_tester.cpp -o $(OBJDIR_LINUX64_RELEASE)/app_tester.o

$(OBJDIR_LINUX64_RELEASE)/camera.o: camera.cpp
	$(CXX) $(CFLAGS_LINUX64_RELEASE) $(INC_LINUX64_RELEASE) -c camera.cpp -o $(OBJDIR_LINUX64_RELEASE)/camera.o

$(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_developer_settings.o: gui_dialogs/gui_developer_settings.cpp
	$(CXX) $(CFLAGS_LINUX64_RELEASE) $(INC_LINUX64_RELEASE) -c gui_dialogs/gui_developer_settings.cpp -o $(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_developer_settings.o

$(OBJDIR_LINUX64_RELEASE)/championship.o: championship.cpp
	$(CXX) $(CFLAGS_LINUX64_RELEASE) $(INC_LINUX64_RELEASE) -c championship.cpp -o $(OBJDIR_LINUX64_RELEASE)/championship.o

$(OBJDIR_LINUX64_RELEASE)/config.o: config.cpp
	$(CXX) $(CFLAGS_LINUX64_RELEASE) $(INC_LINUX64_RELEASE) -c config.cpp -o $(OBJDIR_LINUX64_RELEASE)/config.o

$(OBJDIR_LINUX64_RELEASE)/controller.o: controller.cpp
	$(CXX) $(CFLAGS_LINUX64_RELEASE) $(INC_LINUX64_RELEASE) -c controller.cpp -o $(OBJDIR_LINUX64_RELEASE)/controller.o

$(OBJDIR_LINUX64_RELEASE)/convert_utf.o: convert_utf.c
	$(CC) $(CFLAGS_LINUX64_RELEASE) $(INC_LINUX64_RELEASE) -c convert_utf.c -o $(OBJDIR_LINUX64_RELEASE)/convert_utf.o

$(OBJDIR_LINUX64_RELEASE)/device_joystick.o: device_joystick.cpp
	$(CXX) $(CFLAGS_LINUX64_RELEASE) $(INC_LINUX64_RELEASE) -c device_joystick.cpp -o $(OBJDIR_LINUX64_RELEASE)/device_joystick.o

$(OBJDIR_LINUX64_RELEASE)/device_joystick_settings.o: device_joystick_settings.cpp
	$(CXX) $(CFLAGS_LINUX64_RELEASE) $(INC_LINUX64_RELEASE) -c device_joystick_settings.cpp -o $(OBJDIR_LINUX64_RELEASE)/device_joystick_settings.o

$(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_menu_keyboard.o: gui_dialogs/gui_menu_keyboard.cpp
	$(CXX) $(CFLAGS_LINUX64_RELEASE) $(INC_LINUX64_RELEASE) -c gui_dialogs/gui_menu_keyboard.cpp -o $(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_menu_keyboard.o

$(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_menu_gameend.o: gui_dialogs/gui_menu_gameend.cpp
	$(CXX) $(CFLAGS_LINUX64_RELEASE) $(INC_LINUX64_RELEASE) -c gui_dialogs/gui_menu_gameend.cpp -o $(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_menu_gameend.o

$(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_menu_gameend_champ.o: gui_dialogs/gui_menu_gameend_champ.cpp
	$(CXX) $(CFLAGS_LINUX64_RELEASE) $(INC_LINUX64_RELEASE) -c gui_dialogs/gui_menu_gameend_champ.cpp -o $(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_menu_gameend_champ.o

$(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_menu_gameend_rivals.o: gui_dialogs/gui_menu_gameend_rivals.cpp
	$(CXX) $(CFLAGS_LINUX64_RELEASE) $(INC_LINUX64_RELEASE) -c gui_dialogs/gui_menu_gameend_rivals.cpp -o $(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_menu_gameend_rivals.o

$(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_menu_graphics.o: gui_dialogs/gui_menu_graphics.cpp
	$(CXX) $(CFLAGS_LINUX64_RELEASE) $(INC_LINUX64_RELEASE) -c gui_dialogs/gui_menu_graphics.cpp -o $(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_menu_graphics.o

$(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_menu_highscores.o: gui_dialogs/gui_menu_highscores.cpp
	$(CXX) $(CFLAGS_LINUX64_RELEASE) $(INC_LINUX64_RELEASE) -c gui_dialogs/gui_menu_highscores.cpp -o $(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_menu_highscores.o

$(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_menu_hover_unlocked.o: gui_dialogs/gui_menu_hover_unlocked.cpp
	$(CXX) $(CFLAGS_LINUX64_RELEASE) $(INC_LINUX64_RELEASE) -c gui_dialogs/gui_menu_hover_unlocked.cpp -o $(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_menu_hover_unlocked.o

$(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_menu_credits.o: gui_dialogs/gui_menu_credits.cpp
	$(CXX) $(CFLAGS_LINUX64_RELEASE) $(INC_LINUX64_RELEASE) -c gui_dialogs/gui_menu_credits.cpp -o $(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_menu_credits.o

$(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_menu_licenses.o: gui_dialogs/gui_menu_licenses.cpp
	$(CXX) $(CFLAGS_LINUX64_RELEASE) $(INC_LINUX64_RELEASE) -c gui_dialogs/gui_menu_licenses.cpp -o $(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_menu_licenses.o

$(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_menu_loadingscreen.o: gui_dialogs/gui_menu_loadingscreen.cpp
	$(CXX) $(CFLAGS_LINUX64_RELEASE) $(INC_LINUX64_RELEASE) -c gui_dialogs/gui_menu_loadingscreen.cpp -o $(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_menu_loadingscreen.o

$(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_menu_main.o: gui_dialogs/gui_menu_main.cpp
	$(CXX) $(CFLAGS_LINUX64_RELEASE) $(INC_LINUX64_RELEASE) -c gui_dialogs/gui_menu_main.cpp -o $(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_menu_main.o

$(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_menu_nagscreen.o: gui_dialogs/gui_menu_nagscreen.cpp
	$(CXX) $(CFLAGS_LINUX64_RELEASE) $(INC_LINUX64_RELEASE) -c gui_dialogs/gui_menu_nagscreen.cpp -o $(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_menu_nagscreen.o

$(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_menu_newprofile.o: gui_dialogs/gui_menu_newprofile.cpp
	$(CXX) $(CFLAGS_LINUX64_RELEASE) $(INC_LINUX64_RELEASE) -c gui_dialogs/gui_menu_newprofile.cpp -o $(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_menu_newprofile.o

$(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_menu_options.o: gui_dialogs/gui_menu_options.cpp
	$(CXX) $(CFLAGS_LINUX64_RELEASE) $(INC_LINUX64_RELEASE) -c gui_dialogs/gui_menu_options.cpp -o $(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_menu_options.o

$(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_levelmanager.o: gui_dialogs/gui_levelmanager.cpp
	$(CXX) $(CFLAGS_LINUX64_RELEASE) $(INC_LINUX64_RELEASE) -c gui_dialogs/gui_levelmanager.cpp -o $(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_levelmanager.o

$(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_dlg_okcancel.o: gui_dialogs/gui_dlg_okcancel.cpp
	$(CXX) $(CFLAGS_LINUX64_RELEASE) $(INC_LINUX64_RELEASE) -c gui_dialogs/gui_dlg_okcancel.cpp -o $(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_dlg_okcancel.o

$(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_editor.o: gui_dialogs/gui_editor.cpp
	$(CXX) $(CFLAGS_LINUX64_RELEASE) $(INC_LINUX64_RELEASE) -c gui_dialogs/gui_editor.cpp -o $(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_editor.o

$(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_game.o: gui_dialogs/gui_game.cpp
	$(CXX) $(CFLAGS_LINUX64_RELEASE) $(INC_LINUX64_RELEASE) -c gui_dialogs/gui_game.cpp -o $(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_game.o

$(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_helper.o: gui_dialogs/gui_helper.cpp
	$(CXX) $(CFLAGS_LINUX64_RELEASE) $(INC_LINUX64_RELEASE) -c gui_dialogs/gui_helper.cpp -o $(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_helper.o

$(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_hud.o: gui_dialogs/gui_hud.cpp
	$(CXX) $(CFLAGS_LINUX64_RELEASE) $(INC_LINUX64_RELEASE) -c gui_dialogs/gui_hud.cpp -o $(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_hud.o

$(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_intro.o: gui_dialogs/gui_intro.cpp
	$(CXX) $(CFLAGS_LINUX64_RELEASE) $(INC_LINUX64_RELEASE) -c gui_dialogs/gui_intro.cpp -o $(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_intro.o

$(OBJDIR_LINUX64_RELEASE)/CGUITTFont.o: CGUITTFont.cpp
	$(CXX) $(CFLAGS_LINUX64_RELEASE) $(INC_LINUX64_RELEASE) -c CGUITTFont.cpp -o $(OBJDIR_LINUX64_RELEASE)/CGUITTFont.o

$(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_menu_analog.o: gui_dialogs/gui_menu_analog.cpp
	$(CXX) $(CFLAGS_LINUX64_RELEASE) $(INC_LINUX64_RELEASE) -c gui_dialogs/gui_menu_analog.cpp -o $(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_menu_analog.o

$(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_menu_arcade.o: gui_dialogs/gui_menu_arcade.cpp
	$(CXX) $(CFLAGS_LINUX64_RELEASE) $(INC_LINUX64_RELEASE) -c gui_dialogs/gui_menu_arcade.cpp -o $(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_menu_arcade.o

$(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_menu_championship.o: gui_dialogs/gui_menu_championship.cpp
	$(CXX) $(CFLAGS_LINUX64_RELEASE) $(INC_LINUX64_RELEASE) -c gui_dialogs/gui_menu_championship.cpp -o $(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_menu_championship.o

$(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_menu_championship_progress.o: gui_dialogs/gui_menu_championship_progress.cpp
	$(CXX) $(CFLAGS_LINUX64_RELEASE) $(INC_LINUX64_RELEASE) -c gui_dialogs/gui_menu_championship_progress.cpp -o $(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_menu_championship_progress.o

$(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_menu_championship_winner.o: gui_dialogs/gui_menu_championship_winner.cpp
	$(CXX) $(CFLAGS_LINUX64_RELEASE) $(INC_LINUX64_RELEASE) -c gui_dialogs/gui_menu_championship_winner.cpp -o $(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_menu_championship_winner.o

$(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_menu_controls.o: gui_dialogs/gui_menu_controls.cpp
	$(CXX) $(CFLAGS_LINUX64_RELEASE) $(INC_LINUX64_RELEASE) -c gui_dialogs/gui_menu_controls.cpp -o $(OBJDIR_LINUX64_RELEASE)/gui_dialogs/gui_menu_controls.o

clean_linux64_release: 
	rm -f $(OBJ_LINUX64_RELEASE) $(OUT_LINUX64_RELEASE)
	rm -rf ..
	rm -rf $(OBJDIR_LINUX64_RELEASE)
	rm -rf $(OBJDIR_LINUX64_RELEASE)/gui_dialogs
	rm -rf $(OBJDIR_LINUX64_RELEASE)/tinyxml
	rm -rf $(OBJDIR_LINUX64_RELEASE)/mobile

before_linux32_debug: 
	test -d .. || mkdir -p ..
	test -d $(OBJDIR_LINUX32_DEBUG) || mkdir -p $(OBJDIR_LINUX32_DEBUG)
	test -d $(OBJDIR_LINUX32_DEBUG)/gui_dialogs || mkdir -p $(OBJDIR_LINUX32_DEBUG)/gui_dialogs
	test -d $(OBJDIR_LINUX32_DEBUG)/tinyxml || mkdir -p $(OBJDIR_LINUX32_DEBUG)/tinyxml
	test -d $(OBJDIR_LINUX32_DEBUG)/mobile || mkdir -p $(OBJDIR_LINUX32_DEBUG)/mobile

after_linux32_debug: 

linux32_debug: before_linux32_debug out_linux32_debug after_linux32_debug

out_linux32_debug: before_linux32_debug $(OBJ_LINUX32_DEBUG) $(DEP_LINUX32_DEBUG)
	$(LD) $(LIBDIR_LINUX32_DEBUG) -o $(OUT_LINUX32_DEBUG) $(OBJ_LINUX32_DEBUG)  $(LDFLAGS_LINUX32_DEBUG) $(LIB_LINUX32_DEBUG)

$(OBJDIR_LINUX32_DEBUG)/irrlicht_manager.o: irrlicht_manager.cpp
	$(CXX) $(CFLAGS_LINUX32_DEBUG) $(INC_LINUX32_DEBUG) -c irrlicht_manager.cpp -o $(OBJDIR_LINUX32_DEBUG)/irrlicht_manager.o

$(OBJDIR_LINUX32_DEBUG)/helper_math.o: helper_math.cpp
	$(CXX) $(CFLAGS_LINUX32_DEBUG) $(INC_LINUX32_DEBUG) -c helper_math.cpp -o $(OBJDIR_LINUX32_DEBUG)/helper_math.o

$(OBJDIR_LINUX32_DEBUG)/helper_str.o: helper_str.cpp
	$(CXX) $(CFLAGS_LINUX32_DEBUG) $(INC_LINUX32_DEBUG) -c helper_str.cpp -o $(OBJDIR_LINUX32_DEBUG)/helper_str.o

$(OBJDIR_LINUX32_DEBUG)/helper_xml.o: helper_xml.cpp
	$(CXX) $(CFLAGS_LINUX32_DEBUG) $(INC_LINUX32_DEBUG) -c helper_xml.cpp -o $(OBJDIR_LINUX32_DEBUG)/helper_xml.o

$(OBJDIR_LINUX32_DEBUG)/highscores.o: highscores.cpp
	$(CXX) $(CFLAGS_LINUX32_DEBUG) $(INC_LINUX32_DEBUG) -c highscores.cpp -o $(OBJDIR_LINUX32_DEBUG)/highscores.o

$(OBJDIR_LINUX32_DEBUG)/hover.o: hover.cpp
	$(CXX) $(CFLAGS_LINUX32_DEBUG) $(INC_LINUX32_DEBUG) -c hover.cpp -o $(OBJDIR_LINUX32_DEBUG)/hover.o

$(OBJDIR_LINUX32_DEBUG)/input_device.o: input_device.cpp
	$(CXX) $(CFLAGS_LINUX32_DEBUG) $(INC_LINUX32_DEBUG) -c input_device.cpp -o $(OBJDIR_LINUX32_DEBUG)/input_device.o

$(OBJDIR_LINUX32_DEBUG)/input_device_manager.o: input_device_manager.cpp
	$(CXX) $(CFLAGS_LINUX32_DEBUG) $(INC_LINUX32_DEBUG) -c input_device_manager.cpp -o $(OBJDIR_LINUX32_DEBUG)/input_device_manager.o

$(OBJDIR_LINUX32_DEBUG)/keycode_strings.o: keycode_strings.cpp
	$(CXX) $(CFLAGS_LINUX32_DEBUG) $(INC_LINUX32_DEBUG) -c keycode_strings.cpp -o $(OBJDIR_LINUX32_DEBUG)/keycode_strings.o

$(OBJDIR_LINUX32_DEBUG)/level.o: level.cpp
	$(CXX) $(CFLAGS_LINUX32_DEBUG) $(INC_LINUX32_DEBUG) -c level.cpp -o $(OBJDIR_LINUX32_DEBUG)/level.o

$(OBJDIR_LINUX32_DEBUG)/level_manager.o: level_manager.cpp
	$(CXX) $(CFLAGS_LINUX32_DEBUG) $(INC_LINUX32_DEBUG) -c level_manager.cpp -o $(OBJDIR_LINUX32_DEBUG)/level_manager.o

$(OBJDIR_LINUX32_DEBUG)/logging.o: logging.cpp
	$(CXX) $(CFLAGS_LINUX32_DEBUG) $(INC_LINUX32_DEBUG) -c logging.cpp -o $(OBJDIR_LINUX32_DEBUG)/logging.o

$(OBJDIR_LINUX32_DEBUG)/main.o: main.cpp
	$(CXX) $(CFLAGS_LINUX32_DEBUG) $(INC_LINUX32_DEBUG) -c main.cpp -o $(OBJDIR_LINUX32_DEBUG)/main.o

$(OBJDIR_LINUX32_DEBUG)/mesh_texture_loader.o: mesh_texture_loader.cpp
	$(CXX) $(CFLAGS_LINUX32_DEBUG) $(INC_LINUX32_DEBUG) -c mesh_texture_loader.cpp -o $(OBJDIR_LINUX32_DEBUG)/mesh_texture_loader.o

$(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_menu_tutorial3.o: gui_dialogs/gui_menu_tutorial3.cpp
	$(CXX) $(CFLAGS_LINUX32_DEBUG) $(INC_LINUX32_DEBUG) -c gui_dialogs/gui_menu_tutorial3.cpp -o $(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_menu_tutorial3.o

$(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_menu_profiles.o: gui_dialogs/gui_menu_profiles.cpp
	$(CXX) $(CFLAGS_LINUX32_DEBUG) $(INC_LINUX32_DEBUG) -c gui_dialogs/gui_menu_profiles.cpp -o $(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_menu_profiles.o

$(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_menu_replaytheatre.o: gui_dialogs/gui_menu_replaytheatre.cpp
	$(CXX) $(CFLAGS_LINUX32_DEBUG) $(INC_LINUX32_DEBUG) -c gui_dialogs/gui_menu_replaytheatre.cpp -o $(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_menu_replaytheatre.o

$(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_menu_rivals.o: gui_dialogs/gui_menu_rivals.cpp
	$(CXX) $(CFLAGS_LINUX32_DEBUG) $(INC_LINUX32_DEBUG) -c gui_dialogs/gui_menu_rivals.cpp -o $(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_menu_rivals.o

$(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_menu_rivals_score.o: gui_dialogs/gui_menu_rivals_score.cpp
	$(CXX) $(CFLAGS_LINUX32_DEBUG) $(INC_LINUX32_DEBUG) -c gui_dialogs/gui_menu_rivals_score.cpp -o $(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_menu_rivals_score.o

$(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_menu_selecthover.o: gui_dialogs/gui_menu_selecthover.cpp
	$(CXX) $(CFLAGS_LINUX32_DEBUG) $(INC_LINUX32_DEBUG) -c gui_dialogs/gui_menu_selecthover.cpp -o $(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_menu_selecthover.o

$(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_menu_timeattack.o: gui_dialogs/gui_menu_timeattack.cpp
	$(CXX) $(CFLAGS_LINUX32_DEBUG) $(INC_LINUX32_DEBUG) -c gui_dialogs/gui_menu_timeattack.cpp -o $(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_menu_timeattack.o

$(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_modellist.o: gui_dialogs/gui_modellist.cpp
	$(CXX) $(CFLAGS_LINUX32_DEBUG) $(INC_LINUX32_DEBUG) -c gui_dialogs/gui_modellist.cpp -o $(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_modellist.o

$(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_nodemanager.o: gui_dialogs/gui_nodemanager.cpp
	$(CXX) $(CFLAGS_LINUX32_DEBUG) $(INC_LINUX32_DEBUG) -c gui_dialogs/gui_nodemanager.cpp -o $(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_nodemanager.o

$(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_touch.o: gui_dialogs/gui_touch.cpp
	$(CXX) $(CFLAGS_LINUX32_DEBUG) $(INC_LINUX32_DEBUG) -c gui_dialogs/gui_touch.cpp -o $(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_touch.o

$(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_user_controls.o: gui_dialogs/gui_user_controls.cpp
	$(CXX) $(CFLAGS_LINUX32_DEBUG) $(INC_LINUX32_DEBUG) -c gui_dialogs/gui_user_controls.cpp -o $(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_user_controls.o

$(OBJDIR_LINUX32_DEBUG)/helper_file.o: helper_file.cpp
	$(CXX) $(CFLAGS_LINUX32_DEBUG) $(INC_LINUX32_DEBUG) -c helper_file.cpp -o $(OBJDIR_LINUX32_DEBUG)/helper_file.o

$(OBJDIR_LINUX32_DEBUG)/helper_irr.o: helper_irr.cpp
	$(CXX) $(CFLAGS_LINUX32_DEBUG) $(INC_LINUX32_DEBUG) -c helper_irr.cpp -o $(OBJDIR_LINUX32_DEBUG)/helper_irr.o

$(OBJDIR_LINUX32_DEBUG)/streaming.o: streaming.cpp
	$(CXX) $(CFLAGS_LINUX32_DEBUG) $(INC_LINUX32_DEBUG) -c streaming.cpp -o $(OBJDIR_LINUX32_DEBUG)/streaming.o

$(OBJDIR_LINUX32_DEBUG)/random.o: random.cpp
	$(CXX) $(CFLAGS_LINUX32_DEBUG) $(INC_LINUX32_DEBUG) -c random.cpp -o $(OBJDIR_LINUX32_DEBUG)/random.o

$(OBJDIR_LINUX32_DEBUG)/recorder.o: recorder.cpp
	$(CXX) $(CFLAGS_LINUX32_DEBUG) $(INC_LINUX32_DEBUG) -c recorder.cpp -o $(OBJDIR_LINUX32_DEBUG)/recorder.o

$(OBJDIR_LINUX32_DEBUG)/rivalsmode.o: rivalsmode.cpp
	$(CXX) $(CFLAGS_LINUX32_DEBUG) $(INC_LINUX32_DEBUG) -c rivalsmode.cpp -o $(OBJDIR_LINUX32_DEBUG)/rivalsmode.o

$(OBJDIR_LINUX32_DEBUG)/sound_openal.o: sound_openal.cpp
	$(CXX) $(CFLAGS_LINUX32_DEBUG) $(INC_LINUX32_DEBUG) -c sound_openal.cpp -o $(OBJDIR_LINUX32_DEBUG)/sound_openal.o

$(OBJDIR_LINUX32_DEBUG)/sound_settings.o: sound_settings.cpp
	$(CXX) $(CFLAGS_LINUX32_DEBUG) $(INC_LINUX32_DEBUG) -c sound_settings.cpp -o $(OBJDIR_LINUX32_DEBUG)/sound_settings.o

$(OBJDIR_LINUX32_DEBUG)/start_browser.o: start_browser.cpp
	$(CXX) $(CFLAGS_LINUX32_DEBUG) $(INC_LINUX32_DEBUG) -c start_browser.cpp -o $(OBJDIR_LINUX32_DEBUG)/start_browser.o

$(OBJDIR_LINUX32_DEBUG)/string_table.o: string_table.cpp
	$(CXX) $(CFLAGS_LINUX32_DEBUG) $(INC_LINUX32_DEBUG) -c string_table.cpp -o $(OBJDIR_LINUX32_DEBUG)/string_table.o

$(OBJDIR_LINUX32_DEBUG)/timer.o: timer.cpp
	$(CXX) $(CFLAGS_LINUX32_DEBUG) $(INC_LINUX32_DEBUG) -c timer.cpp -o $(OBJDIR_LINUX32_DEBUG)/timer.o

$(OBJDIR_LINUX32_DEBUG)/tinyxml/tinystr.o: tinyxml/tinystr.cpp
	$(CXX) $(CFLAGS_LINUX32_DEBUG) $(INC_LINUX32_DEBUG) -c tinyxml/tinystr.cpp -o $(OBJDIR_LINUX32_DEBUG)/tinyxml/tinystr.o

$(OBJDIR_LINUX32_DEBUG)/tinyxml/tinyxml.o: tinyxml/tinyxml.cpp
	$(CXX) $(CFLAGS_LINUX32_DEBUG) $(INC_LINUX32_DEBUG) -c tinyxml/tinyxml.cpp -o $(OBJDIR_LINUX32_DEBUG)/tinyxml/tinyxml.o

$(OBJDIR_LINUX32_DEBUG)/tinyxml/tinyxmlerror.o: tinyxml/tinyxmlerror.cpp
	$(CXX) $(CFLAGS_LINUX32_DEBUG) $(INC_LINUX32_DEBUG) -c tinyxml/tinyxmlerror.cpp -o $(OBJDIR_LINUX32_DEBUG)/tinyxml/tinyxmlerror.o

$(OBJDIR_LINUX32_DEBUG)/tinyxml/tinyxmlparser.o: tinyxml/tinyxmlparser.cpp
	$(CXX) $(CFLAGS_LINUX32_DEBUG) $(INC_LINUX32_DEBUG) -c tinyxml/tinyxmlparser.cpp -o $(OBJDIR_LINUX32_DEBUG)/tinyxml/tinyxmlparser.o

$(OBJDIR_LINUX32_DEBUG)/track_marker.o: track_marker.cpp
	$(CXX) $(CFLAGS_LINUX32_DEBUG) $(INC_LINUX32_DEBUG) -c track_marker.cpp -o $(OBJDIR_LINUX32_DEBUG)/track_marker.o

$(OBJDIR_LINUX32_DEBUG)/mobile/advert_admob.o: mobile/advert_admob.cpp
	$(CXX) $(CFLAGS_LINUX32_DEBUG) $(INC_LINUX32_DEBUG) -c mobile/advert_admob.cpp -o $(OBJDIR_LINUX32_DEBUG)/mobile/advert_admob.o

$(OBJDIR_LINUX32_DEBUG)/mobile/android_tools.o: mobile/android_tools.cpp
	$(CXX) $(CFLAGS_LINUX32_DEBUG) $(INC_LINUX32_DEBUG) -c mobile/android_tools.cpp -o $(OBJDIR_LINUX32_DEBUG)/mobile/android_tools.o

$(OBJDIR_LINUX32_DEBUG)/mobile/app_restrictions.o: mobile/app_restrictions.cpp
	$(CXX) $(CFLAGS_LINUX32_DEBUG) $(INC_LINUX32_DEBUG) -c mobile/app_restrictions.cpp -o $(OBJDIR_LINUX32_DEBUG)/mobile/app_restrictions.o

$(OBJDIR_LINUX32_DEBUG)/mobile/billing_googleplay.o: mobile/billing_googleplay.cpp
	$(CXX) $(CFLAGS_LINUX32_DEBUG) $(INC_LINUX32_DEBUG) -c mobile/billing_googleplay.cpp -o $(OBJDIR_LINUX32_DEBUG)/mobile/billing_googleplay.o

$(OBJDIR_LINUX32_DEBUG)/music_manager.o: music_manager.cpp
	$(CXX) $(CFLAGS_LINUX32_DEBUG) $(INC_LINUX32_DEBUG) -c music_manager.cpp -o $(OBJDIR_LINUX32_DEBUG)/music_manager.o

$(OBJDIR_LINUX32_DEBUG)/nn.o: nn.cpp
	$(CXX) $(CFLAGS_LINUX32_DEBUG) $(INC_LINUX32_DEBUG) -c nn.cpp -o $(OBJDIR_LINUX32_DEBUG)/nn.o

$(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_menu_pause.o: gui_dialogs/gui_menu_pause.cpp
	$(CXX) $(CFLAGS_LINUX32_DEBUG) $(INC_LINUX32_DEBUG) -c gui_dialogs/gui_menu_pause.cpp -o $(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_menu_pause.o

$(OBJDIR_LINUX32_DEBUG)/node_manager.o: node_manager.cpp
	$(CXX) $(CFLAGS_LINUX32_DEBUG) $(INC_LINUX32_DEBUG) -c node_manager.cpp -o $(OBJDIR_LINUX32_DEBUG)/node_manager.o

$(OBJDIR_LINUX32_DEBUG)/ogg_stream.o: ogg_stream.cpp
	$(CXX) $(CFLAGS_LINUX32_DEBUG) $(INC_LINUX32_DEBUG) -c ogg_stream.cpp -o $(OBJDIR_LINUX32_DEBUG)/ogg_stream.o

$(OBJDIR_LINUX32_DEBUG)/ogles2_materials.o: ogles2_materials.cpp
	$(CXX) $(CFLAGS_LINUX32_DEBUG) $(INC_LINUX32_DEBUG) -c ogles2_materials.cpp -o $(OBJDIR_LINUX32_DEBUG)/ogles2_materials.o

$(OBJDIR_LINUX32_DEBUG)/ov_callbacks.o: ov_callbacks.cpp
	$(CXX) $(CFLAGS_LINUX32_DEBUG) $(INC_LINUX32_DEBUG) -c ov_callbacks.cpp -o $(OBJDIR_LINUX32_DEBUG)/ov_callbacks.o

$(OBJDIR_LINUX32_DEBUG)/physics.o: physics.cpp
	$(CXX) $(CFLAGS_LINUX32_DEBUG) $(INC_LINUX32_DEBUG) -c physics.cpp -o $(OBJDIR_LINUX32_DEBUG)/physics.o

$(OBJDIR_LINUX32_DEBUG)/player.o: player.cpp
	$(CXX) $(CFLAGS_LINUX32_DEBUG) $(INC_LINUX32_DEBUG) -c player.cpp -o $(OBJDIR_LINUX32_DEBUG)/player.o

$(OBJDIR_LINUX32_DEBUG)/profiles.o: profiles.cpp
	$(CXX) $(CFLAGS_LINUX32_DEBUG) $(INC_LINUX32_DEBUG) -c profiles.cpp -o $(OBJDIR_LINUX32_DEBUG)/profiles.o

$(OBJDIR_LINUX32_DEBUG)/game.o: game.cpp
	$(CXX) $(CFLAGS_LINUX32_DEBUG) $(INC_LINUX32_DEBUG) -c game.cpp -o $(OBJDIR_LINUX32_DEBUG)/game.o

$(OBJDIR_LINUX32_DEBUG)/device_keyboard.o: device_keyboard.cpp
	$(CXX) $(CFLAGS_LINUX32_DEBUG) $(INC_LINUX32_DEBUG) -c device_keyboard.cpp -o $(OBJDIR_LINUX32_DEBUG)/device_keyboard.o

$(OBJDIR_LINUX32_DEBUG)/device_mouse.o: device_mouse.cpp
	$(CXX) $(CFLAGS_LINUX32_DEBUG) $(INC_LINUX32_DEBUG) -c device_mouse.cpp -o $(OBJDIR_LINUX32_DEBUG)/device_mouse.o

$(OBJDIR_LINUX32_DEBUG)/device_touch.o: device_touch.cpp
	$(CXX) $(CFLAGS_LINUX32_DEBUG) $(INC_LINUX32_DEBUG) -c device_touch.cpp -o $(OBJDIR_LINUX32_DEBUG)/device_touch.o

$(OBJDIR_LINUX32_DEBUG)/device_touch_settings.o: device_touch_settings.cpp
	$(CXX) $(CFLAGS_LINUX32_DEBUG) $(INC_LINUX32_DEBUG) -c device_touch_settings.cpp -o $(OBJDIR_LINUX32_DEBUG)/device_touch_settings.o

$(OBJDIR_LINUX32_DEBUG)/editor.o: editor.cpp
	$(CXX) $(CFLAGS_LINUX32_DEBUG) $(INC_LINUX32_DEBUG) -c editor.cpp -o $(OBJDIR_LINUX32_DEBUG)/editor.o

$(OBJDIR_LINUX32_DEBUG)/event_receiver_base.o: event_receiver_base.cpp
	$(CXX) $(CFLAGS_LINUX32_DEBUG) $(INC_LINUX32_DEBUG) -c event_receiver_base.cpp -o $(OBJDIR_LINUX32_DEBUG)/event_receiver_base.o

$(OBJDIR_LINUX32_DEBUG)/font_manager.o: font_manager.cpp
	$(CXX) $(CFLAGS_LINUX32_DEBUG) $(INC_LINUX32_DEBUG) -c font_manager.cpp -o $(OBJDIR_LINUX32_DEBUG)/font_manager.o

$(OBJDIR_LINUX32_DEBUG)/grid_triangle_selector.o: grid_triangle_selector.cpp
	$(CXX) $(CFLAGS_LINUX32_DEBUG) $(INC_LINUX32_DEBUG) -c grid_triangle_selector.cpp -o $(OBJDIR_LINUX32_DEBUG)/grid_triangle_selector.o

$(OBJDIR_LINUX32_DEBUG)/gui.o: gui.cpp
	$(CXX) $(CFLAGS_LINUX32_DEBUG) $(INC_LINUX32_DEBUG) -c gui.cpp -o $(OBJDIR_LINUX32_DEBUG)/gui.o

$(OBJDIR_LINUX32_DEBUG)/gui_dialog.o: gui_dialog.cpp
	$(CXX) $(CFLAGS_LINUX32_DEBUG) $(INC_LINUX32_DEBUG) -c gui_dialog.cpp -o $(OBJDIR_LINUX32_DEBUG)/gui_dialog.o

$(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_ai.o: gui_dialogs/gui_ai.cpp
	$(CXX) $(CFLAGS_LINUX32_DEBUG) $(INC_LINUX32_DEBUG) -c gui_dialogs/gui_ai.cpp -o $(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_ai.o

$(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_controller_display.o: gui_dialogs/gui_controller_display.cpp
	$(CXX) $(CFLAGS_LINUX32_DEBUG) $(INC_LINUX32_DEBUG) -c gui_dialogs/gui_controller_display.cpp -o $(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_controller_display.o

$(OBJDIR_LINUX32_DEBUG)/CGUITextSlider.o: CGUITextSlider.cpp
	$(CXX) $(CFLAGS_LINUX32_DEBUG) $(INC_LINUX32_DEBUG) -c CGUITextSlider.cpp -o $(OBJDIR_LINUX32_DEBUG)/CGUITextSlider.o

$(OBJDIR_LINUX32_DEBUG)/CLMOMeshFileLoader.o: CLMOMeshFileLoader.cpp
	$(CXX) $(CFLAGS_LINUX32_DEBUG) $(INC_LINUX32_DEBUG) -c CLMOMeshFileLoader.cpp -o $(OBJDIR_LINUX32_DEBUG)/CLMOMeshFileLoader.o

$(OBJDIR_LINUX32_DEBUG)/ai_track.o: ai_track.cpp
	$(CXX) $(CFLAGS_LINUX32_DEBUG) $(INC_LINUX32_DEBUG) -c ai_track.cpp -o $(OBJDIR_LINUX32_DEBUG)/ai_track.o

$(OBJDIR_LINUX32_DEBUG)/app_tester.o: app_tester.cpp
	$(CXX) $(CFLAGS_LINUX32_DEBUG) $(INC_LINUX32_DEBUG) -c app_tester.cpp -o $(OBJDIR_LINUX32_DEBUG)/app_tester.o

$(OBJDIR_LINUX32_DEBUG)/camera.o: camera.cpp
	$(CXX) $(CFLAGS_LINUX32_DEBUG) $(INC_LINUX32_DEBUG) -c camera.cpp -o $(OBJDIR_LINUX32_DEBUG)/camera.o

$(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_developer_settings.o: gui_dialogs/gui_developer_settings.cpp
	$(CXX) $(CFLAGS_LINUX32_DEBUG) $(INC_LINUX32_DEBUG) -c gui_dialogs/gui_developer_settings.cpp -o $(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_developer_settings.o

$(OBJDIR_LINUX32_DEBUG)/championship.o: championship.cpp
	$(CXX) $(CFLAGS_LINUX32_DEBUG) $(INC_LINUX32_DEBUG) -c championship.cpp -o $(OBJDIR_LINUX32_DEBUG)/championship.o

$(OBJDIR_LINUX32_DEBUG)/config.o: config.cpp
	$(CXX) $(CFLAGS_LINUX32_DEBUG) $(INC_LINUX32_DEBUG) -c config.cpp -o $(OBJDIR_LINUX32_DEBUG)/config.o

$(OBJDIR_LINUX32_DEBUG)/controller.o: controller.cpp
	$(CXX) $(CFLAGS_LINUX32_DEBUG) $(INC_LINUX32_DEBUG) -c controller.cpp -o $(OBJDIR_LINUX32_DEBUG)/controller.o

$(OBJDIR_LINUX32_DEBUG)/convert_utf.o: convert_utf.c
	$(CC) $(CFLAGS_LINUX32_DEBUG) $(INC_LINUX32_DEBUG) -c convert_utf.c -o $(OBJDIR_LINUX32_DEBUG)/convert_utf.o

$(OBJDIR_LINUX32_DEBUG)/device_joystick.o: device_joystick.cpp
	$(CXX) $(CFLAGS_LINUX32_DEBUG) $(INC_LINUX32_DEBUG) -c device_joystick.cpp -o $(OBJDIR_LINUX32_DEBUG)/device_joystick.o

$(OBJDIR_LINUX32_DEBUG)/device_joystick_settings.o: device_joystick_settings.cpp
	$(CXX) $(CFLAGS_LINUX32_DEBUG) $(INC_LINUX32_DEBUG) -c device_joystick_settings.cpp -o $(OBJDIR_LINUX32_DEBUG)/device_joystick_settings.o

$(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_menu_keyboard.o: gui_dialogs/gui_menu_keyboard.cpp
	$(CXX) $(CFLAGS_LINUX32_DEBUG) $(INC_LINUX32_DEBUG) -c gui_dialogs/gui_menu_keyboard.cpp -o $(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_menu_keyboard.o

$(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_menu_gameend.o: gui_dialogs/gui_menu_gameend.cpp
	$(CXX) $(CFLAGS_LINUX32_DEBUG) $(INC_LINUX32_DEBUG) -c gui_dialogs/gui_menu_gameend.cpp -o $(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_menu_gameend.o

$(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_menu_gameend_champ.o: gui_dialogs/gui_menu_gameend_champ.cpp
	$(CXX) $(CFLAGS_LINUX32_DEBUG) $(INC_LINUX32_DEBUG) -c gui_dialogs/gui_menu_gameend_champ.cpp -o $(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_menu_gameend_champ.o

$(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_menu_gameend_rivals.o: gui_dialogs/gui_menu_gameend_rivals.cpp
	$(CXX) $(CFLAGS_LINUX32_DEBUG) $(INC_LINUX32_DEBUG) -c gui_dialogs/gui_menu_gameend_rivals.cpp -o $(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_menu_gameend_rivals.o

$(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_menu_graphics.o: gui_dialogs/gui_menu_graphics.cpp
	$(CXX) $(CFLAGS_LINUX32_DEBUG) $(INC_LINUX32_DEBUG) -c gui_dialogs/gui_menu_graphics.cpp -o $(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_menu_graphics.o

$(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_menu_highscores.o: gui_dialogs/gui_menu_highscores.cpp
	$(CXX) $(CFLAGS_LINUX32_DEBUG) $(INC_LINUX32_DEBUG) -c gui_dialogs/gui_menu_highscores.cpp -o $(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_menu_highscores.o

$(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_menu_hover_unlocked.o: gui_dialogs/gui_menu_hover_unlocked.cpp
	$(CXX) $(CFLAGS_LINUX32_DEBUG) $(INC_LINUX32_DEBUG) -c gui_dialogs/gui_menu_hover_unlocked.cpp -o $(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_menu_hover_unlocked.o

$(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_menu_credits.o: gui_dialogs/gui_menu_credits.cpp
	$(CXX) $(CFLAGS_LINUX32_DEBUG) $(INC_LINUX32_DEBUG) -c gui_dialogs/gui_menu_credits.cpp -o $(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_menu_credits.o

$(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_menu_licenses.o: gui_dialogs/gui_menu_licenses.cpp
	$(CXX) $(CFLAGS_LINUX32_DEBUG) $(INC_LINUX32_DEBUG) -c gui_dialogs/gui_menu_licenses.cpp -o $(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_menu_licenses.o

$(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_menu_loadingscreen.o: gui_dialogs/gui_menu_loadingscreen.cpp
	$(CXX) $(CFLAGS_LINUX32_DEBUG) $(INC_LINUX32_DEBUG) -c gui_dialogs/gui_menu_loadingscreen.cpp -o $(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_menu_loadingscreen.o

$(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_menu_main.o: gui_dialogs/gui_menu_main.cpp
	$(CXX) $(CFLAGS_LINUX32_DEBUG) $(INC_LINUX32_DEBUG) -c gui_dialogs/gui_menu_main.cpp -o $(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_menu_main.o

$(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_menu_nagscreen.o: gui_dialogs/gui_menu_nagscreen.cpp
	$(CXX) $(CFLAGS_LINUX32_DEBUG) $(INC_LINUX32_DEBUG) -c gui_dialogs/gui_menu_nagscreen.cpp -o $(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_menu_nagscreen.o

$(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_menu_newprofile.o: gui_dialogs/gui_menu_newprofile.cpp
	$(CXX) $(CFLAGS_LINUX32_DEBUG) $(INC_LINUX32_DEBUG) -c gui_dialogs/gui_menu_newprofile.cpp -o $(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_menu_newprofile.o

$(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_menu_options.o: gui_dialogs/gui_menu_options.cpp
	$(CXX) $(CFLAGS_LINUX32_DEBUG) $(INC_LINUX32_DEBUG) -c gui_dialogs/gui_menu_options.cpp -o $(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_menu_options.o

$(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_levelmanager.o: gui_dialogs/gui_levelmanager.cpp
	$(CXX) $(CFLAGS_LINUX32_DEBUG) $(INC_LINUX32_DEBUG) -c gui_dialogs/gui_levelmanager.cpp -o $(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_levelmanager.o

$(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_dlg_okcancel.o: gui_dialogs/gui_dlg_okcancel.cpp
	$(CXX) $(CFLAGS_LINUX32_DEBUG) $(INC_LINUX32_DEBUG) -c gui_dialogs/gui_dlg_okcancel.cpp -o $(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_dlg_okcancel.o

$(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_editor.o: gui_dialogs/gui_editor.cpp
	$(CXX) $(CFLAGS_LINUX32_DEBUG) $(INC_LINUX32_DEBUG) -c gui_dialogs/gui_editor.cpp -o $(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_editor.o

$(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_game.o: gui_dialogs/gui_game.cpp
	$(CXX) $(CFLAGS_LINUX32_DEBUG) $(INC_LINUX32_DEBUG) -c gui_dialogs/gui_game.cpp -o $(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_game.o

$(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_helper.o: gui_dialogs/gui_helper.cpp
	$(CXX) $(CFLAGS_LINUX32_DEBUG) $(INC_LINUX32_DEBUG) -c gui_dialogs/gui_helper.cpp -o $(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_helper.o

$(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_hud.o: gui_dialogs/gui_hud.cpp
	$(CXX) $(CFLAGS_LINUX32_DEBUG) $(INC_LINUX32_DEBUG) -c gui_dialogs/gui_hud.cpp -o $(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_hud.o

$(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_intro.o: gui_dialogs/gui_intro.cpp
	$(CXX) $(CFLAGS_LINUX32_DEBUG) $(INC_LINUX32_DEBUG) -c gui_dialogs/gui_intro.cpp -o $(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_intro.o

$(OBJDIR_LINUX32_DEBUG)/CGUITTFont.o: CGUITTFont.cpp
	$(CXX) $(CFLAGS_LINUX32_DEBUG) $(INC_LINUX32_DEBUG) -c CGUITTFont.cpp -o $(OBJDIR_LINUX32_DEBUG)/CGUITTFont.o

$(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_menu_analog.o: gui_dialogs/gui_menu_analog.cpp
	$(CXX) $(CFLAGS_LINUX32_DEBUG) $(INC_LINUX32_DEBUG) -c gui_dialogs/gui_menu_analog.cpp -o $(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_menu_analog.o

$(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_menu_arcade.o: gui_dialogs/gui_menu_arcade.cpp
	$(CXX) $(CFLAGS_LINUX32_DEBUG) $(INC_LINUX32_DEBUG) -c gui_dialogs/gui_menu_arcade.cpp -o $(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_menu_arcade.o

$(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_menu_championship.o: gui_dialogs/gui_menu_championship.cpp
	$(CXX) $(CFLAGS_LINUX32_DEBUG) $(INC_LINUX32_DEBUG) -c gui_dialogs/gui_menu_championship.cpp -o $(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_menu_championship.o

$(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_menu_championship_progress.o: gui_dialogs/gui_menu_championship_progress.cpp
	$(CXX) $(CFLAGS_LINUX32_DEBUG) $(INC_LINUX32_DEBUG) -c gui_dialogs/gui_menu_championship_progress.cpp -o $(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_menu_championship_progress.o

$(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_menu_championship_winner.o: gui_dialogs/gui_menu_championship_winner.cpp
	$(CXX) $(CFLAGS_LINUX32_DEBUG) $(INC_LINUX32_DEBUG) -c gui_dialogs/gui_menu_championship_winner.cpp -o $(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_menu_championship_winner.o

$(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_menu_controls.o: gui_dialogs/gui_menu_controls.cpp
	$(CXX) $(CFLAGS_LINUX32_DEBUG) $(INC_LINUX32_DEBUG) -c gui_dialogs/gui_menu_controls.cpp -o $(OBJDIR_LINUX32_DEBUG)/gui_dialogs/gui_menu_controls.o

clean_linux32_debug: 
	rm -f $(OBJ_LINUX32_DEBUG) $(OUT_LINUX32_DEBUG)
	rm -rf ..
	rm -rf $(OBJDIR_LINUX32_DEBUG)
	rm -rf $(OBJDIR_LINUX32_DEBUG)/gui_dialogs
	rm -rf $(OBJDIR_LINUX32_DEBUG)/tinyxml
	rm -rf $(OBJDIR_LINUX32_DEBUG)/mobile

before_linux32_release: 
	test -d .. || mkdir -p ..
	test -d $(OBJDIR_LINUX32_RELEASE) || mkdir -p $(OBJDIR_LINUX32_RELEASE)
	test -d $(OBJDIR_LINUX32_RELEASE)/gui_dialogs || mkdir -p $(OBJDIR_LINUX32_RELEASE)/gui_dialogs
	test -d $(OBJDIR_LINUX32_RELEASE)/tinyxml || mkdir -p $(OBJDIR_LINUX32_RELEASE)/tinyxml
	test -d $(OBJDIR_LINUX32_RELEASE)/mobile || mkdir -p $(OBJDIR_LINUX32_RELEASE)/mobile

after_linux32_release: 

linux32_release: before_linux32_release out_linux32_release after_linux32_release

out_linux32_release: before_linux32_release $(OBJ_LINUX32_RELEASE) $(DEP_LINUX32_RELEASE)
	$(LD) $(LIBDIR_LINUX32_RELEASE) -o $(OUT_LINUX32_RELEASE) $(OBJ_LINUX32_RELEASE)  $(LDFLAGS_LINUX32_RELEASE) $(LIB_LINUX32_RELEASE)

$(OBJDIR_LINUX32_RELEASE)/irrlicht_manager.o: irrlicht_manager.cpp
	$(CXX) $(CFLAGS_LINUX32_RELEASE) $(INC_LINUX32_RELEASE) -c irrlicht_manager.cpp -o $(OBJDIR_LINUX32_RELEASE)/irrlicht_manager.o

$(OBJDIR_LINUX32_RELEASE)/helper_math.o: helper_math.cpp
	$(CXX) $(CFLAGS_LINUX32_RELEASE) $(INC_LINUX32_RELEASE) -c helper_math.cpp -o $(OBJDIR_LINUX32_RELEASE)/helper_math.o

$(OBJDIR_LINUX32_RELEASE)/helper_str.o: helper_str.cpp
	$(CXX) $(CFLAGS_LINUX32_RELEASE) $(INC_LINUX32_RELEASE) -c helper_str.cpp -o $(OBJDIR_LINUX32_RELEASE)/helper_str.o

$(OBJDIR_LINUX32_RELEASE)/helper_xml.o: helper_xml.cpp
	$(CXX) $(CFLAGS_LINUX32_RELEASE) $(INC_LINUX32_RELEASE) -c helper_xml.cpp -o $(OBJDIR_LINUX32_RELEASE)/helper_xml.o

$(OBJDIR_LINUX32_RELEASE)/highscores.o: highscores.cpp
	$(CXX) $(CFLAGS_LINUX32_RELEASE) $(INC_LINUX32_RELEASE) -c highscores.cpp -o $(OBJDIR_LINUX32_RELEASE)/highscores.o

$(OBJDIR_LINUX32_RELEASE)/hover.o: hover.cpp
	$(CXX) $(CFLAGS_LINUX32_RELEASE) $(INC_LINUX32_RELEASE) -c hover.cpp -o $(OBJDIR_LINUX32_RELEASE)/hover.o

$(OBJDIR_LINUX32_RELEASE)/input_device.o: input_device.cpp
	$(CXX) $(CFLAGS_LINUX32_RELEASE) $(INC_LINUX32_RELEASE) -c input_device.cpp -o $(OBJDIR_LINUX32_RELEASE)/input_device.o

$(OBJDIR_LINUX32_RELEASE)/input_device_manager.o: input_device_manager.cpp
	$(CXX) $(CFLAGS_LINUX32_RELEASE) $(INC_LINUX32_RELEASE) -c input_device_manager.cpp -o $(OBJDIR_LINUX32_RELEASE)/input_device_manager.o

$(OBJDIR_LINUX32_RELEASE)/keycode_strings.o: keycode_strings.cpp
	$(CXX) $(CFLAGS_LINUX32_RELEASE) $(INC_LINUX32_RELEASE) -c keycode_strings.cpp -o $(OBJDIR_LINUX32_RELEASE)/keycode_strings.o

$(OBJDIR_LINUX32_RELEASE)/level.o: level.cpp
	$(CXX) $(CFLAGS_LINUX32_RELEASE) $(INC_LINUX32_RELEASE) -c level.cpp -o $(OBJDIR_LINUX32_RELEASE)/level.o

$(OBJDIR_LINUX32_RELEASE)/level_manager.o: level_manager.cpp
	$(CXX) $(CFLAGS_LINUX32_RELEASE) $(INC_LINUX32_RELEASE) -c level_manager.cpp -o $(OBJDIR_LINUX32_RELEASE)/level_manager.o

$(OBJDIR_LINUX32_RELEASE)/logging.o: logging.cpp
	$(CXX) $(CFLAGS_LINUX32_RELEASE) $(INC_LINUX32_RELEASE) -c logging.cpp -o $(OBJDIR_LINUX32_RELEASE)/logging.o

$(OBJDIR_LINUX32_RELEASE)/main.o: main.cpp
	$(CXX) $(CFLAGS_LINUX32_RELEASE) $(INC_LINUX32_RELEASE) -c main.cpp -o $(OBJDIR_LINUX32_RELEASE)/main.o

$(OBJDIR_LINUX32_RELEASE)/mesh_texture_loader.o: mesh_texture_loader.cpp
	$(CXX) $(CFLAGS_LINUX32_RELEASE) $(INC_LINUX32_RELEASE) -c mesh_texture_loader.cpp -o $(OBJDIR_LINUX32_RELEASE)/mesh_texture_loader.o

$(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_menu_tutorial3.o: gui_dialogs/gui_menu_tutorial3.cpp
	$(CXX) $(CFLAGS_LINUX32_RELEASE) $(INC_LINUX32_RELEASE) -c gui_dialogs/gui_menu_tutorial3.cpp -o $(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_menu_tutorial3.o

$(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_menu_profiles.o: gui_dialogs/gui_menu_profiles.cpp
	$(CXX) $(CFLAGS_LINUX32_RELEASE) $(INC_LINUX32_RELEASE) -c gui_dialogs/gui_menu_profiles.cpp -o $(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_menu_profiles.o

$(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_menu_replaytheatre.o: gui_dialogs/gui_menu_replaytheatre.cpp
	$(CXX) $(CFLAGS_LINUX32_RELEASE) $(INC_LINUX32_RELEASE) -c gui_dialogs/gui_menu_replaytheatre.cpp -o $(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_menu_replaytheatre.o

$(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_menu_rivals.o: gui_dialogs/gui_menu_rivals.cpp
	$(CXX) $(CFLAGS_LINUX32_RELEASE) $(INC_LINUX32_RELEASE) -c gui_dialogs/gui_menu_rivals.cpp -o $(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_menu_rivals.o

$(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_menu_rivals_score.o: gui_dialogs/gui_menu_rivals_score.cpp
	$(CXX) $(CFLAGS_LINUX32_RELEASE) $(INC_LINUX32_RELEASE) -c gui_dialogs/gui_menu_rivals_score.cpp -o $(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_menu_rivals_score.o

$(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_menu_selecthover.o: gui_dialogs/gui_menu_selecthover.cpp
	$(CXX) $(CFLAGS_LINUX32_RELEASE) $(INC_LINUX32_RELEASE) -c gui_dialogs/gui_menu_selecthover.cpp -o $(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_menu_selecthover.o

$(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_menu_timeattack.o: gui_dialogs/gui_menu_timeattack.cpp
	$(CXX) $(CFLAGS_LINUX32_RELEASE) $(INC_LINUX32_RELEASE) -c gui_dialogs/gui_menu_timeattack.cpp -o $(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_menu_timeattack.o

$(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_modellist.o: gui_dialogs/gui_modellist.cpp
	$(CXX) $(CFLAGS_LINUX32_RELEASE) $(INC_LINUX32_RELEASE) -c gui_dialogs/gui_modellist.cpp -o $(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_modellist.o

$(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_nodemanager.o: gui_dialogs/gui_nodemanager.cpp
	$(CXX) $(CFLAGS_LINUX32_RELEASE) $(INC_LINUX32_RELEASE) -c gui_dialogs/gui_nodemanager.cpp -o $(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_nodemanager.o

$(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_touch.o: gui_dialogs/gui_touch.cpp
	$(CXX) $(CFLAGS_LINUX32_RELEASE) $(INC_LINUX32_RELEASE) -c gui_dialogs/gui_touch.cpp -o $(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_touch.o

$(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_user_controls.o: gui_dialogs/gui_user_controls.cpp
	$(CXX) $(CFLAGS_LINUX32_RELEASE) $(INC_LINUX32_RELEASE) -c gui_dialogs/gui_user_controls.cpp -o $(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_user_controls.o

$(OBJDIR_LINUX32_RELEASE)/helper_file.o: helper_file.cpp
	$(CXX) $(CFLAGS_LINUX32_RELEASE) $(INC_LINUX32_RELEASE) -c helper_file.cpp -o $(OBJDIR_LINUX32_RELEASE)/helper_file.o

$(OBJDIR_LINUX32_RELEASE)/helper_irr.o: helper_irr.cpp
	$(CXX) $(CFLAGS_LINUX32_RELEASE) $(INC_LINUX32_RELEASE) -c helper_irr.cpp -o $(OBJDIR_LINUX32_RELEASE)/helper_irr.o

$(OBJDIR_LINUX32_RELEASE)/streaming.o: streaming.cpp
	$(CXX) $(CFLAGS_LINUX32_RELEASE) $(INC_LINUX32_RELEASE) -c streaming.cpp -o $(OBJDIR_LINUX32_RELEASE)/streaming.o

$(OBJDIR_LINUX32_RELEASE)/random.o: random.cpp
	$(CXX) $(CFLAGS_LINUX32_RELEASE) $(INC_LINUX32_RELEASE) -c random.cpp -o $(OBJDIR_LINUX32_RELEASE)/random.o

$(OBJDIR_LINUX32_RELEASE)/recorder.o: recorder.cpp
	$(CXX) $(CFLAGS_LINUX32_RELEASE) $(INC_LINUX32_RELEASE) -c recorder.cpp -o $(OBJDIR_LINUX32_RELEASE)/recorder.o

$(OBJDIR_LINUX32_RELEASE)/rivalsmode.o: rivalsmode.cpp
	$(CXX) $(CFLAGS_LINUX32_RELEASE) $(INC_LINUX32_RELEASE) -c rivalsmode.cpp -o $(OBJDIR_LINUX32_RELEASE)/rivalsmode.o

$(OBJDIR_LINUX32_RELEASE)/sound_openal.o: sound_openal.cpp
	$(CXX) $(CFLAGS_LINUX32_RELEASE) $(INC_LINUX32_RELEASE) -c sound_openal.cpp -o $(OBJDIR_LINUX32_RELEASE)/sound_openal.o

$(OBJDIR_LINUX32_RELEASE)/sound_settings.o: sound_settings.cpp
	$(CXX) $(CFLAGS_LINUX32_RELEASE) $(INC_LINUX32_RELEASE) -c sound_settings.cpp -o $(OBJDIR_LINUX32_RELEASE)/sound_settings.o

$(OBJDIR_LINUX32_RELEASE)/start_browser.o: start_browser.cpp
	$(CXX) $(CFLAGS_LINUX32_RELEASE) $(INC_LINUX32_RELEASE) -c start_browser.cpp -o $(OBJDIR_LINUX32_RELEASE)/start_browser.o

$(OBJDIR_LINUX32_RELEASE)/string_table.o: string_table.cpp
	$(CXX) $(CFLAGS_LINUX32_RELEASE) $(INC_LINUX32_RELEASE) -c string_table.cpp -o $(OBJDIR_LINUX32_RELEASE)/string_table.o

$(OBJDIR_LINUX32_RELEASE)/timer.o: timer.cpp
	$(CXX) $(CFLAGS_LINUX32_RELEASE) $(INC_LINUX32_RELEASE) -c timer.cpp -o $(OBJDIR_LINUX32_RELEASE)/timer.o

$(OBJDIR_LINUX32_RELEASE)/tinyxml/tinystr.o: tinyxml/tinystr.cpp
	$(CXX) $(CFLAGS_LINUX32_RELEASE) $(INC_LINUX32_RELEASE) -c tinyxml/tinystr.cpp -o $(OBJDIR_LINUX32_RELEASE)/tinyxml/tinystr.o

$(OBJDIR_LINUX32_RELEASE)/tinyxml/tinyxml.o: tinyxml/tinyxml.cpp
	$(CXX) $(CFLAGS_LINUX32_RELEASE) $(INC_LINUX32_RELEASE) -c tinyxml/tinyxml.cpp -o $(OBJDIR_LINUX32_RELEASE)/tinyxml/tinyxml.o

$(OBJDIR_LINUX32_RELEASE)/tinyxml/tinyxmlerror.o: tinyxml/tinyxmlerror.cpp
	$(CXX) $(CFLAGS_LINUX32_RELEASE) $(INC_LINUX32_RELEASE) -c tinyxml/tinyxmlerror.cpp -o $(OBJDIR_LINUX32_RELEASE)/tinyxml/tinyxmlerror.o

$(OBJDIR_LINUX32_RELEASE)/tinyxml/tinyxmlparser.o: tinyxml/tinyxmlparser.cpp
	$(CXX) $(CFLAGS_LINUX32_RELEASE) $(INC_LINUX32_RELEASE) -c tinyxml/tinyxmlparser.cpp -o $(OBJDIR_LINUX32_RELEASE)/tinyxml/tinyxmlparser.o

$(OBJDIR_LINUX32_RELEASE)/track_marker.o: track_marker.cpp
	$(CXX) $(CFLAGS_LINUX32_RELEASE) $(INC_LINUX32_RELEASE) -c track_marker.cpp -o $(OBJDIR_LINUX32_RELEASE)/track_marker.o

$(OBJDIR_LINUX32_RELEASE)/mobile/advert_admob.o: mobile/advert_admob.cpp
	$(CXX) $(CFLAGS_LINUX32_RELEASE) $(INC_LINUX32_RELEASE) -c mobile/advert_admob.cpp -o $(OBJDIR_LINUX32_RELEASE)/mobile/advert_admob.o

$(OBJDIR_LINUX32_RELEASE)/mobile/android_tools.o: mobile/android_tools.cpp
	$(CXX) $(CFLAGS_LINUX32_RELEASE) $(INC_LINUX32_RELEASE) -c mobile/android_tools.cpp -o $(OBJDIR_LINUX32_RELEASE)/mobile/android_tools.o

$(OBJDIR_LINUX32_RELEASE)/mobile/app_restrictions.o: mobile/app_restrictions.cpp
	$(CXX) $(CFLAGS_LINUX32_RELEASE) $(INC_LINUX32_RELEASE) -c mobile/app_restrictions.cpp -o $(OBJDIR_LINUX32_RELEASE)/mobile/app_restrictions.o

$(OBJDIR_LINUX32_RELEASE)/mobile/billing_googleplay.o: mobile/billing_googleplay.cpp
	$(CXX) $(CFLAGS_LINUX32_RELEASE) $(INC_LINUX32_RELEASE) -c mobile/billing_googleplay.cpp -o $(OBJDIR_LINUX32_RELEASE)/mobile/billing_googleplay.o

$(OBJDIR_LINUX32_RELEASE)/music_manager.o: music_manager.cpp
	$(CXX) $(CFLAGS_LINUX32_RELEASE) $(INC_LINUX32_RELEASE) -c music_manager.cpp -o $(OBJDIR_LINUX32_RELEASE)/music_manager.o

$(OBJDIR_LINUX32_RELEASE)/nn.o: nn.cpp
	$(CXX) $(CFLAGS_LINUX32_RELEASE) $(INC_LINUX32_RELEASE) -c nn.cpp -o $(OBJDIR_LINUX32_RELEASE)/nn.o

$(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_menu_pause.o: gui_dialogs/gui_menu_pause.cpp
	$(CXX) $(CFLAGS_LINUX32_RELEASE) $(INC_LINUX32_RELEASE) -c gui_dialogs/gui_menu_pause.cpp -o $(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_menu_pause.o

$(OBJDIR_LINUX32_RELEASE)/node_manager.o: node_manager.cpp
	$(CXX) $(CFLAGS_LINUX32_RELEASE) $(INC_LINUX32_RELEASE) -c node_manager.cpp -o $(OBJDIR_LINUX32_RELEASE)/node_manager.o

$(OBJDIR_LINUX32_RELEASE)/ogg_stream.o: ogg_stream.cpp
	$(CXX) $(CFLAGS_LINUX32_RELEASE) $(INC_LINUX32_RELEASE) -c ogg_stream.cpp -o $(OBJDIR_LINUX32_RELEASE)/ogg_stream.o

$(OBJDIR_LINUX32_RELEASE)/ogles2_materials.o: ogles2_materials.cpp
	$(CXX) $(CFLAGS_LINUX32_RELEASE) $(INC_LINUX32_RELEASE) -c ogles2_materials.cpp -o $(OBJDIR_LINUX32_RELEASE)/ogles2_materials.o

$(OBJDIR_LINUX32_RELEASE)/ov_callbacks.o: ov_callbacks.cpp
	$(CXX) $(CFLAGS_LINUX32_RELEASE) $(INC_LINUX32_RELEASE) -c ov_callbacks.cpp -o $(OBJDIR_LINUX32_RELEASE)/ov_callbacks.o

$(OBJDIR_LINUX32_RELEASE)/physics.o: physics.cpp
	$(CXX) $(CFLAGS_LINUX32_RELEASE) $(INC_LINUX32_RELEASE) -c physics.cpp -o $(OBJDIR_LINUX32_RELEASE)/physics.o

$(OBJDIR_LINUX32_RELEASE)/player.o: player.cpp
	$(CXX) $(CFLAGS_LINUX32_RELEASE) $(INC_LINUX32_RELEASE) -c player.cpp -o $(OBJDIR_LINUX32_RELEASE)/player.o

$(OBJDIR_LINUX32_RELEASE)/profiles.o: profiles.cpp
	$(CXX) $(CFLAGS_LINUX32_RELEASE) $(INC_LINUX32_RELEASE) -c profiles.cpp -o $(OBJDIR_LINUX32_RELEASE)/profiles.o

$(OBJDIR_LINUX32_RELEASE)/game.o: game.cpp
	$(CXX) $(CFLAGS_LINUX32_RELEASE) $(INC_LINUX32_RELEASE) -c game.cpp -o $(OBJDIR_LINUX32_RELEASE)/game.o

$(OBJDIR_LINUX32_RELEASE)/device_keyboard.o: device_keyboard.cpp
	$(CXX) $(CFLAGS_LINUX32_RELEASE) $(INC_LINUX32_RELEASE) -c device_keyboard.cpp -o $(OBJDIR_LINUX32_RELEASE)/device_keyboard.o

$(OBJDIR_LINUX32_RELEASE)/device_mouse.o: device_mouse.cpp
	$(CXX) $(CFLAGS_LINUX32_RELEASE) $(INC_LINUX32_RELEASE) -c device_mouse.cpp -o $(OBJDIR_LINUX32_RELEASE)/device_mouse.o

$(OBJDIR_LINUX32_RELEASE)/device_touch.o: device_touch.cpp
	$(CXX) $(CFLAGS_LINUX32_RELEASE) $(INC_LINUX32_RELEASE) -c device_touch.cpp -o $(OBJDIR_LINUX32_RELEASE)/device_touch.o

$(OBJDIR_LINUX32_RELEASE)/device_touch_settings.o: device_touch_settings.cpp
	$(CXX) $(CFLAGS_LINUX32_RELEASE) $(INC_LINUX32_RELEASE) -c device_touch_settings.cpp -o $(OBJDIR_LINUX32_RELEASE)/device_touch_settings.o

$(OBJDIR_LINUX32_RELEASE)/editor.o: editor.cpp
	$(CXX) $(CFLAGS_LINUX32_RELEASE) $(INC_LINUX32_RELEASE) -c editor.cpp -o $(OBJDIR_LINUX32_RELEASE)/editor.o

$(OBJDIR_LINUX32_RELEASE)/event_receiver_base.o: event_receiver_base.cpp
	$(CXX) $(CFLAGS_LINUX32_RELEASE) $(INC_LINUX32_RELEASE) -c event_receiver_base.cpp -o $(OBJDIR_LINUX32_RELEASE)/event_receiver_base.o

$(OBJDIR_LINUX32_RELEASE)/font_manager.o: font_manager.cpp
	$(CXX) $(CFLAGS_LINUX32_RELEASE) $(INC_LINUX32_RELEASE) -c font_manager.cpp -o $(OBJDIR_LINUX32_RELEASE)/font_manager.o

$(OBJDIR_LINUX32_RELEASE)/grid_triangle_selector.o: grid_triangle_selector.cpp
	$(CXX) $(CFLAGS_LINUX32_RELEASE) $(INC_LINUX32_RELEASE) -c grid_triangle_selector.cpp -o $(OBJDIR_LINUX32_RELEASE)/grid_triangle_selector.o

$(OBJDIR_LINUX32_RELEASE)/gui.o: gui.cpp
	$(CXX) $(CFLAGS_LINUX32_RELEASE) $(INC_LINUX32_RELEASE) -c gui.cpp -o $(OBJDIR_LINUX32_RELEASE)/gui.o

$(OBJDIR_LINUX32_RELEASE)/gui_dialog.o: gui_dialog.cpp
	$(CXX) $(CFLAGS_LINUX32_RELEASE) $(INC_LINUX32_RELEASE) -c gui_dialog.cpp -o $(OBJDIR_LINUX32_RELEASE)/gui_dialog.o

$(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_ai.o: gui_dialogs/gui_ai.cpp
	$(CXX) $(CFLAGS_LINUX32_RELEASE) $(INC_LINUX32_RELEASE) -c gui_dialogs/gui_ai.cpp -o $(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_ai.o

$(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_controller_display.o: gui_dialogs/gui_controller_display.cpp
	$(CXX) $(CFLAGS_LINUX32_RELEASE) $(INC_LINUX32_RELEASE) -c gui_dialogs/gui_controller_display.cpp -o $(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_controller_display.o

$(OBJDIR_LINUX32_RELEASE)/CGUITextSlider.o: CGUITextSlider.cpp
	$(CXX) $(CFLAGS_LINUX32_RELEASE) $(INC_LINUX32_RELEASE) -c CGUITextSlider.cpp -o $(OBJDIR_LINUX32_RELEASE)/CGUITextSlider.o

$(OBJDIR_LINUX32_RELEASE)/CLMOMeshFileLoader.o: CLMOMeshFileLoader.cpp
	$(CXX) $(CFLAGS_LINUX32_RELEASE) $(INC_LINUX32_RELEASE) -c CLMOMeshFileLoader.cpp -o $(OBJDIR_LINUX32_RELEASE)/CLMOMeshFileLoader.o

$(OBJDIR_LINUX32_RELEASE)/ai_track.o: ai_track.cpp
	$(CXX) $(CFLAGS_LINUX32_RELEASE) $(INC_LINUX32_RELEASE) -c ai_track.cpp -o $(OBJDIR_LINUX32_RELEASE)/ai_track.o

$(OBJDIR_LINUX32_RELEASE)/app_tester.o: app_tester.cpp
	$(CXX) $(CFLAGS_LINUX32_RELEASE) $(INC_LINUX32_RELEASE) -c app_tester.cpp -o $(OBJDIR_LINUX32_RELEASE)/app_tester.o

$(OBJDIR_LINUX32_RELEASE)/camera.o: camera.cpp
	$(CXX) $(CFLAGS_LINUX32_RELEASE) $(INC_LINUX32_RELEASE) -c camera.cpp -o $(OBJDIR_LINUX32_RELEASE)/camera.o

$(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_developer_settings.o: gui_dialogs/gui_developer_settings.cpp
	$(CXX) $(CFLAGS_LINUX32_RELEASE) $(INC_LINUX32_RELEASE) -c gui_dialogs/gui_developer_settings.cpp -o $(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_developer_settings.o

$(OBJDIR_LINUX32_RELEASE)/championship.o: championship.cpp
	$(CXX) $(CFLAGS_LINUX32_RELEASE) $(INC_LINUX32_RELEASE) -c championship.cpp -o $(OBJDIR_LINUX32_RELEASE)/championship.o

$(OBJDIR_LINUX32_RELEASE)/config.o: config.cpp
	$(CXX) $(CFLAGS_LINUX32_RELEASE) $(INC_LINUX32_RELEASE) -c config.cpp -o $(OBJDIR_LINUX32_RELEASE)/config.o

$(OBJDIR_LINUX32_RELEASE)/controller.o: controller.cpp
	$(CXX) $(CFLAGS_LINUX32_RELEASE) $(INC_LINUX32_RELEASE) -c controller.cpp -o $(OBJDIR_LINUX32_RELEASE)/controller.o

$(OBJDIR_LINUX32_RELEASE)/convert_utf.o: convert_utf.c
	$(CC) $(CFLAGS_LINUX32_RELEASE) $(INC_LINUX32_RELEASE) -c convert_utf.c -o $(OBJDIR_LINUX32_RELEASE)/convert_utf.o

$(OBJDIR_LINUX32_RELEASE)/device_joystick.o: device_joystick.cpp
	$(CXX) $(CFLAGS_LINUX32_RELEASE) $(INC_LINUX32_RELEASE) -c device_joystick.cpp -o $(OBJDIR_LINUX32_RELEASE)/device_joystick.o

$(OBJDIR_LINUX32_RELEASE)/device_joystick_settings.o: device_joystick_settings.cpp
	$(CXX) $(CFLAGS_LINUX32_RELEASE) $(INC_LINUX32_RELEASE) -c device_joystick_settings.cpp -o $(OBJDIR_LINUX32_RELEASE)/device_joystick_settings.o

$(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_menu_keyboard.o: gui_dialogs/gui_menu_keyboard.cpp
	$(CXX) $(CFLAGS_LINUX32_RELEASE) $(INC_LINUX32_RELEASE) -c gui_dialogs/gui_menu_keyboard.cpp -o $(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_menu_keyboard.o

$(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_menu_gameend.o: gui_dialogs/gui_menu_gameend.cpp
	$(CXX) $(CFLAGS_LINUX32_RELEASE) $(INC_LINUX32_RELEASE) -c gui_dialogs/gui_menu_gameend.cpp -o $(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_menu_gameend.o

$(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_menu_gameend_champ.o: gui_dialogs/gui_menu_gameend_champ.cpp
	$(CXX) $(CFLAGS_LINUX32_RELEASE) $(INC_LINUX32_RELEASE) -c gui_dialogs/gui_menu_gameend_champ.cpp -o $(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_menu_gameend_champ.o

$(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_menu_gameend_rivals.o: gui_dialogs/gui_menu_gameend_rivals.cpp
	$(CXX) $(CFLAGS_LINUX32_RELEASE) $(INC_LINUX32_RELEASE) -c gui_dialogs/gui_menu_gameend_rivals.cpp -o $(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_menu_gameend_rivals.o

$(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_menu_graphics.o: gui_dialogs/gui_menu_graphics.cpp
	$(CXX) $(CFLAGS_LINUX32_RELEASE) $(INC_LINUX32_RELEASE) -c gui_dialogs/gui_menu_graphics.cpp -o $(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_menu_graphics.o

$(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_menu_highscores.o: gui_dialogs/gui_menu_highscores.cpp
	$(CXX) $(CFLAGS_LINUX32_RELEASE) $(INC_LINUX32_RELEASE) -c gui_dialogs/gui_menu_highscores.cpp -o $(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_menu_highscores.o

$(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_menu_hover_unlocked.o: gui_dialogs/gui_menu_hover_unlocked.cpp
	$(CXX) $(CFLAGS_LINUX32_RELEASE) $(INC_LINUX32_RELEASE) -c gui_dialogs/gui_menu_hover_unlocked.cpp -o $(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_menu_hover_unlocked.o

$(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_menu_credits.o: gui_dialogs/gui_menu_credits.cpp
	$(CXX) $(CFLAGS_LINUX32_RELEASE) $(INC_LINUX32_RELEASE) -c gui_dialogs/gui_menu_credits.cpp -o $(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_menu_credits.o

$(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_menu_licenses.o: gui_dialogs/gui_menu_licenses.cpp
	$(CXX) $(CFLAGS_LINUX32_RELEASE) $(INC_LINUX32_RELEASE) -c gui_dialogs/gui_menu_licenses.cpp -o $(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_menu_licenses.o

$(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_menu_loadingscreen.o: gui_dialogs/gui_menu_loadingscreen.cpp
	$(CXX) $(CFLAGS_LINUX32_RELEASE) $(INC_LINUX32_RELEASE) -c gui_dialogs/gui_menu_loadingscreen.cpp -o $(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_menu_loadingscreen.o

$(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_menu_main.o: gui_dialogs/gui_menu_main.cpp
	$(CXX) $(CFLAGS_LINUX32_RELEASE) $(INC_LINUX32_RELEASE) -c gui_dialogs/gui_menu_main.cpp -o $(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_menu_main.o

$(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_menu_nagscreen.o: gui_dialogs/gui_menu_nagscreen.cpp
	$(CXX) $(CFLAGS_LINUX32_RELEASE) $(INC_LINUX32_RELEASE) -c gui_dialogs/gui_menu_nagscreen.cpp -o $(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_menu_nagscreen.o

$(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_menu_newprofile.o: gui_dialogs/gui_menu_newprofile.cpp
	$(CXX) $(CFLAGS_LINUX32_RELEASE) $(INC_LINUX32_RELEASE) -c gui_dialogs/gui_menu_newprofile.cpp -o $(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_menu_newprofile.o

$(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_menu_options.o: gui_dialogs/gui_menu_options.cpp
	$(CXX) $(CFLAGS_LINUX32_RELEASE) $(INC_LINUX32_RELEASE) -c gui_dialogs/gui_menu_options.cpp -o $(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_menu_options.o

$(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_levelmanager.o: gui_dialogs/gui_levelmanager.cpp
	$(CXX) $(CFLAGS_LINUX32_RELEASE) $(INC_LINUX32_RELEASE) -c gui_dialogs/gui_levelmanager.cpp -o $(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_levelmanager.o

$(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_dlg_okcancel.o: gui_dialogs/gui_dlg_okcancel.cpp
	$(CXX) $(CFLAGS_LINUX32_RELEASE) $(INC_LINUX32_RELEASE) -c gui_dialogs/gui_dlg_okcancel.cpp -o $(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_dlg_okcancel.o

$(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_editor.o: gui_dialogs/gui_editor.cpp
	$(CXX) $(CFLAGS_LINUX32_RELEASE) $(INC_LINUX32_RELEASE) -c gui_dialogs/gui_editor.cpp -o $(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_editor.o

$(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_game.o: gui_dialogs/gui_game.cpp
	$(CXX) $(CFLAGS_LINUX32_RELEASE) $(INC_LINUX32_RELEASE) -c gui_dialogs/gui_game.cpp -o $(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_game.o

$(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_helper.o: gui_dialogs/gui_helper.cpp
	$(CXX) $(CFLAGS_LINUX32_RELEASE) $(INC_LINUX32_RELEASE) -c gui_dialogs/gui_helper.cpp -o $(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_helper.o

$(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_hud.o: gui_dialogs/gui_hud.cpp
	$(CXX) $(CFLAGS_LINUX32_RELEASE) $(INC_LINUX32_RELEASE) -c gui_dialogs/gui_hud.cpp -o $(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_hud.o

$(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_intro.o: gui_dialogs/gui_intro.cpp
	$(CXX) $(CFLAGS_LINUX32_RELEASE) $(INC_LINUX32_RELEASE) -c gui_dialogs/gui_intro.cpp -o $(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_intro.o

$(OBJDIR_LINUX32_RELEASE)/CGUITTFont.o: CGUITTFont.cpp
	$(CXX) $(CFLAGS_LINUX32_RELEASE) $(INC_LINUX32_RELEASE) -c CGUITTFont.cpp -o $(OBJDIR_LINUX32_RELEASE)/CGUITTFont.o

$(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_menu_analog.o: gui_dialogs/gui_menu_analog.cpp
	$(CXX) $(CFLAGS_LINUX32_RELEASE) $(INC_LINUX32_RELEASE) -c gui_dialogs/gui_menu_analog.cpp -o $(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_menu_analog.o

$(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_menu_arcade.o: gui_dialogs/gui_menu_arcade.cpp
	$(CXX) $(CFLAGS_LINUX32_RELEASE) $(INC_LINUX32_RELEASE) -c gui_dialogs/gui_menu_arcade.cpp -o $(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_menu_arcade.o

$(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_menu_championship.o: gui_dialogs/gui_menu_championship.cpp
	$(CXX) $(CFLAGS_LINUX32_RELEASE) $(INC_LINUX32_RELEASE) -c gui_dialogs/gui_menu_championship.cpp -o $(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_menu_championship.o

$(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_menu_championship_progress.o: gui_dialogs/gui_menu_championship_progress.cpp
	$(CXX) $(CFLAGS_LINUX32_RELEASE) $(INC_LINUX32_RELEASE) -c gui_dialogs/gui_menu_championship_progress.cpp -o $(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_menu_championship_progress.o

$(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_menu_championship_winner.o: gui_dialogs/gui_menu_championship_winner.cpp
	$(CXX) $(CFLAGS_LINUX32_RELEASE) $(INC_LINUX32_RELEASE) -c gui_dialogs/gui_menu_championship_winner.cpp -o $(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_menu_championship_winner.o

$(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_menu_controls.o: gui_dialogs/gui_menu_controls.cpp
	$(CXX) $(CFLAGS_LINUX32_RELEASE) $(INC_LINUX32_RELEASE) -c gui_dialogs/gui_menu_controls.cpp -o $(OBJDIR_LINUX32_RELEASE)/gui_dialogs/gui_menu_controls.o

clean_linux32_release: 
	rm -f $(OBJ_LINUX32_RELEASE) $(OUT_LINUX32_RELEASE)
	rm -rf ..
	rm -rf $(OBJDIR_LINUX32_RELEASE)
	rm -rf $(OBJDIR_LINUX32_RELEASE)/gui_dialogs
	rm -rf $(OBJDIR_LINUX32_RELEASE)/tinyxml
	rm -rf $(OBJDIR_LINUX32_RELEASE)/mobile

before_linux64es2_debug: 
	test -d .. || mkdir -p ..
	test -d $(OBJDIR_LINUX64ES2_DEBUG) || mkdir -p $(OBJDIR_LINUX64ES2_DEBUG)
	test -d $(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs || mkdir -p $(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs
	test -d $(OBJDIR_LINUX64ES2_DEBUG)/tinyxml || mkdir -p $(OBJDIR_LINUX64ES2_DEBUG)/tinyxml
	test -d $(OBJDIR_LINUX64ES2_DEBUG)/mobile || mkdir -p $(OBJDIR_LINUX64ES2_DEBUG)/mobile

after_linux64es2_debug: 

linux64es2_debug: before_linux64es2_debug out_linux64es2_debug after_linux64es2_debug

out_linux64es2_debug: before_linux64es2_debug $(OBJ_LINUX64ES2_DEBUG) $(DEP_LINUX64ES2_DEBUG)
	$(LD) $(LIBDIR_LINUX64ES2_DEBUG) -o $(OUT_LINUX64ES2_DEBUG) $(OBJ_LINUX64ES2_DEBUG)  $(LDFLAGS_LINUX64ES2_DEBUG) $(LIB_LINUX64ES2_DEBUG)

$(OBJDIR_LINUX64ES2_DEBUG)/irrlicht_manager.o: irrlicht_manager.cpp
	$(CXX) $(CFLAGS_LINUX64ES2_DEBUG) $(INC_LINUX64ES2_DEBUG) -c irrlicht_manager.cpp -o $(OBJDIR_LINUX64ES2_DEBUG)/irrlicht_manager.o

$(OBJDIR_LINUX64ES2_DEBUG)/helper_math.o: helper_math.cpp
	$(CXX) $(CFLAGS_LINUX64ES2_DEBUG) $(INC_LINUX64ES2_DEBUG) -c helper_math.cpp -o $(OBJDIR_LINUX64ES2_DEBUG)/helper_math.o

$(OBJDIR_LINUX64ES2_DEBUG)/helper_str.o: helper_str.cpp
	$(CXX) $(CFLAGS_LINUX64ES2_DEBUG) $(INC_LINUX64ES2_DEBUG) -c helper_str.cpp -o $(OBJDIR_LINUX64ES2_DEBUG)/helper_str.o

$(OBJDIR_LINUX64ES2_DEBUG)/helper_xml.o: helper_xml.cpp
	$(CXX) $(CFLAGS_LINUX64ES2_DEBUG) $(INC_LINUX64ES2_DEBUG) -c helper_xml.cpp -o $(OBJDIR_LINUX64ES2_DEBUG)/helper_xml.o

$(OBJDIR_LINUX64ES2_DEBUG)/highscores.o: highscores.cpp
	$(CXX) $(CFLAGS_LINUX64ES2_DEBUG) $(INC_LINUX64ES2_DEBUG) -c highscores.cpp -o $(OBJDIR_LINUX64ES2_DEBUG)/highscores.o

$(OBJDIR_LINUX64ES2_DEBUG)/hover.o: hover.cpp
	$(CXX) $(CFLAGS_LINUX64ES2_DEBUG) $(INC_LINUX64ES2_DEBUG) -c hover.cpp -o $(OBJDIR_LINUX64ES2_DEBUG)/hover.o

$(OBJDIR_LINUX64ES2_DEBUG)/input_device.o: input_device.cpp
	$(CXX) $(CFLAGS_LINUX64ES2_DEBUG) $(INC_LINUX64ES2_DEBUG) -c input_device.cpp -o $(OBJDIR_LINUX64ES2_DEBUG)/input_device.o

$(OBJDIR_LINUX64ES2_DEBUG)/input_device_manager.o: input_device_manager.cpp
	$(CXX) $(CFLAGS_LINUX64ES2_DEBUG) $(INC_LINUX64ES2_DEBUG) -c input_device_manager.cpp -o $(OBJDIR_LINUX64ES2_DEBUG)/input_device_manager.o

$(OBJDIR_LINUX64ES2_DEBUG)/keycode_strings.o: keycode_strings.cpp
	$(CXX) $(CFLAGS_LINUX64ES2_DEBUG) $(INC_LINUX64ES2_DEBUG) -c keycode_strings.cpp -o $(OBJDIR_LINUX64ES2_DEBUG)/keycode_strings.o

$(OBJDIR_LINUX64ES2_DEBUG)/level.o: level.cpp
	$(CXX) $(CFLAGS_LINUX64ES2_DEBUG) $(INC_LINUX64ES2_DEBUG) -c level.cpp -o $(OBJDIR_LINUX64ES2_DEBUG)/level.o

$(OBJDIR_LINUX64ES2_DEBUG)/level_manager.o: level_manager.cpp
	$(CXX) $(CFLAGS_LINUX64ES2_DEBUG) $(INC_LINUX64ES2_DEBUG) -c level_manager.cpp -o $(OBJDIR_LINUX64ES2_DEBUG)/level_manager.o

$(OBJDIR_LINUX64ES2_DEBUG)/logging.o: logging.cpp
	$(CXX) $(CFLAGS_LINUX64ES2_DEBUG) $(INC_LINUX64ES2_DEBUG) -c logging.cpp -o $(OBJDIR_LINUX64ES2_DEBUG)/logging.o

$(OBJDIR_LINUX64ES2_DEBUG)/main.o: main.cpp
	$(CXX) $(CFLAGS_LINUX64ES2_DEBUG) $(INC_LINUX64ES2_DEBUG) -c main.cpp -o $(OBJDIR_LINUX64ES2_DEBUG)/main.o

$(OBJDIR_LINUX64ES2_DEBUG)/mesh_texture_loader.o: mesh_texture_loader.cpp
	$(CXX) $(CFLAGS_LINUX64ES2_DEBUG) $(INC_LINUX64ES2_DEBUG) -c mesh_texture_loader.cpp -o $(OBJDIR_LINUX64ES2_DEBUG)/mesh_texture_loader.o

$(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_menu_tutorial3.o: gui_dialogs/gui_menu_tutorial3.cpp
	$(CXX) $(CFLAGS_LINUX64ES2_DEBUG) $(INC_LINUX64ES2_DEBUG) -c gui_dialogs/gui_menu_tutorial3.cpp -o $(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_menu_tutorial3.o

$(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_menu_profiles.o: gui_dialogs/gui_menu_profiles.cpp
	$(CXX) $(CFLAGS_LINUX64ES2_DEBUG) $(INC_LINUX64ES2_DEBUG) -c gui_dialogs/gui_menu_profiles.cpp -o $(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_menu_profiles.o

$(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_menu_replaytheatre.o: gui_dialogs/gui_menu_replaytheatre.cpp
	$(CXX) $(CFLAGS_LINUX64ES2_DEBUG) $(INC_LINUX64ES2_DEBUG) -c gui_dialogs/gui_menu_replaytheatre.cpp -o $(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_menu_replaytheatre.o

$(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_menu_rivals.o: gui_dialogs/gui_menu_rivals.cpp
	$(CXX) $(CFLAGS_LINUX64ES2_DEBUG) $(INC_LINUX64ES2_DEBUG) -c gui_dialogs/gui_menu_rivals.cpp -o $(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_menu_rivals.o

$(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_menu_rivals_score.o: gui_dialogs/gui_menu_rivals_score.cpp
	$(CXX) $(CFLAGS_LINUX64ES2_DEBUG) $(INC_LINUX64ES2_DEBUG) -c gui_dialogs/gui_menu_rivals_score.cpp -o $(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_menu_rivals_score.o

$(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_menu_selecthover.o: gui_dialogs/gui_menu_selecthover.cpp
	$(CXX) $(CFLAGS_LINUX64ES2_DEBUG) $(INC_LINUX64ES2_DEBUG) -c gui_dialogs/gui_menu_selecthover.cpp -o $(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_menu_selecthover.o

$(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_menu_timeattack.o: gui_dialogs/gui_menu_timeattack.cpp
	$(CXX) $(CFLAGS_LINUX64ES2_DEBUG) $(INC_LINUX64ES2_DEBUG) -c gui_dialogs/gui_menu_timeattack.cpp -o $(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_menu_timeattack.o

$(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_modellist.o: gui_dialogs/gui_modellist.cpp
	$(CXX) $(CFLAGS_LINUX64ES2_DEBUG) $(INC_LINUX64ES2_DEBUG) -c gui_dialogs/gui_modellist.cpp -o $(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_modellist.o

$(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_nodemanager.o: gui_dialogs/gui_nodemanager.cpp
	$(CXX) $(CFLAGS_LINUX64ES2_DEBUG) $(INC_LINUX64ES2_DEBUG) -c gui_dialogs/gui_nodemanager.cpp -o $(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_nodemanager.o

$(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_touch.o: gui_dialogs/gui_touch.cpp
	$(CXX) $(CFLAGS_LINUX64ES2_DEBUG) $(INC_LINUX64ES2_DEBUG) -c gui_dialogs/gui_touch.cpp -o $(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_touch.o

$(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_user_controls.o: gui_dialogs/gui_user_controls.cpp
	$(CXX) $(CFLAGS_LINUX64ES2_DEBUG) $(INC_LINUX64ES2_DEBUG) -c gui_dialogs/gui_user_controls.cpp -o $(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_user_controls.o

$(OBJDIR_LINUX64ES2_DEBUG)/helper_file.o: helper_file.cpp
	$(CXX) $(CFLAGS_LINUX64ES2_DEBUG) $(INC_LINUX64ES2_DEBUG) -c helper_file.cpp -o $(OBJDIR_LINUX64ES2_DEBUG)/helper_file.o

$(OBJDIR_LINUX64ES2_DEBUG)/helper_irr.o: helper_irr.cpp
	$(CXX) $(CFLAGS_LINUX64ES2_DEBUG) $(INC_LINUX64ES2_DEBUG) -c helper_irr.cpp -o $(OBJDIR_LINUX64ES2_DEBUG)/helper_irr.o

$(OBJDIR_LINUX64ES2_DEBUG)/streaming.o: streaming.cpp
	$(CXX) $(CFLAGS_LINUX64ES2_DEBUG) $(INC_LINUX64ES2_DEBUG) -c streaming.cpp -o $(OBJDIR_LINUX64ES2_DEBUG)/streaming.o

$(OBJDIR_LINUX64ES2_DEBUG)/random.o: random.cpp
	$(CXX) $(CFLAGS_LINUX64ES2_DEBUG) $(INC_LINUX64ES2_DEBUG) -c random.cpp -o $(OBJDIR_LINUX64ES2_DEBUG)/random.o

$(OBJDIR_LINUX64ES2_DEBUG)/recorder.o: recorder.cpp
	$(CXX) $(CFLAGS_LINUX64ES2_DEBUG) $(INC_LINUX64ES2_DEBUG) -c recorder.cpp -o $(OBJDIR_LINUX64ES2_DEBUG)/recorder.o

$(OBJDIR_LINUX64ES2_DEBUG)/rivalsmode.o: rivalsmode.cpp
	$(CXX) $(CFLAGS_LINUX64ES2_DEBUG) $(INC_LINUX64ES2_DEBUG) -c rivalsmode.cpp -o $(OBJDIR_LINUX64ES2_DEBUG)/rivalsmode.o

$(OBJDIR_LINUX64ES2_DEBUG)/sound_openal.o: sound_openal.cpp
	$(CXX) $(CFLAGS_LINUX64ES2_DEBUG) $(INC_LINUX64ES2_DEBUG) -c sound_openal.cpp -o $(OBJDIR_LINUX64ES2_DEBUG)/sound_openal.o

$(OBJDIR_LINUX64ES2_DEBUG)/sound_settings.o: sound_settings.cpp
	$(CXX) $(CFLAGS_LINUX64ES2_DEBUG) $(INC_LINUX64ES2_DEBUG) -c sound_settings.cpp -o $(OBJDIR_LINUX64ES2_DEBUG)/sound_settings.o

$(OBJDIR_LINUX64ES2_DEBUG)/start_browser.o: start_browser.cpp
	$(CXX) $(CFLAGS_LINUX64ES2_DEBUG) $(INC_LINUX64ES2_DEBUG) -c start_browser.cpp -o $(OBJDIR_LINUX64ES2_DEBUG)/start_browser.o

$(OBJDIR_LINUX64ES2_DEBUG)/string_table.o: string_table.cpp
	$(CXX) $(CFLAGS_LINUX64ES2_DEBUG) $(INC_LINUX64ES2_DEBUG) -c string_table.cpp -o $(OBJDIR_LINUX64ES2_DEBUG)/string_table.o

$(OBJDIR_LINUX64ES2_DEBUG)/timer.o: timer.cpp
	$(CXX) $(CFLAGS_LINUX64ES2_DEBUG) $(INC_LINUX64ES2_DEBUG) -c timer.cpp -o $(OBJDIR_LINUX64ES2_DEBUG)/timer.o

$(OBJDIR_LINUX64ES2_DEBUG)/tinyxml/tinystr.o: tinyxml/tinystr.cpp
	$(CXX) $(CFLAGS_LINUX64ES2_DEBUG) $(INC_LINUX64ES2_DEBUG) -c tinyxml/tinystr.cpp -o $(OBJDIR_LINUX64ES2_DEBUG)/tinyxml/tinystr.o

$(OBJDIR_LINUX64ES2_DEBUG)/tinyxml/tinyxml.o: tinyxml/tinyxml.cpp
	$(CXX) $(CFLAGS_LINUX64ES2_DEBUG) $(INC_LINUX64ES2_DEBUG) -c tinyxml/tinyxml.cpp -o $(OBJDIR_LINUX64ES2_DEBUG)/tinyxml/tinyxml.o

$(OBJDIR_LINUX64ES2_DEBUG)/tinyxml/tinyxmlerror.o: tinyxml/tinyxmlerror.cpp
	$(CXX) $(CFLAGS_LINUX64ES2_DEBUG) $(INC_LINUX64ES2_DEBUG) -c tinyxml/tinyxmlerror.cpp -o $(OBJDIR_LINUX64ES2_DEBUG)/tinyxml/tinyxmlerror.o

$(OBJDIR_LINUX64ES2_DEBUG)/tinyxml/tinyxmlparser.o: tinyxml/tinyxmlparser.cpp
	$(CXX) $(CFLAGS_LINUX64ES2_DEBUG) $(INC_LINUX64ES2_DEBUG) -c tinyxml/tinyxmlparser.cpp -o $(OBJDIR_LINUX64ES2_DEBUG)/tinyxml/tinyxmlparser.o

$(OBJDIR_LINUX64ES2_DEBUG)/track_marker.o: track_marker.cpp
	$(CXX) $(CFLAGS_LINUX64ES2_DEBUG) $(INC_LINUX64ES2_DEBUG) -c track_marker.cpp -o $(OBJDIR_LINUX64ES2_DEBUG)/track_marker.o

$(OBJDIR_LINUX64ES2_DEBUG)/mobile/advert_admob.o: mobile/advert_admob.cpp
	$(CXX) $(CFLAGS_LINUX64ES2_DEBUG) $(INC_LINUX64ES2_DEBUG) -c mobile/advert_admob.cpp -o $(OBJDIR_LINUX64ES2_DEBUG)/mobile/advert_admob.o

$(OBJDIR_LINUX64ES2_DEBUG)/mobile/android_tools.o: mobile/android_tools.cpp
	$(CXX) $(CFLAGS_LINUX64ES2_DEBUG) $(INC_LINUX64ES2_DEBUG) -c mobile/android_tools.cpp -o $(OBJDIR_LINUX64ES2_DEBUG)/mobile/android_tools.o

$(OBJDIR_LINUX64ES2_DEBUG)/mobile/app_restrictions.o: mobile/app_restrictions.cpp
	$(CXX) $(CFLAGS_LINUX64ES2_DEBUG) $(INC_LINUX64ES2_DEBUG) -c mobile/app_restrictions.cpp -o $(OBJDIR_LINUX64ES2_DEBUG)/mobile/app_restrictions.o

$(OBJDIR_LINUX64ES2_DEBUG)/mobile/billing_googleplay.o: mobile/billing_googleplay.cpp
	$(CXX) $(CFLAGS_LINUX64ES2_DEBUG) $(INC_LINUX64ES2_DEBUG) -c mobile/billing_googleplay.cpp -o $(OBJDIR_LINUX64ES2_DEBUG)/mobile/billing_googleplay.o

$(OBJDIR_LINUX64ES2_DEBUG)/music_manager.o: music_manager.cpp
	$(CXX) $(CFLAGS_LINUX64ES2_DEBUG) $(INC_LINUX64ES2_DEBUG) -c music_manager.cpp -o $(OBJDIR_LINUX64ES2_DEBUG)/music_manager.o

$(OBJDIR_LINUX64ES2_DEBUG)/nn.o: nn.cpp
	$(CXX) $(CFLAGS_LINUX64ES2_DEBUG) $(INC_LINUX64ES2_DEBUG) -c nn.cpp -o $(OBJDIR_LINUX64ES2_DEBUG)/nn.o

$(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_menu_pause.o: gui_dialogs/gui_menu_pause.cpp
	$(CXX) $(CFLAGS_LINUX64ES2_DEBUG) $(INC_LINUX64ES2_DEBUG) -c gui_dialogs/gui_menu_pause.cpp -o $(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_menu_pause.o

$(OBJDIR_LINUX64ES2_DEBUG)/node_manager.o: node_manager.cpp
	$(CXX) $(CFLAGS_LINUX64ES2_DEBUG) $(INC_LINUX64ES2_DEBUG) -c node_manager.cpp -o $(OBJDIR_LINUX64ES2_DEBUG)/node_manager.o

$(OBJDIR_LINUX64ES2_DEBUG)/ogg_stream.o: ogg_stream.cpp
	$(CXX) $(CFLAGS_LINUX64ES2_DEBUG) $(INC_LINUX64ES2_DEBUG) -c ogg_stream.cpp -o $(OBJDIR_LINUX64ES2_DEBUG)/ogg_stream.o

$(OBJDIR_LINUX64ES2_DEBUG)/ogles2_materials.o: ogles2_materials.cpp
	$(CXX) $(CFLAGS_LINUX64ES2_DEBUG) $(INC_LINUX64ES2_DEBUG) -c ogles2_materials.cpp -o $(OBJDIR_LINUX64ES2_DEBUG)/ogles2_materials.o

$(OBJDIR_LINUX64ES2_DEBUG)/ov_callbacks.o: ov_callbacks.cpp
	$(CXX) $(CFLAGS_LINUX64ES2_DEBUG) $(INC_LINUX64ES2_DEBUG) -c ov_callbacks.cpp -o $(OBJDIR_LINUX64ES2_DEBUG)/ov_callbacks.o

$(OBJDIR_LINUX64ES2_DEBUG)/physics.o: physics.cpp
	$(CXX) $(CFLAGS_LINUX64ES2_DEBUG) $(INC_LINUX64ES2_DEBUG) -c physics.cpp -o $(OBJDIR_LINUX64ES2_DEBUG)/physics.o

$(OBJDIR_LINUX64ES2_DEBUG)/player.o: player.cpp
	$(CXX) $(CFLAGS_LINUX64ES2_DEBUG) $(INC_LINUX64ES2_DEBUG) -c player.cpp -o $(OBJDIR_LINUX64ES2_DEBUG)/player.o

$(OBJDIR_LINUX64ES2_DEBUG)/profiles.o: profiles.cpp
	$(CXX) $(CFLAGS_LINUX64ES2_DEBUG) $(INC_LINUX64ES2_DEBUG) -c profiles.cpp -o $(OBJDIR_LINUX64ES2_DEBUG)/profiles.o

$(OBJDIR_LINUX64ES2_DEBUG)/game.o: game.cpp
	$(CXX) $(CFLAGS_LINUX64ES2_DEBUG) $(INC_LINUX64ES2_DEBUG) -c game.cpp -o $(OBJDIR_LINUX64ES2_DEBUG)/game.o

$(OBJDIR_LINUX64ES2_DEBUG)/device_keyboard.o: device_keyboard.cpp
	$(CXX) $(CFLAGS_LINUX64ES2_DEBUG) $(INC_LINUX64ES2_DEBUG) -c device_keyboard.cpp -o $(OBJDIR_LINUX64ES2_DEBUG)/device_keyboard.o

$(OBJDIR_LINUX64ES2_DEBUG)/device_mouse.o: device_mouse.cpp
	$(CXX) $(CFLAGS_LINUX64ES2_DEBUG) $(INC_LINUX64ES2_DEBUG) -c device_mouse.cpp -o $(OBJDIR_LINUX64ES2_DEBUG)/device_mouse.o

$(OBJDIR_LINUX64ES2_DEBUG)/device_touch.o: device_touch.cpp
	$(CXX) $(CFLAGS_LINUX64ES2_DEBUG) $(INC_LINUX64ES2_DEBUG) -c device_touch.cpp -o $(OBJDIR_LINUX64ES2_DEBUG)/device_touch.o

$(OBJDIR_LINUX64ES2_DEBUG)/device_touch_settings.o: device_touch_settings.cpp
	$(CXX) $(CFLAGS_LINUX64ES2_DEBUG) $(INC_LINUX64ES2_DEBUG) -c device_touch_settings.cpp -o $(OBJDIR_LINUX64ES2_DEBUG)/device_touch_settings.o

$(OBJDIR_LINUX64ES2_DEBUG)/editor.o: editor.cpp
	$(CXX) $(CFLAGS_LINUX64ES2_DEBUG) $(INC_LINUX64ES2_DEBUG) -c editor.cpp -o $(OBJDIR_LINUX64ES2_DEBUG)/editor.o

$(OBJDIR_LINUX64ES2_DEBUG)/event_receiver_base.o: event_receiver_base.cpp
	$(CXX) $(CFLAGS_LINUX64ES2_DEBUG) $(INC_LINUX64ES2_DEBUG) -c event_receiver_base.cpp -o $(OBJDIR_LINUX64ES2_DEBUG)/event_receiver_base.o

$(OBJDIR_LINUX64ES2_DEBUG)/font_manager.o: font_manager.cpp
	$(CXX) $(CFLAGS_LINUX64ES2_DEBUG) $(INC_LINUX64ES2_DEBUG) -c font_manager.cpp -o $(OBJDIR_LINUX64ES2_DEBUG)/font_manager.o

$(OBJDIR_LINUX64ES2_DEBUG)/grid_triangle_selector.o: grid_triangle_selector.cpp
	$(CXX) $(CFLAGS_LINUX64ES2_DEBUG) $(INC_LINUX64ES2_DEBUG) -c grid_triangle_selector.cpp -o $(OBJDIR_LINUX64ES2_DEBUG)/grid_triangle_selector.o

$(OBJDIR_LINUX64ES2_DEBUG)/gui.o: gui.cpp
	$(CXX) $(CFLAGS_LINUX64ES2_DEBUG) $(INC_LINUX64ES2_DEBUG) -c gui.cpp -o $(OBJDIR_LINUX64ES2_DEBUG)/gui.o

$(OBJDIR_LINUX64ES2_DEBUG)/gui_dialog.o: gui_dialog.cpp
	$(CXX) $(CFLAGS_LINUX64ES2_DEBUG) $(INC_LINUX64ES2_DEBUG) -c gui_dialog.cpp -o $(OBJDIR_LINUX64ES2_DEBUG)/gui_dialog.o

$(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_ai.o: gui_dialogs/gui_ai.cpp
	$(CXX) $(CFLAGS_LINUX64ES2_DEBUG) $(INC_LINUX64ES2_DEBUG) -c gui_dialogs/gui_ai.cpp -o $(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_ai.o

$(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_controller_display.o: gui_dialogs/gui_controller_display.cpp
	$(CXX) $(CFLAGS_LINUX64ES2_DEBUG) $(INC_LINUX64ES2_DEBUG) -c gui_dialogs/gui_controller_display.cpp -o $(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_controller_display.o

$(OBJDIR_LINUX64ES2_DEBUG)/CGUITextSlider.o: CGUITextSlider.cpp
	$(CXX) $(CFLAGS_LINUX64ES2_DEBUG) $(INC_LINUX64ES2_DEBUG) -c CGUITextSlider.cpp -o $(OBJDIR_LINUX64ES2_DEBUG)/CGUITextSlider.o

$(OBJDIR_LINUX64ES2_DEBUG)/CLMOMeshFileLoader.o: CLMOMeshFileLoader.cpp
	$(CXX) $(CFLAGS_LINUX64ES2_DEBUG) $(INC_LINUX64ES2_DEBUG) -c CLMOMeshFileLoader.cpp -o $(OBJDIR_LINUX64ES2_DEBUG)/CLMOMeshFileLoader.o

$(OBJDIR_LINUX64ES2_DEBUG)/ai_track.o: ai_track.cpp
	$(CXX) $(CFLAGS_LINUX64ES2_DEBUG) $(INC_LINUX64ES2_DEBUG) -c ai_track.cpp -o $(OBJDIR_LINUX64ES2_DEBUG)/ai_track.o

$(OBJDIR_LINUX64ES2_DEBUG)/app_tester.o: app_tester.cpp
	$(CXX) $(CFLAGS_LINUX64ES2_DEBUG) $(INC_LINUX64ES2_DEBUG) -c app_tester.cpp -o $(OBJDIR_LINUX64ES2_DEBUG)/app_tester.o

$(OBJDIR_LINUX64ES2_DEBUG)/camera.o: camera.cpp
	$(CXX) $(CFLAGS_LINUX64ES2_DEBUG) $(INC_LINUX64ES2_DEBUG) -c camera.cpp -o $(OBJDIR_LINUX64ES2_DEBUG)/camera.o

$(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_developer_settings.o: gui_dialogs/gui_developer_settings.cpp
	$(CXX) $(CFLAGS_LINUX64ES2_DEBUG) $(INC_LINUX64ES2_DEBUG) -c gui_dialogs/gui_developer_settings.cpp -o $(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_developer_settings.o

$(OBJDIR_LINUX64ES2_DEBUG)/championship.o: championship.cpp
	$(CXX) $(CFLAGS_LINUX64ES2_DEBUG) $(INC_LINUX64ES2_DEBUG) -c championship.cpp -o $(OBJDIR_LINUX64ES2_DEBUG)/championship.o

$(OBJDIR_LINUX64ES2_DEBUG)/config.o: config.cpp
	$(CXX) $(CFLAGS_LINUX64ES2_DEBUG) $(INC_LINUX64ES2_DEBUG) -c config.cpp -o $(OBJDIR_LINUX64ES2_DEBUG)/config.o

$(OBJDIR_LINUX64ES2_DEBUG)/controller.o: controller.cpp
	$(CXX) $(CFLAGS_LINUX64ES2_DEBUG) $(INC_LINUX64ES2_DEBUG) -c controller.cpp -o $(OBJDIR_LINUX64ES2_DEBUG)/controller.o

$(OBJDIR_LINUX64ES2_DEBUG)/convert_utf.o: convert_utf.c
	$(CC) $(CFLAGS_LINUX64ES2_DEBUG) $(INC_LINUX64ES2_DEBUG) -c convert_utf.c -o $(OBJDIR_LINUX64ES2_DEBUG)/convert_utf.o

$(OBJDIR_LINUX64ES2_DEBUG)/device_joystick.o: device_joystick.cpp
	$(CXX) $(CFLAGS_LINUX64ES2_DEBUG) $(INC_LINUX64ES2_DEBUG) -c device_joystick.cpp -o $(OBJDIR_LINUX64ES2_DEBUG)/device_joystick.o

$(OBJDIR_LINUX64ES2_DEBUG)/device_joystick_settings.o: device_joystick_settings.cpp
	$(CXX) $(CFLAGS_LINUX64ES2_DEBUG) $(INC_LINUX64ES2_DEBUG) -c device_joystick_settings.cpp -o $(OBJDIR_LINUX64ES2_DEBUG)/device_joystick_settings.o

$(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_menu_keyboard.o: gui_dialogs/gui_menu_keyboard.cpp
	$(CXX) $(CFLAGS_LINUX64ES2_DEBUG) $(INC_LINUX64ES2_DEBUG) -c gui_dialogs/gui_menu_keyboard.cpp -o $(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_menu_keyboard.o

$(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_menu_gameend.o: gui_dialogs/gui_menu_gameend.cpp
	$(CXX) $(CFLAGS_LINUX64ES2_DEBUG) $(INC_LINUX64ES2_DEBUG) -c gui_dialogs/gui_menu_gameend.cpp -o $(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_menu_gameend.o

$(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_menu_gameend_champ.o: gui_dialogs/gui_menu_gameend_champ.cpp
	$(CXX) $(CFLAGS_LINUX64ES2_DEBUG) $(INC_LINUX64ES2_DEBUG) -c gui_dialogs/gui_menu_gameend_champ.cpp -o $(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_menu_gameend_champ.o

$(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_menu_gameend_rivals.o: gui_dialogs/gui_menu_gameend_rivals.cpp
	$(CXX) $(CFLAGS_LINUX64ES2_DEBUG) $(INC_LINUX64ES2_DEBUG) -c gui_dialogs/gui_menu_gameend_rivals.cpp -o $(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_menu_gameend_rivals.o

$(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_menu_graphics.o: gui_dialogs/gui_menu_graphics.cpp
	$(CXX) $(CFLAGS_LINUX64ES2_DEBUG) $(INC_LINUX64ES2_DEBUG) -c gui_dialogs/gui_menu_graphics.cpp -o $(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_menu_graphics.o

$(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_menu_highscores.o: gui_dialogs/gui_menu_highscores.cpp
	$(CXX) $(CFLAGS_LINUX64ES2_DEBUG) $(INC_LINUX64ES2_DEBUG) -c gui_dialogs/gui_menu_highscores.cpp -o $(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_menu_highscores.o

$(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_menu_hover_unlocked.o: gui_dialogs/gui_menu_hover_unlocked.cpp
	$(CXX) $(CFLAGS_LINUX64ES2_DEBUG) $(INC_LINUX64ES2_DEBUG) -c gui_dialogs/gui_menu_hover_unlocked.cpp -o $(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_menu_hover_unlocked.o

$(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_menu_credits.o: gui_dialogs/gui_menu_credits.cpp
	$(CXX) $(CFLAGS_LINUX64ES2_DEBUG) $(INC_LINUX64ES2_DEBUG) -c gui_dialogs/gui_menu_credits.cpp -o $(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_menu_credits.o

$(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_menu_licenses.o: gui_dialogs/gui_menu_licenses.cpp
	$(CXX) $(CFLAGS_LINUX64ES2_DEBUG) $(INC_LINUX64ES2_DEBUG) -c gui_dialogs/gui_menu_licenses.cpp -o $(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_menu_licenses.o

$(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_menu_loadingscreen.o: gui_dialogs/gui_menu_loadingscreen.cpp
	$(CXX) $(CFLAGS_LINUX64ES2_DEBUG) $(INC_LINUX64ES2_DEBUG) -c gui_dialogs/gui_menu_loadingscreen.cpp -o $(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_menu_loadingscreen.o

$(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_menu_main.o: gui_dialogs/gui_menu_main.cpp
	$(CXX) $(CFLAGS_LINUX64ES2_DEBUG) $(INC_LINUX64ES2_DEBUG) -c gui_dialogs/gui_menu_main.cpp -o $(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_menu_main.o

$(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_menu_nagscreen.o: gui_dialogs/gui_menu_nagscreen.cpp
	$(CXX) $(CFLAGS_LINUX64ES2_DEBUG) $(INC_LINUX64ES2_DEBUG) -c gui_dialogs/gui_menu_nagscreen.cpp -o $(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_menu_nagscreen.o

$(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_menu_newprofile.o: gui_dialogs/gui_menu_newprofile.cpp
	$(CXX) $(CFLAGS_LINUX64ES2_DEBUG) $(INC_LINUX64ES2_DEBUG) -c gui_dialogs/gui_menu_newprofile.cpp -o $(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_menu_newprofile.o

$(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_menu_options.o: gui_dialogs/gui_menu_options.cpp
	$(CXX) $(CFLAGS_LINUX64ES2_DEBUG) $(INC_LINUX64ES2_DEBUG) -c gui_dialogs/gui_menu_options.cpp -o $(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_menu_options.o

$(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_levelmanager.o: gui_dialogs/gui_levelmanager.cpp
	$(CXX) $(CFLAGS_LINUX64ES2_DEBUG) $(INC_LINUX64ES2_DEBUG) -c gui_dialogs/gui_levelmanager.cpp -o $(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_levelmanager.o

$(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_dlg_okcancel.o: gui_dialogs/gui_dlg_okcancel.cpp
	$(CXX) $(CFLAGS_LINUX64ES2_DEBUG) $(INC_LINUX64ES2_DEBUG) -c gui_dialogs/gui_dlg_okcancel.cpp -o $(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_dlg_okcancel.o

$(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_editor.o: gui_dialogs/gui_editor.cpp
	$(CXX) $(CFLAGS_LINUX64ES2_DEBUG) $(INC_LINUX64ES2_DEBUG) -c gui_dialogs/gui_editor.cpp -o $(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_editor.o

$(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_game.o: gui_dialogs/gui_game.cpp
	$(CXX) $(CFLAGS_LINUX64ES2_DEBUG) $(INC_LINUX64ES2_DEBUG) -c gui_dialogs/gui_game.cpp -o $(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_game.o

$(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_helper.o: gui_dialogs/gui_helper.cpp
	$(CXX) $(CFLAGS_LINUX64ES2_DEBUG) $(INC_LINUX64ES2_DEBUG) -c gui_dialogs/gui_helper.cpp -o $(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_helper.o

$(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_hud.o: gui_dialogs/gui_hud.cpp
	$(CXX) $(CFLAGS_LINUX64ES2_DEBUG) $(INC_LINUX64ES2_DEBUG) -c gui_dialogs/gui_hud.cpp -o $(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_hud.o

$(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_intro.o: gui_dialogs/gui_intro.cpp
	$(CXX) $(CFLAGS_LINUX64ES2_DEBUG) $(INC_LINUX64ES2_DEBUG) -c gui_dialogs/gui_intro.cpp -o $(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_intro.o

$(OBJDIR_LINUX64ES2_DEBUG)/CGUITTFont.o: CGUITTFont.cpp
	$(CXX) $(CFLAGS_LINUX64ES2_DEBUG) $(INC_LINUX64ES2_DEBUG) -c CGUITTFont.cpp -o $(OBJDIR_LINUX64ES2_DEBUG)/CGUITTFont.o

$(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_menu_analog.o: gui_dialogs/gui_menu_analog.cpp
	$(CXX) $(CFLAGS_LINUX64ES2_DEBUG) $(INC_LINUX64ES2_DEBUG) -c gui_dialogs/gui_menu_analog.cpp -o $(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_menu_analog.o

$(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_menu_arcade.o: gui_dialogs/gui_menu_arcade.cpp
	$(CXX) $(CFLAGS_LINUX64ES2_DEBUG) $(INC_LINUX64ES2_DEBUG) -c gui_dialogs/gui_menu_arcade.cpp -o $(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_menu_arcade.o

$(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_menu_championship.o: gui_dialogs/gui_menu_championship.cpp
	$(CXX) $(CFLAGS_LINUX64ES2_DEBUG) $(INC_LINUX64ES2_DEBUG) -c gui_dialogs/gui_menu_championship.cpp -o $(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_menu_championship.o

$(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_menu_championship_progress.o: gui_dialogs/gui_menu_championship_progress.cpp
	$(CXX) $(CFLAGS_LINUX64ES2_DEBUG) $(INC_LINUX64ES2_DEBUG) -c gui_dialogs/gui_menu_championship_progress.cpp -o $(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_menu_championship_progress.o

$(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_menu_championship_winner.o: gui_dialogs/gui_menu_championship_winner.cpp
	$(CXX) $(CFLAGS_LINUX64ES2_DEBUG) $(INC_LINUX64ES2_DEBUG) -c gui_dialogs/gui_menu_championship_winner.cpp -o $(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_menu_championship_winner.o

$(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_menu_controls.o: gui_dialogs/gui_menu_controls.cpp
	$(CXX) $(CFLAGS_LINUX64ES2_DEBUG) $(INC_LINUX64ES2_DEBUG) -c gui_dialogs/gui_menu_controls.cpp -o $(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs/gui_menu_controls.o

clean_linux64es2_debug: 
	rm -f $(OBJ_LINUX64ES2_DEBUG) $(OUT_LINUX64ES2_DEBUG)
	rm -rf ..
	rm -rf $(OBJDIR_LINUX64ES2_DEBUG)
	rm -rf $(OBJDIR_LINUX64ES2_DEBUG)/gui_dialogs
	rm -rf $(OBJDIR_LINUX64ES2_DEBUG)/tinyxml
	rm -rf $(OBJDIR_LINUX64ES2_DEBUG)/mobile

virtual_all: mingw32_debug linux32_release

.PHONY: before_linux64_debug after_linux64_debug clean_linux64_debug before_linux64_release after_linux64_release clean_linux64_release before_linux32_debug after_linux32_debug clean_linux32_debug before_linux32_release after_linux32_release clean_linux32_release before_linux64es2_debug after_linux64es2_debug clean_linux64es2_debug

