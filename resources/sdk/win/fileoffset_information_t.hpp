#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/fileoffset_information_t.start.hpp"
namespace win
{
    // [struct _FILEOFFSET_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct fileoffset_information_t
    {                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                     
        _m00 uint9_t  dont_use;      //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .DontUse
        _m01 uint48_t offset;        //{ +0x0000@9  +0x0000@9  +0x0000@9  +0x0000@9  } | .Offset
                                   
        SDK_MAGIC_PROPERTIES( "_FILEOFFSET_INFORMATION.$", 0x8, true, 0xeb4f65ed0aad753e );         
        SDK_FIXED_SIZE( fileoffset_information_t, 0x8 );         
    };                             
};
#include "magic/fileoffset_information_t.end.hpp"
SDK_VERIFY( struct win::fileoffset_information_t, 0x8 );
