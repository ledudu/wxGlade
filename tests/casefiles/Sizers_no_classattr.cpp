// -*- C++ -*-
//
// generated by wxGlade "faked test version"
//
// Example for compiling a single file project under Linux using g++:
//  g++ MyApp.cpp $(wx-config --libs) $(wx-config --cxxflags) -o MyApp
//
// Example for compiling a multi file project under Linux using g++:
//  g++ main.cpp $(wx-config --libs) $(wx-config --cxxflags) -o MyApp Dialog1.cpp Frame1.cpp
//

#include "Sizers_no_classattr.h"

// begin wxGlade: ::extracode
// end wxGlade



MyDialog::MyDialog(wxWindow* parent, int id, const wxString& title, const wxPoint& pos, const wxSize& size, long style):
    wxDialog(parent, id, title, pos, size, wxDEFAULT_DIALOG_STYLE)
{
    // begin wxGlade: MyDialog::MyDialog
    sizer_3_staticbox = new wxStaticBox(this, wxID_ANY, _("Assigned Permissions:"));
    sizer_2_staticbox = new wxStaticBox(this, wxID_ANY, _("Unassigned Permissions:"));
    const wxString list_box_1_choices[] = {};
    list_box_1 = new wxListBox(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0, list_box_1_choices, wxLB_SINGLE);
    button_4 = new wxButton(this, wxID_ADD, wxEmptyString);
    button_5 = new wxButton(this, wxID_REMOVE, wxEmptyString);
    const wxString list_box_2_choices[] = {};
    list_box_2 = new wxListBox(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0, list_box_2_choices, wxLB_SINGLE);
    static_line_1 = new wxStaticLine(this, wxID_ANY);
    button_2 = new wxButton(this, wxID_OK, wxEmptyString);
    button_1 = new wxButton(this, wxID_CANCEL, wxEmptyString);

    set_properties();
    do_layout();
    // end wxGlade
}


void MyDialog::set_properties()
{
    // begin wxGlade: MyDialog::set_properties
    SetTitle(_("dialog_1"));
    // end wxGlade
}


void MyDialog::do_layout()
{
    // begin wxGlade: MyDialog::do_layout
    wxFlexGridSizer* grid_sizer_1 = new wxFlexGridSizer(3, 1, 0, 0);
    wxBoxSizer* sizer_1 = new wxBoxSizer(wxHORIZONTAL);
    wxFlexGridSizer* grid_sizer_2 = new wxFlexGridSizer(1, 3, 0, 0);
    sizer_3_staticbox->Lower();
    wxStaticBoxSizer* sizer_3 = new wxStaticBoxSizer(sizer_3_staticbox, wxHORIZONTAL);
    wxFlexGridSizer* sizer_4 = new wxFlexGridSizer(4, 1, 0, 0);
    sizer_2_staticbox->Lower();
    wxStaticBoxSizer* sizer_2 = new wxStaticBoxSizer(sizer_2_staticbox, wxHORIZONTAL);
    sizer_2->Add(list_box_1, 1, wxALL|wxEXPAND, 5);
    grid_sizer_2->Add(sizer_2, 1, wxEXPAND, 0);
    sizer_4->Add(20, 20, 0, wxEXPAND, 0);
    sizer_4->Add(button_4, 0, wxALL, 5);
    sizer_4->Add(button_5, 0, wxALL, 5);
    sizer_4->Add(20, 20, 0, wxEXPAND, 0);
    sizer_4->AddGrowableRow(0);
    sizer_4->AddGrowableRow(3);
    grid_sizer_2->Add(sizer_4, 1, wxALIGN_CENTER|wxEXPAND, 0);
    sizer_3->Add(list_box_2, 1, wxALL|wxEXPAND, 5);
    grid_sizer_2->Add(sizer_3, 1, wxEXPAND, 0);
    grid_sizer_2->AddGrowableRow(0);
    grid_sizer_2->AddGrowableCol(0);
    grid_sizer_2->AddGrowableCol(2);
    grid_sizer_1->Add(grid_sizer_2, 1, wxEXPAND, 0);
    grid_sizer_1->Add(static_line_1, 0, wxALL|wxEXPAND, 5);
    sizer_1->Add(button_2, 0, wxALL, 5);
    sizer_1->Add(button_1, 0, wxALL, 5);
    grid_sizer_1->Add(sizer_1, 1, wxALIGN_RIGHT|wxEXPAND, 0);
    SetSizer(grid_sizer_1);
    grid_sizer_1->Fit(this);
    grid_sizer_1->AddGrowableRow(0);
    grid_sizer_1->AddGrowableCol(0);
    Layout();
    // end wxGlade
}


class MyApp: public wxApp {
public:
    bool OnInit();
protected:
    wxLocale m_locale;  // locale we'll be using
};

IMPLEMENT_APP(MyApp)

bool MyApp::OnInit()
{
    m_locale.Init();
#ifdef APP_LOCALE_DIR
    m_locale.AddCatalogLookupPathPrefix(wxT(APP_LOCALE_DIR));
#endif
    m_locale.AddCatalog(wxT(APP_CATALOG));

    wxInitAllImageHandlers();
    MyDialog* dialog_1 = new MyDialog(NULL, wxID_ANY, wxEmptyString);
    SetTopWindow(dialog_1);
    dialog_1->Show();
    return true;
}
