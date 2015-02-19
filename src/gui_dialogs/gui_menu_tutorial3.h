#ifndef GUI_MENU_TUTORIAL3_H
#define GUI_MENU_TUTORIAL3_H

// (tutorial 1 and 2 are just texts displayed while loading)

#include "../gui_dialog.h"

class GuiMenuTutorial3 : public GuiDialog
{
public:
    GuiMenuTutorial3();
    ~GuiMenuTutorial3();

    virtual bool Load(const char* filename_, bool reloadLast_=false);

protected:
    void RemoveFunctors();
    bool OnButtonContinue(const irr::SEvent &event_);
};

#endif // GUI_MENU_TUTORIAL3_H
