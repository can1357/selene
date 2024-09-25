#pragma once
#include <sdkgen/support_library.hpp>

namespace psp
{
    // [struct _PSP_STORAGE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct storage_t
    {               
                    
        SDK_MAGIC_PROPERTIES( "_PSP_STORAGE.$", 0x0, true, 0x491dc4e26c636ca9 );
        SDK_FIXED_SIZE( storage_t, 0x0 );
    };              
};
SDK_VERIFY( struct psp::storage_t, 0x0 );
