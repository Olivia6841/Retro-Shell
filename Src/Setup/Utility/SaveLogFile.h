// Classic Shell (c) 2009-2017, Ivo Beltchev
// Retro-Shell (c) 2024, aubymori
// Retro-Shell (c) 2025, Olive6841
// Confidential information of Ivo Beltchev. Not for disclosure or distribution without prior written consent from the author

#pragma once

void ShowSaveLogFile( void );
int SaveLogFile( const wchar_t *fname, bool bAdmin );
DWORD GetFileVersion( const wchar_t *fname, DWORD *pBuild );
