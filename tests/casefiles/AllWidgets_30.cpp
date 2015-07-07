// -*- C++ -*-
//
// generated by wxGlade 049b60e0d0aa+ on Tue Jun 23 19:04:26 2015
//
// Example for compiling a single file project under Linux using g++:
//  g++ MyApp.cpp $(wx-config --libs) $(wx-config --cxxflags) -o MyApp
//
// Example for compiling a multi file project under Linux using g++:
//  g++ main.cpp $(wx-config --libs) $(wx-config --cxxflags) -o MyApp Dialog1.cpp Frame1.cpp
//

#include "AllWidgets_30.h"

// begin wxGlade: ::extracode
// end wxGlade



All_Widgets_Frame::All_Widgets_Frame(wxWindow* parent, int id, const wxString& title, const wxPoint& pos, const wxSize& size, long style):
    wxFrame(parent, id, title, pos, size, wxDEFAULT_FRAME_STYLE)
{
    // begin wxGlade: All_Widgets_Frame::All_Widgets_Frame
    notebook_1 = new wxNotebook(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxNB_BOTTOM);
    notebook_1_wxTreeCtrl = new wxPanel(notebook_1, wxID_ANY);
    notebook_1_wxToggleButton = new wxPanel(notebook_1, wxID_ANY);
    notebook_1_wxTextCtrl = new wxPanel(notebook_1, wxID_ANY);
    notebook_1_Spacer = new wxPanel(notebook_1, wxID_ANY);
    notebook_1_wxStaticText = new wxPanel(notebook_1, wxID_ANY);
    notebook_1_wxStaticLine = new wxPanel(notebook_1, wxID_ANY);
    notebook_1_wxStaticBitmap = new wxPanel(notebook_1, wxID_ANY);
    notebook_1_wxSplitterWindow_vertical = new wxScrolledWindow(notebook_1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
    splitter_2 = new wxSplitterWindow(notebook_1_wxSplitterWindow_vertical, wxID_ANY);
    splitter_2_pane_2 = new wxPanel(splitter_2, wxID_ANY);
    splitter_2_pane_1 = new wxPanel(splitter_2, wxID_ANY);
    notebook_1_wxSplitterWindow_horizontal = new wxScrolledWindow(notebook_1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
    splitter_1 = new wxSplitterWindow(notebook_1_wxSplitterWindow_horizontal, wxID_ANY);
    splitter_1_pane_2 = new wxPanel(splitter_1, wxID_ANY);
    splitter_1_pane_1 = new wxPanel(splitter_1, wxID_ANY);
    notebook_1_wxSpinCtrl = new wxPanel(notebook_1, wxID_ANY);
    notebook_1_wxSpinButton = new wxPanel(notebook_1, wxID_ANY);
    notebook_1_wxSlider = new wxPanel(notebook_1, wxID_ANY);
    notebook_1_wxRadioButton = new wxPanel(notebook_1, wxID_ANY);
    notebook_1_wxRadioBox = new wxPanel(notebook_1, wxID_ANY);
    notebook_1_wxPropertyGridManager = new wxPanel(notebook_1, wxID_ANY);
    notebook_1_wxListCtrl = new wxPanel(notebook_1, wxID_ANY);
    notebook_1_wxListBox = new wxPanel(notebook_1, wxID_ANY);
    notebook_1_wxHyperlinkCtrl = new wxPanel(notebook_1, wxID_ANY);
    notebook_1_wxGrid = new wxPanel(notebook_1, wxID_ANY);
    notebook_1_wxGauge = new wxPanel(notebook_1, wxID_ANY);
    notebook_1_wxDatePickerCtrl = new wxPanel(notebook_1, wxID_ANY);
    notebook_1_wxComboBox = new wxPanel(notebook_1, wxID_ANY);
    notebook_1_wxChoice = new wxPanel(notebook_1, wxID_ANY);
    notebook_1_wxCheckListBox = new wxPanel(notebook_1, wxID_ANY);
    notebook_1_wxCheckBox = new wxPanel(notebook_1, wxID_ANY);
    notebook_1_wxGenericCalendarCtrl = new wxPanel(notebook_1, wxID_ANY);
    notebook_1_wxCalendarCtrl = new wxPanel(notebook_1, wxID_ANY);
    notebook_1_wxButton = new wxPanel(notebook_1, wxID_ANY);
    sizer_8_staticbox = new wxStaticBox(notebook_1_wxRadioButton, wxID_ANY, _("My RadioButton Group"));
    notebook_1_wxBitmapButton = new wxPanel(notebook_1, wxID_ANY);
    All_Widgets_menubar = new wxMenuBar();
    wxMenu* wxglade_tmp_menu_1 = new wxMenu();
    wxglade_tmp_menu_1->Append(wxID_OPEN, _("Exit"), _("Finish program"), wxITEM_NORMAL);
    All_Widgets_menubar->Append(wxglade_tmp_menu_1, _("File"));
    SetMenuBar(All_Widgets_menubar);
    All_Widgets_statusbar = CreateStatusBar(1);
    All_Widgets_toolbar = new wxToolBar(this, -1);
    SetToolBar(All_Widgets_toolbar);
    All_Widgets_toolbar->AddTool(wxID_UP, _("UpDown"), wxArtProvider::GetBitmap(wxART_GO_UP, wxART_OTHER, wxSize(32, 32)), wxArtProvider::GetBitmap(wxART_GO_DOWN, wxART_OTHER, wxSize(32, 32)), wxITEM_CHECK, _("Up or Down"), _("Up or Down"));
    All_Widgets_toolbar->AddTool(wxID_OPEN, _("Open"), wxBitmap(32, 32), wxNullBitmap, wxITEM_NORMAL, _("Open a new file"), _("Open a new file"));
    All_Widgets_toolbar->Realize();
    bitmap_button_icon1 = new wxBitmapButton(notebook_1_wxBitmapButton, wxID_ANY, wxBitmap(wxT("icon.xpm"), wxBITMAP_TYPE_ANY));
    bitmap_button_empty1 = new wxBitmapButton(notebook_1_wxBitmapButton, wxID_ANY, wxBitmap(10, 10));
    bitmap_button_icon2 = new wxBitmapButton(notebook_1_wxBitmapButton, wxID_ANY, wxBitmap(wxT("icon.xpm"), wxBITMAP_TYPE_ANY), wxDefaultPosition, wxDefaultSize, wxBORDER_NONE|wxBU_BOTTOM);
    bitmap_button_art = new wxBitmapButton(notebook_1_wxBitmapButton, wxID_ANY, wxArtProvider::GetBitmap(wxART_GO_UP, wxART_OTHER, wxSize(32, 32)), wxDefaultPosition, wxDefaultSize, wxBORDER_NONE|wxBU_BOTTOM);
    button_3 = new wxButton(notebook_1_wxButton, wxID_BOLD, wxEmptyString);
    calendar_ctrl_1 = new wxCalendarCtrl(notebook_1_wxCalendarCtrl, wxID_ANY, wxDefaultDateTime, wxDefaultPosition, wxDefaultSize, wxCAL_MONDAY_FIRST|wxCAL_SEQUENTIAL_MONTH_SELECTION|wxCAL_SHOW_SURROUNDING_WEEKS|wxCAL_SHOW_WEEK_NUMBERS);
    generic_calendar_ctrl_1 = new wxGenericCalendarCtrl(notebook_1_wxGenericCalendarCtrl, wxID_ANY, wxDefaultDateTime, wxDefaultPosition, wxDefaultSize, wxCAL_MONDAY_FIRST);
    checkbox_1 = new wxCheckBox(notebook_1_wxCheckBox, wxID_ANY, _("one (unchecked)"));
    checkbox_2 = new wxCheckBox(notebook_1_wxCheckBox, wxID_ANY, _("two (checked)"));
    checkbox_3 = new wxCheckBox(notebook_1_wxCheckBox, wxID_ANY, _("three"), wxDefaultPosition, wxDefaultSize, wxCHK_2STATE);
    checkbox_4 = new wxCheckBox(notebook_1_wxCheckBox, wxID_ANY, _("four (unchecked)"), wxDefaultPosition, wxDefaultSize, wxCHK_3STATE);
    checkbox_5 = new wxCheckBox(notebook_1_wxCheckBox, wxID_ANY, _("five (checked)"), wxDefaultPosition, wxDefaultSize, wxCHK_3STATE|wxCHK_ALLOW_3RD_STATE_FOR_USER);
    checkbox_6 = new wxCheckBox(notebook_1_wxCheckBox, wxID_ANY, _("six (undetermined)"), wxDefaultPosition, wxDefaultSize, wxCHK_3STATE|wxCHK_ALLOW_3RD_STATE_FOR_USER);
    const wxString check_list_box_1_choices[] = {
        _("one"),
        _("two"),
        _("three"),
        _("four"),
    };
    check_list_box_1 = new wxCheckListBox(notebook_1_wxCheckListBox, wxID_ANY, wxDefaultPosition, wxDefaultSize, 4, check_list_box_1_choices);
    const wxString choice_empty_choices[] = {
        _("<set by wxGlade>"),
    };
    choice_empty = new wxChoice(notebook_1_wxChoice, wxID_ANY, wxDefaultPosition, wxDefaultSize, 1, choice_empty_choices);
    const wxString choice_filled_choices[] = {
        _("Item 1"),
        _("Item 2 (pre-selected)"),
    };
    choice_filled = new wxChoice(notebook_1_wxChoice, wxID_ANY, wxDefaultPosition, wxDefaultSize, 2, choice_filled_choices);
    const wxString combo_box_empty_choices[] = {
        _("<set by wxGlade>"),
    };
    combo_box_empty = new wxComboBox(notebook_1_wxComboBox, wxID_ANY, wxT(""), wxDefaultPosition, wxDefaultSize, 1, combo_box_empty_choices, wxCB_DROPDOWN);
    const wxString combo_box_filled_choices[] = {
        _("Item 1 (pre-selected)"),
        _("Item 2"),
    };
    combo_box_filled = new wxComboBox(notebook_1_wxComboBox, wxID_ANY, wxT(""), wxDefaultPosition, wxDefaultSize, 2, combo_box_filled_choices, wxCB_DROPDOWN);
    datepicker_ctrl_1 = new wxDatePickerCtrl(notebook_1_wxDatePickerCtrl, wxID_ANY);
    gauge_1 = new wxGauge(notebook_1_wxGauge, wxID_ANY, 20);
    grid_1 = new wxGrid(notebook_1_wxGrid, wxID_ANY);
    hyperlink_1 = new wxHyperlinkCtrl(notebook_1_wxHyperlinkCtrl, wxID_ANY, _("Homepage wxGlade"), _("http://wxglade.sf.net"));
    const wxString list_box_empty_choices[] = {
        _("<set by wxGlade>"),
    };
    list_box_empty = new wxListBox(notebook_1_wxListBox, wxID_ANY, wxDefaultPosition, wxDefaultSize, 1, list_box_empty_choices, wxLB_SINGLE);
    const wxString list_box_filled_choices[] = {
        _("Item 1"),
        _("Item 2 (pre-selected)"),
    };
    list_box_filled = new wxListBox(notebook_1_wxListBox, wxID_ANY, wxDefaultPosition, wxDefaultSize, 2, list_box_filled_choices, wxLB_MULTIPLE|wxLB_SORT);
    list_ctrl_1 = new wxListCtrl(notebook_1_wxListCtrl, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxBORDER_SUNKEN|wxLC_REPORT);
    property_grid_2 = new wxPropertyGridManager(notebook_1_wxPropertyGridManager, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxPG_ALPHABETIC_MODE);
    const wxString radio_box_empty1_choices[] = {
        _("<set by wxGlade>"),
    };
    radio_box_empty1 = new wxRadioBox(notebook_1_wxRadioBox, wxID_ANY, _("radio_box_empty1"), wxDefaultPosition, wxDefaultSize, 1, radio_box_empty1_choices, 1, wxRA_SPECIFY_ROWS);
    const wxString radio_box_filled1_choices[] = {
        _("choice 1"),
        _("choice 2 (pre-selected)"),
        _("choice 3"),
    };
    radio_box_filled1 = new wxRadioBox(notebook_1_wxRadioBox, wxID_ANY, _("radio_box_filled1"), wxDefaultPosition, wxDefaultSize, 3, radio_box_filled1_choices, 0, wxRA_SPECIFY_ROWS);
    const wxString radio_box_empty2_choices[] = {
        _("<set by wxGlade>"),
    };
    radio_box_empty2 = new wxRadioBox(notebook_1_wxRadioBox, wxID_ANY, _("radio_box_empty2"), wxDefaultPosition, wxDefaultSize, 1, radio_box_empty2_choices, 1, wxRA_SPECIFY_COLS);
    const wxString radio_box_filled2_choices[] = {
        _("choice 1"),
        _("choice 2 (pre-selected)"),
    };
    radio_box_filled2 = new wxRadioBox(notebook_1_wxRadioBox, wxID_ANY, _("radio_box_filled2"), wxDefaultPosition, wxDefaultSize, 2, radio_box_filled2_choices, 0, wxRA_SPECIFY_COLS);
    radio_btn_1 = new wxRadioButton(notebook_1_wxRadioButton, wxID_ANY, _("Alice"), wxDefaultPosition, wxDefaultSize, wxRB_GROUP);
    text_ctrl_1 = new wxTextCtrl(notebook_1_wxRadioButton, wxID_ANY, wxEmptyString);
    radio_btn_2 = new wxRadioButton(notebook_1_wxRadioButton, wxID_ANY, _("Bob"));
    text_ctrl_2 = new wxTextCtrl(notebook_1_wxRadioButton, wxID_ANY, wxEmptyString);
    radio_btn_3 = new wxRadioButton(notebook_1_wxRadioButton, wxID_ANY, _("Malroy"));
    text_ctrl_3 = new wxTextCtrl(notebook_1_wxRadioButton, wxID_ANY, wxEmptyString);
    slider_1 = new wxSlider(notebook_1_wxSlider, wxID_ANY, 5, 0, 10);
    tc_spin_button = new wxTextCtrl(notebook_1_wxSpinButton, wxID_ANY, _("1"), wxDefaultPosition, wxDefaultSize, wxTE_RIGHT);
    spin_button = new wxSpinButton(notebook_1_wxSpinButton, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxSP_VERTICAL);
    spin_ctrl_1 = new wxSpinCtrl(notebook_1_wxSpinCtrl, wxID_ANY, wxT("4"), wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS|wxTE_RIGHT, 0, 100);
    label_top_pane = new wxStaticText(splitter_1_pane_1, wxID_ANY, _("top pane"));
    label_buttom_pane = new wxStaticText(splitter_1_pane_2, wxID_ANY, _("bottom pane"));
    label_left_pane = new wxStaticText(splitter_2_pane_1, wxID_ANY, _("left pane"));
    label_right_pane = new wxStaticText(splitter_2_pane_2, wxID_ANY, _("right pane"));
    bitmap_code_emptybitmap = new wxStaticBitmap(notebook_1_wxStaticBitmap, wxID_ANY, wxBitmap(32, 32));
    bitmap_file = new wxStaticBitmap(notebook_1_wxStaticBitmap, wxID_ANY, wxBitmap(wxT("icon.xpm"), wxBITMAP_TYPE_ANY));
    bitmap_nofile = new wxStaticBitmap(notebook_1_wxStaticBitmap, wxID_ANY, wxBitmap(wxT("non-existing.bmp"), wxBITMAP_TYPE_ANY));
    bitmap_art = new wxStaticBitmap(notebook_1_wxStaticBitmap, wxID_ANY, wxArtProvider::GetBitmap(wxART_PRINT, wxART_OTHER, wxSize(32, 32)));
    static_line_2 = new wxStaticLine(notebook_1_wxStaticLine, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_VERTICAL);
    static_line_3 = new wxStaticLine(notebook_1_wxStaticLine, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_VERTICAL);
    static_line_4 = new wxStaticLine(notebook_1_wxStaticLine, wxID_ANY);
    static_line_5 = new wxStaticLine(notebook_1_wxStaticLine, wxID_ANY);
    label_1 = new wxStaticText(notebook_1_wxStaticText, wxID_ANY, _("red text (RGB)"), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTER);
    label_4 = new wxStaticText(notebook_1_wxStaticText, wxID_ANY, _("black on red (RGB)"), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTER);
    label_5 = new wxStaticText(notebook_1_wxStaticText, wxID_ANY, _("green on pink (RGB)"), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTER);
    label_3 = new wxStaticText(notebook_1_Spacer, wxID_ANY, _("Two labels with a"));
    label_2 = new wxStaticText(notebook_1_Spacer, wxID_ANY, _("spacer between"));
    text_ctrl = new wxTextCtrl(notebook_1_wxTextCtrl, wxID_ANY, _("This\nis\na\nmultiline\nwxTextCtrl"), wxDefaultPosition, wxDefaultSize, wxTE_CHARWRAP|wxTE_MULTILINE|wxTE_WORDWRAP);
    button_2 = new wxToggleButton(notebook_1_wxToggleButton, wxID_ANY, _("Toggle Button 1"));
    button_4 = new wxToggleButton(notebook_1_wxToggleButton, wxID_ANY, _("Toggle Button 2"), wxDefaultPosition, wxDefaultSize, wxBU_BOTTOM|wxBU_EXACTFIT);
    tree_ctrl_1 = new wxTreeCtrl(notebook_1_wxTreeCtrl, wxID_ANY);
    static_line_1 = new wxStaticLine(this, wxID_ANY);
    button_5 = new wxButton(this, wxID_CLOSE, wxEmptyString);
    button_1 = new wxButton(this, wxID_OK, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxBU_TOP);

    set_properties();
    do_layout();
    // end wxGlade
}


void All_Widgets_Frame::set_properties()
{
    // begin wxGlade: All_Widgets_Frame::set_properties
    SetTitle(_("All Widgets"));
    SetSize(wxSize(800, 417));
    int All_Widgets_statusbar_widths[] = { -1 };
    All_Widgets_statusbar->SetStatusWidths(1, All_Widgets_statusbar_widths);

    // statusbar fields
    const wxString All_Widgets_statusbar_fields[] = {
        _("All Widgets statusbar"),
    };
    for(int i = 0; i < All_Widgets_statusbar->GetFieldsCount(); ++i) {
        All_Widgets_statusbar->SetStatusText(All_Widgets_statusbar_fields[i], i);
    }
    bitmap_button_icon1->SetSize(bitmap_button_icon1->GetBestSize());
    bitmap_button_icon1->SetDefault();
    bitmap_button_empty1->SetSize(bitmap_button_empty1->GetBestSize());
    bitmap_button_empty1->SetDefault();
    bitmap_button_icon2->SetBitmapDisabled(wxBitmap(20, 20));
    bitmap_button_icon2->SetSize(bitmap_button_icon2->GetBestSize());
    bitmap_button_icon2->SetDefault();
    bitmap_button_art->SetSize(bitmap_button_art->GetBestSize());
    bitmap_button_art->SetDefault();
    checkbox_2->SetValue(1);
    checkbox_4->Set3StateValue(wxCHK_UNCHECKED);
    checkbox_5->Set3StateValue(wxCHK_CHECKED);
    checkbox_6->Set3StateValue(wxCHK_UNDETERMINED);
    check_list_box_1->SetSelection(2);
    choice_empty->SetSelection(0);
    choice_filled->SetSelection(1);
    combo_box_empty->SetSelection(-1);
    combo_box_filled->SetSelection(0);
    grid_1->CreateGrid(10, 3);
    list_box_empty->SetSelection(0);
    list_box_filled->SetSelection(1);
    radio_box_empty1->SetSelection(0);
    radio_box_filled1->SetSelection(1);
    radio_box_empty2->SetSelection(0);
    radio_box_filled2->SetSelection(1);
    splitter_1->SetMinimumPaneSize(20);
    notebook_1_wxSplitterWindow_horizontal->SetScrollRate(10, 10);
    splitter_2->SetMinimumPaneSize(20);
    notebook_1_wxSplitterWindow_vertical->SetScrollRate(10, 10);
    label_1->SetForegroundColour(wxColour(255, 0, 0));
    label_4->SetBackgroundColour(wxColour(255, 0, 0));
    label_4->SetToolTip(_("Background colour won't show, check documentation for more details"));
    label_5->SetBackgroundColour(wxColour(255, 0, 255));
    label_5->SetForegroundColour(wxColour(0, 255, 0));
    label_5->SetToolTip(_("Background colour won't show, check documentation for more details"));
    // end wxGlade
}


void All_Widgets_Frame::do_layout()
{
    // begin wxGlade: All_Widgets_Frame::do_layout
    wxFlexGridSizer* sizer_1 = new wxFlexGridSizer(3, 1, 0, 0);
    wxFlexGridSizer* sizer_2 = new wxFlexGridSizer(1, 2, 0, 0);
    wxBoxSizer* sizer_24 = new wxBoxSizer(wxHORIZONTAL);
    wxBoxSizer* sizer_23 = new wxBoxSizer(wxHORIZONTAL);
    wxBoxSizer* sizer_18 = new wxBoxSizer(wxHORIZONTAL);
    wxFlexGridSizer* grid_sizer_4 = new wxFlexGridSizer(1, 3, 0, 0);
    wxFlexGridSizer* grid_sizer_3 = new wxFlexGridSizer(1, 3, 0, 0);
    wxBoxSizer* sizer_9 = new wxBoxSizer(wxVERTICAL);
    wxBoxSizer* sizer_10 = new wxBoxSizer(wxHORIZONTAL);
    wxBoxSizer* sizer_11 = new wxBoxSizer(wxVERTICAL);
    wxBoxSizer* sizer_25 = new wxBoxSizer(wxHORIZONTAL);
    wxBoxSizer* sizer_33 = new wxBoxSizer(wxVERTICAL);
    wxBoxSizer* sizer_32 = new wxBoxSizer(wxVERTICAL);
    wxBoxSizer* sizer_29 = new wxBoxSizer(wxHORIZONTAL);
    wxBoxSizer* sizer_31 = new wxBoxSizer(wxHORIZONTAL);
    wxBoxSizer* sizer_30 = new wxBoxSizer(wxHORIZONTAL);
    wxBoxSizer* sizer_14 = new wxBoxSizer(wxHORIZONTAL);
    wxBoxSizer* sizer_16 = new wxBoxSizer(wxHORIZONTAL);
    wxBoxSizer* sizer_22 = new wxBoxSizer(wxHORIZONTAL);
    sizer_8_staticbox->Lower();
    wxStaticBoxSizer* sizer_8 = new wxStaticBoxSizer(sizer_8_staticbox, wxHORIZONTAL);
    wxFlexGridSizer* grid_sizer_2 = new wxFlexGridSizer(3, 2, 0, 0);
    wxGridSizer* grid_sizer_1 = new wxGridSizer(2, 2, 0, 0);
    wxBoxSizer* sizer_34 = new wxBoxSizer(wxHORIZONTAL);
    wxBoxSizer* sizer_3 = new wxBoxSizer(wxHORIZONTAL);
    wxBoxSizer* sizer_4 = new wxBoxSizer(wxVERTICAL);
    wxBoxSizer* sizer_20 = new wxBoxSizer(wxHORIZONTAL);
    wxBoxSizer* sizer_19 = new wxBoxSizer(wxHORIZONTAL);
    wxBoxSizer* sizer_15 = new wxBoxSizer(wxHORIZONTAL);
    wxBoxSizer* sizer_17 = new wxBoxSizer(wxHORIZONTAL);
    wxBoxSizer* sizer_6 = new wxBoxSizer(wxVERTICAL);
    wxBoxSizer* sizer_7 = new wxBoxSizer(wxHORIZONTAL);
    wxBoxSizer* sizer_5 = new wxBoxSizer(wxHORIZONTAL);
    wxBoxSizer* sizer_26 = new wxBoxSizer(wxHORIZONTAL);
    wxGridSizer* sizer_21 = new wxGridSizer(2, 3, 0, 0);
    wxBoxSizer* sizer_27 = new wxBoxSizer(wxHORIZONTAL);
    wxBoxSizer* sizer_12 = new wxBoxSizer(wxHORIZONTAL);
    wxBoxSizer* sizer_28 = new wxBoxSizer(wxHORIZONTAL);
    wxFlexGridSizer* sizer_13 = new wxFlexGridSizer(2, 2, 0, 0);
    sizer_13->Add(bitmap_button_icon1, 1, wxALL|wxEXPAND, 5);
    sizer_13->Add(bitmap_button_empty1, 1, wxALL|wxEXPAND, 5);
    sizer_13->Add(bitmap_button_icon2, 1, wxALL|wxEXPAND, 5);
    sizer_13->Add(bitmap_button_art, 1, wxALL|wxEXPAND, 5);
    notebook_1_wxBitmapButton->SetSizer(sizer_13);
    sizer_13->AddGrowableRow(0);
    sizer_13->AddGrowableRow(1);
    sizer_13->AddGrowableCol(0);
    sizer_13->AddGrowableCol(1);
    sizer_28->Add(button_3, 0, wxALL, 5);
    notebook_1_wxButton->SetSizer(sizer_28);
    sizer_12->Add(calendar_ctrl_1, 1, wxALL|wxEXPAND, 5);
    notebook_1_wxCalendarCtrl->SetSizer(sizer_12);
    sizer_27->Add(generic_calendar_ctrl_1, 1, wxALL|wxEXPAND, 5);
    notebook_1_wxGenericCalendarCtrl->SetSizer(sizer_27);
    sizer_21->Add(checkbox_1, 0, wxEXPAND, 0);
    sizer_21->Add(checkbox_2, 0, wxEXPAND, 0);
    sizer_21->Add(checkbox_3, 0, wxEXPAND, 0);
    sizer_21->Add(checkbox_4, 0, wxEXPAND, 0);
    sizer_21->Add(checkbox_5, 0, wxEXPAND, 0);
    sizer_21->Add(checkbox_6, 0, wxEXPAND, 0);
    notebook_1_wxCheckBox->SetSizer(sizer_21);
    sizer_26->Add(check_list_box_1, 1, wxALL|wxEXPAND, 5);
    notebook_1_wxCheckListBox->SetSizer(sizer_26);
    sizer_5->Add(choice_empty, 1, wxALL, 5);
    sizer_5->Add(choice_filled, 1, wxALL, 5);
    notebook_1_wxChoice->SetSizer(sizer_5);
    sizer_7->Add(combo_box_empty, 1, wxALL, 5);
    sizer_7->Add(combo_box_filled, 1, wxALL, 5);
    sizer_6->Add(sizer_7, 1, wxEXPAND, 0);
    notebook_1_wxComboBox->SetSizer(sizer_6);
    sizer_17->Add(datepicker_ctrl_1, 1, wxALIGN_CENTER|wxALL, 5);
    notebook_1_wxDatePickerCtrl->SetSizer(sizer_17);
    sizer_15->Add(gauge_1, 1, wxALL, 5);
    notebook_1_wxGauge->SetSizer(sizer_15);
    sizer_19->Add(grid_1, 1, wxEXPAND, 0);
    notebook_1_wxGrid->SetSizer(sizer_19);
    sizer_20->Add(hyperlink_1, 0, wxALL, 5);
    notebook_1_wxHyperlinkCtrl->SetSizer(sizer_20);
    sizer_4->Add(list_box_empty, 1, wxALL|wxEXPAND, 5);
    sizer_4->Add(list_box_filled, 1, wxALL|wxEXPAND, 5);
    notebook_1_wxListBox->SetSizer(sizer_4);
    sizer_3->Add(list_ctrl_1, 1, wxALL|wxEXPAND, 5);
    notebook_1_wxListCtrl->SetSizer(sizer_3);
    sizer_34->Add(property_grid_2, 1, wxALL|wxEXPAND, 5);
    notebook_1_wxPropertyGridManager->SetSizer(sizer_34);
    grid_sizer_1->Add(radio_box_empty1, 1, wxALL|wxEXPAND, 5);
    grid_sizer_1->Add(radio_box_filled1, 1, wxALL|wxEXPAND, 5);
    grid_sizer_1->Add(radio_box_empty2, 1, wxALL|wxEXPAND, 5);
    grid_sizer_1->Add(radio_box_filled2, 1, wxALL|wxEXPAND, 5);
    notebook_1_wxRadioBox->SetSizer(grid_sizer_1);
    grid_sizer_2->Add(radio_btn_1, 1, wxALL|wxEXPAND, 5);
    grid_sizer_2->Add(text_ctrl_1, 1, wxALL|wxEXPAND, 5);
    grid_sizer_2->Add(radio_btn_2, 1, wxALL|wxEXPAND, 5);
    grid_sizer_2->Add(text_ctrl_2, 1, wxALL|wxEXPAND, 5);
    grid_sizer_2->Add(radio_btn_3, 1, wxALL|wxEXPAND, 5);
    grid_sizer_2->Add(text_ctrl_3, 1, wxALL|wxEXPAND, 5);
    sizer_8->Add(grid_sizer_2, 1, wxEXPAND, 0);
    notebook_1_wxRadioButton->SetSizer(sizer_8);
    sizer_22->Add(slider_1, 1, wxALL|wxEXPAND, 5);
    notebook_1_wxSlider->SetSizer(sizer_22);
    sizer_16->Add(tc_spin_button, 1, wxALL, 5);
    sizer_16->Add(spin_button, 1, wxALL, 5);
    notebook_1_wxSpinButton->SetSizer(sizer_16);
    sizer_14->Add(spin_ctrl_1, 1, wxALL, 5);
    notebook_1_wxSpinCtrl->SetSizer(sizer_14);
    sizer_30->Add(label_top_pane, 1, wxALL|wxEXPAND, 5);
    splitter_1_pane_1->SetSizer(sizer_30);
    sizer_31->Add(label_buttom_pane, 1, wxALL|wxEXPAND, 5);
    splitter_1_pane_2->SetSizer(sizer_31);
    splitter_1->SplitHorizontally(splitter_1_pane_1, splitter_1_pane_2);
    sizer_29->Add(splitter_1, 1, wxALL|wxEXPAND, 5);
    notebook_1_wxSplitterWindow_horizontal->SetSizer(sizer_29);
    sizer_32->Add(label_left_pane, 1, wxALL|wxEXPAND, 5);
    splitter_2_pane_1->SetSizer(sizer_32);
    sizer_33->Add(label_right_pane, 1, wxALL|wxEXPAND, 5);
    splitter_2_pane_2->SetSizer(sizer_33);
    splitter_2->SplitVertically(splitter_2_pane_1, splitter_2_pane_2);
    sizer_25->Add(splitter_2, 1, wxALL|wxEXPAND, 5);
    notebook_1_wxSplitterWindow_vertical->SetSizer(sizer_25);
    sizer_11->Add(bitmap_code_emptybitmap, 1, wxALIGN_CENTER|wxALL|wxEXPAND, 5);
    sizer_11->Add(bitmap_file, 1, wxALIGN_CENTER|wxALL|wxEXPAND, 5);
    sizer_11->Add(bitmap_nofile, 1, wxALIGN_CENTER|wxALL|wxEXPAND, 5);
    sizer_11->Add(bitmap_art, 1, wxALIGN_CENTER|wxALL|wxEXPAND, 5);
    notebook_1_wxStaticBitmap->SetSizer(sizer_11);
    sizer_10->Add(static_line_2, 1, wxALL|wxEXPAND, 5);
    sizer_10->Add(static_line_3, 1, wxALL|wxEXPAND, 5);
    sizer_9->Add(sizer_10, 1, wxEXPAND, 0);
    sizer_9->Add(static_line_4, 1, wxALL|wxEXPAND, 5);
    sizer_9->Add(static_line_5, 1, wxALL|wxEXPAND, 5);
    notebook_1_wxStaticLine->SetSizer(sizer_9);
    grid_sizer_3->Add(label_1, 1, wxALL|wxEXPAND, 5);
    grid_sizer_3->Add(label_4, 1, wxALL|wxEXPAND, 5);
    grid_sizer_3->Add(label_5, 1, wxALL|wxEXPAND, 5);
    notebook_1_wxStaticText->SetSizer(grid_sizer_3);
    grid_sizer_4->Add(label_3, 1, wxALL|wxEXPAND, 5);
    grid_sizer_4->Add(60, 20, 1, wxALL|wxEXPAND, 5);
    grid_sizer_4->Add(label_2, 1, wxALL|wxEXPAND, 5);
    notebook_1_Spacer->SetSizer(grid_sizer_4);
    sizer_18->Add(text_ctrl, 1, wxALL|wxEXPAND, 5);
    notebook_1_wxTextCtrl->SetSizer(sizer_18);
    sizer_23->Add(button_2, 1, wxALL, 5);
    sizer_23->Add(button_4, 1, wxALL, 5);
    notebook_1_wxToggleButton->SetSizer(sizer_23);
    sizer_24->Add(tree_ctrl_1, 1, wxALL|wxEXPAND, 5);
    notebook_1_wxTreeCtrl->SetSizer(sizer_24);
    notebook_1->AddPage(notebook_1_wxBitmapButton, _("wxBitmapButton"));
    notebook_1->AddPage(notebook_1_wxButton, _("wxButton"));
    notebook_1->AddPage(notebook_1_wxCalendarCtrl, _("wxCalendarCtrl"));
    notebook_1->AddPage(notebook_1_wxGenericCalendarCtrl, _("wxGenericCalendarCtrl"));
    notebook_1->AddPage(notebook_1_wxCheckBox, _("wxCheckBox"));
    notebook_1->AddPage(notebook_1_wxCheckListBox, _("wxCheckListBox"));
    notebook_1->AddPage(notebook_1_wxChoice, _("wxChoice"));
    notebook_1->AddPage(notebook_1_wxComboBox, _("wxComboBox"));
    notebook_1->AddPage(notebook_1_wxDatePickerCtrl, _("wxDatePickerCtrl"));
    notebook_1->AddPage(notebook_1_wxGauge, _("wxGauge"));
    notebook_1->AddPage(notebook_1_wxGrid, _("wxGrid"));
    notebook_1->AddPage(notebook_1_wxHyperlinkCtrl, _("wxHyperlinkCtrl"));
    notebook_1->AddPage(notebook_1_wxListBox, _("wxListBox"));
    notebook_1->AddPage(notebook_1_wxListCtrl, _("wxListCtrl"));
    notebook_1->AddPage(notebook_1_wxPropertyGridManager, _("wxPropertyGridManager"));
    notebook_1->AddPage(notebook_1_wxRadioBox, _("wxRadioBox"));
    notebook_1->AddPage(notebook_1_wxRadioButton, _("wxRadioButton"));
    notebook_1->AddPage(notebook_1_wxSlider, _("wxSlider"));
    notebook_1->AddPage(notebook_1_wxSpinButton, _("wxSpinButton (with wxTextCtrl)"));
    notebook_1->AddPage(notebook_1_wxSpinCtrl, _("wxSpinCtrl"));
    notebook_1->AddPage(notebook_1_wxSplitterWindow_horizontal, _("wxSplitterWindow (horizontally)"));
    notebook_1->AddPage(notebook_1_wxSplitterWindow_vertical, _("wxSplitterWindow (vertically)"));
    notebook_1->AddPage(notebook_1_wxStaticBitmap, _("wxStaticBitmap"));
    notebook_1->AddPage(notebook_1_wxStaticLine, _("wxStaticLine"));
    notebook_1->AddPage(notebook_1_wxStaticText, _("wxStaticText"));
    notebook_1->AddPage(notebook_1_Spacer, _("Spacer"));
    notebook_1->AddPage(notebook_1_wxTextCtrl, _("wxTextCtrl"));
    notebook_1->AddPage(notebook_1_wxToggleButton, _("wxToggleButton"));
    notebook_1->AddPage(notebook_1_wxTreeCtrl, _("wxTreeCtrl"));
    sizer_1->Add(notebook_1, 1, wxEXPAND, 0);
    sizer_1->Add(static_line_1, 0, wxALL|wxEXPAND, 5);
    sizer_2->Add(button_5, 0, wxALIGN_RIGHT|wxALL, 5);
    sizer_2->Add(button_1, 0, wxALIGN_RIGHT|wxALL, 5);
    sizer_1->Add(sizer_2, 0, wxALIGN_RIGHT, 0);
    SetSizer(sizer_1);
    sizer_1->SetSizeHints(this);
    sizer_1->AddGrowableRow(0);
    sizer_1->AddGrowableCol(0);
    Layout();
    Centre();
    // end wxGlade
}


BEGIN_EVENT_TABLE(All_Widgets_Frame, wxFrame)
    // begin wxGlade: All_Widgets_Frame::event_table
    EVT_NAVIGATION_KEY(All_Widgets_Frame::OnBitmapButtonPanelNavigationKey)
    EVT_NOTEBOOK_PAGE_CHANGED(wxID_ANY, All_Widgets_Frame::OnNotebookPageChanged)
    EVT_NOTEBOOK_PAGE_CHANGING(wxID_ANY, All_Widgets_Frame::OnNotebookPageChanging)
    EVT_BUTTON(wxID_ANY, All_Widgets_Frame::startConverting)
    // end wxGlade
END_EVENT_TABLE();


void All_Widgets_Frame::OnBitmapButtonPanelNavigationKey(wxNavigationKeyEvent &event)
{
    event.Skip();
    // notify the user that he hasn't implemented the event handler yet
    wxLogDebug(wxT("Event handler (All_Widgets_Frame::OnBitmapButtonPanelNavigationKey) not implemented yet"));
}

void All_Widgets_Frame::OnNotebookPageChanged(wxBookCtrlEvent &event)
{
    event.Skip();
    // notify the user that he hasn't implemented the event handler yet
    wxLogDebug(wxT("Event handler (All_Widgets_Frame::OnNotebookPageChanged) not implemented yet"));
}

void All_Widgets_Frame::OnNotebookPageChanging(wxBookCtrlEvent &event)
{
    event.Skip();
    // notify the user that he hasn't implemented the event handler yet
    wxLogDebug(wxT("Event handler (All_Widgets_Frame::OnNotebookPageChanging) not implemented yet"));
}

void All_Widgets_Frame::startConverting(wxCommandEvent &event)
{
    event.Skip();
    // notify the user that he hasn't implemented the event handler yet
    wxLogDebug(wxT("Event handler (All_Widgets_Frame::startConverting) not implemented yet"));
}


// wxGlade: add All_Widgets_Frame event handlers


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
    All_Widgets_Frame* All_Widgets = new All_Widgets_Frame(NULL, wxID_ANY, wxEmptyString);
    SetTopWindow(All_Widgets);
    All_Widgets->Show();
    return true;
}