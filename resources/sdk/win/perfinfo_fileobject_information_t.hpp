#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/perfinfo_fileobject_information_t.start.hpp"
namespace win
{
    // [struct _PERFINFO_FILEOBJECT_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct perfinfo_fileobject_information_t
    {                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                     
        _m00 void* file_object;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .FileObject
                                            
        SDK_MAGIC_PROPERTIES( "_PERFINFO_FILEOBJECT_INFORMATION.$", 0x8, true, 0x9567e63bbe2fd7e7 );            
        SDK_FIXED_SIZE( perfinfo_fileobject_information_t, 0x8 );            
    };                                      
};
#include "magic/perfinfo_fileobject_information_t.end.hpp"
SDK_VERIFY( struct win::perfinfo_fileobject_information_t, 0x8 );
