# perl_codegen.py : perl generator functions for spacers
# $Id: perl_codegen.py,v 1.1 2003/06/23 21:35:10 crazyinsomniac Exp $
#
# Copyright (c) 2002-2003 D.H. aka crazyinsomniac on sourceforge.net
# License: MIT (see license.txt)
# THIS PROGRAM COMES WITH NO WARRANTY

import common


class PerlCodeGenerator:
    def get_code(self, spacer):
        prop = spacer.properties
        width = prop.get('width', '0')
        height = prop.get('height', '0')
        # we must use the hack in plgen.add_sizeritem (see pl_codegen.py)
        spacer.name = '%s, %s' % (width, height)
        return [], [], []

# end of class PerlCodeGenerator


def initialize():
    common.class_names['EditSpacer'] = 'spacer'

    plgen = common.code_writers.get('perl')
    if plgen:
        plgen.add_widget_handler('spacer', PerlCodeGenerator())
