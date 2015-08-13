// -*- C++ -*-
//
// generated by wxGlade 0.7.1RC1 on Wed Aug 12 07:22:45 2015
//
// Example for compiling a single file project under Linux using g++:
//  g++ MyApp.cpp $(wx-config --libs) $(wx-config --cxxflags) -o MyApp
//
// Example for compiling a multi file project under Linux using g++:
//  g++ main.cpp $(wx-config --libs) $(wx-config --cxxflags) -o MyApp Dialog1.cpp Frame1.cpp
//

#include "CustomWidget.h"

// begin wxGlade: ::extracode
// end wxGlade



MyFrame::MyFrame(wxWindow* parent, int id, const wxString& title, const wxPoint& pos, const wxSize& size, long style):
    wxFrame(parent, id, title, pos, size, style)
{
    // begin wxGlade: MyFrame::MyFrame
    window_1 = new CustomWidget(this, wxID_ANY);

    set_properties();
    do_layout();
    // end wxGlade
}


void MyFrame::set_properties()
{
    // begin wxGlade: MyFrame::set_properties
    SetTitle(_("frame_1"));
    // end wxGlade
}


void MyFrame::do_layout()
{
    // begin wxGlade: MyFrame::do_layout
    wxBoxSizer* sizer_1 = new wxBoxSizer(wxVERTICAL);
    sizer_1->Add(window_1, 1, wxALL|wxEXPAND, 5);
    SetSizer(sizer_1);
    sizer_1->Fit(this);
    Layout();
    // end wxGlade
}

