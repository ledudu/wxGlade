#!/usr/bin/env python
# -*- coding: UTF-8 -*-
#
# generated by wxGlade "faked test version"
#

# This is an automatically generated file.
# Manual changes will be overwritten without warning!

import wx
import gettext
from MyAppFrame import MyAppFrame

class MyStartApp(wx.App):
    def OnInit(self):
        wx.InitAllImageHandlers()
        appframe = MyAppFrame(None, wx.ID_ANY, "")
        self.SetTopWindow(appframe)
        appframe.Show()
        return 1

# end of class MyStartApp

if __name__ == "__main__":
    gettext.install("myapp") # replace with the appropriate catalog name

    myapp = MyStartApp(0)
    myapp.MainLoop()