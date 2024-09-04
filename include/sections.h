//
// Description: This file contains the declarations of the functions that are used to manipulate the sections of the
// dumped image.
//

#pragma once

#include "dumper.h"

#define ALIGN_UP(x, align) (((x) + ((align)-1)) & ~((align)-1))

//
// Resolves the sections of the specified module. The original image contains the raw data of the module.
//
_Success_(return)
BOOL
ResolveSections(_In_ PDUMPER Dumper, _In_ PBYTE *OriginalImage);