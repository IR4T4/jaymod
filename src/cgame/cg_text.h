#ifndef CGAME_CG_TEXT_H
#define CGAME_CG_TEXT_H

///////////////////////////////////////////////////////////////////////////////

enum TPrint {
    TPRINT_CONSOLE,
    TPRINT_CHAT,
    TPRINT_CPM,
    TPRINT_PM,
    TPRINT_PM_SILENT,
    _TPRINT_MAX,
    _TPRINT_UNDEFINED,
};

///////////////////////////////////////////////////////////////////////////////

void CG_ConfigureDevice( text::ETDevice& );
void CG_TextPrint( TPrint, bool );

///////////////////////////////////////////////////////////////////////////////

#endif // CGAME_CG_TEXT_H