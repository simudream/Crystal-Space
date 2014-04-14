# Author: David Goodger
# Contact: goodger@users.sourceforge.net
# Revision: $Revision: 21817 $
# Date: $Date: 2005-07-21 22:39:57 +0200 (Thu, 21 Jul 2005) $
# Copyright: This module has been placed in the public domain.

# New language mappings are welcome.  Before doing a new translation, please
# read <http://docutils.sf.net/docs/howto/i18n.html>.  Two files must be
# translated for each language: one in docutils/languages, the other in
# docutils/parsers/rst/languages.

"""
English-language mappings for language-dependent features of Docutils.
"""

__docformat__ = 'reStructuredText'

labels = {
      # fixed: language-dependent
      'author': 'Author',
      'authors': 'Authors',
      'organization': 'Organization',
      'address': 'Address',
      'contact': 'Contact',
      'version': 'Version',
      'revision': 'Revision',
      'status': 'Status',
      'date': 'Date',
      'copyright': 'Copyright',
      'dedication': 'Dedication',
      'abstract': 'Abstract',
      'attention': 'Attention!',
      'caution': 'Caution!',
      'danger': '!DANGER!',
      'error': 'Error',
      'hint': 'Hint',
      'important': 'Important',
      'note': 'Note',
      'tip': 'Tip',
      'warning': 'Warning',
      'contents': 'Contents'}
"""Mapping of node class name to label text."""

bibliographic_fields = {
      # language-dependent: fixed
      'author': 'author',
      'authors': 'authors',
      'organization': 'organization',
      'address': 'address',
      'contact': 'contact',
      'version': 'version',
      'revision': 'revision',
      'status': 'status',
      'date': 'date',
      'copyright': 'copyright',
      'dedication': 'dedication',
      'abstract': 'abstract'}
"""English (lowcased) to canonical name mapping for bibliographic fields."""

author_separators = [';', ',']
"""List of separator strings for the 'Authors' bibliographic field. Tried in
order."""
