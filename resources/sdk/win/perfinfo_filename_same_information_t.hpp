#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/perfinfo_filename_same_information_t.start.hpp"
namespace win
{
    // [struct _PERFINFO_FILENAME_SAME_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct perfinfo_filename_same_information_t
    {                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                  
        _m00 void* old_file;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .OldFile
        _m01 void* new_file;                     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .NewFile
                                               
        SDK_MAGIC_PROPERTIES( "_PERFINFO_FILENAME_SAME_INFORMATION.$", 0x10, true, 0x4b966c8b8e5227da );         
        SDK_FIXED_SIZE( perfinfo_filename_same_information_t, 0x10 );         
    };                                         
};
#include "magic/perfinfo_filename_same_information_t.end.hpp"
SDK_VERIFY( struct win::perfinfo_filename_same_information_t, 0x10 );
