#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/perfinfo_file_create_t.start.hpp"
namespace win
{
    // [struct _PERFINFO_FILE_CREATE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct perfinfo_file_create_t                     
    {                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                            
        _m00 uint64_t               irp;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Irp
        _m01 uint64_t               file_object;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .FileObject
        _m02 uint32_t               issuing_thread_id;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .IssuingThreadId
        _m03 uint32_t               options;            //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .Options
        _m04 uint32_t               attributes;         //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Attributes
        _m05 uint32_t               share_access;       //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .ShareAccess
        _m06 sdk::array<wchar_t, 1> open_path;          //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .OpenPath
                                                      
        SDK_MAGIC_PROPERTIES( "_PERFINFO_FILE_CREATE.$", 0x28, true, 0x222b687aee898112 );                  
        SDK_FIXED_SIZE( perfinfo_file_create_t, 0x28 );                  
    };                                                
};
#include "magic/perfinfo_file_create_t.end.hpp"
SDK_VERIFY( struct win::perfinfo_file_create_t, 0x28 );
