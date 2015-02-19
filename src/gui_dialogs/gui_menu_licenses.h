#ifndef GUI_MENU_LICENSES_H
#define GUI_MENU_LICENSES_H

#include "../gui_dialog.h"

class GuiMenuLicenses : public GuiDialog
{
public:
    GuiMenuLicenses();
    ~GuiMenuLicenses();

    virtual bool Load(const char* filename_, bool reloadLast_=false);

protected:
    void RemoveFunctors();
    bool OnButtonBack(const irr::SEvent &event_);
};

#endif // GUI_MENU_LICENSES_H