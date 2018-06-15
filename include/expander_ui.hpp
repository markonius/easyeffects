#ifndef EXPANDER_UI_HPP
#define EXPANDER_UI_HPP

#include <gtkmm/comboboxtext.h>
#include <gtkmm/grid.h>
#include <gtkmm/togglebutton.h>
#include "plugin_ui_base.hpp"

class ExpanderUi : public Gtk::Grid, public PluginUiBase {
   public:
    ExpanderUi(BaseObjectType* cobject,
               const Glib::RefPtr<Gtk::Builder>& builder,
               const std::string& settings_name);
    virtual ~ExpanderUi();

    void reset();

   private:
    Gtk::ComboBoxText* expander_mode;
    // Glib::RefPtr<Gtk::Adjustment> input_gain, limit, lookahead, release,
    //     oversampling;
    // Gtk::ToggleButton *asc, *autovolume_enable;
    // Glib::RefPtr<Gtk::Adjustment> asc_level, autovolume_target,
    //     autovolume_window;
    // Glib::RefPtr<Gtk::Adjustment> autovolume_threshold, autovolume_tolerance;
    // Gtk::Grid *autovolume_controls, *limiter_controls;
    // Gtk::LevelBar* attenuation;
    // Gtk::Label* attenuation_label;

    std::vector<sigc::connection> connections;
};

#endif
