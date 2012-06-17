#pragma once

#include <string>
#include <gtkmm.h>
#include "plugin.hpp"

class Photo;
class Effect;

/// @class SamplePlugin
/// @brief Responsible for showing the plugin functionality.
class SamplePlugin : public Plugin {
  public:
    SamplePlugin();
    virtual ~SamplePlugin(){};
    Gtk::Widget* getWidget();
    std::string getName();
    Effect* getEffect();
  private:
    Gtk::Box *box;
    Gtk::CheckButton *checkbox;
    Gtk::ToolButton *button;
};
