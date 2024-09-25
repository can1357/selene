#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/perfinfo_file_simple_operation_t.start.hpp"
namespace win
{
    // [struct _PERFINFO_FILE_SIMPLE_OPERATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct perfinfo_file_simple_operation_t
    {                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                              
        _m00 uint64_t irp;                   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Irp
        _m01 uint64_t file_object;           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .FileObject
        _m02 uint64_t file_key;              //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .FileKey
        _m03 uint32_t issuing_thread_id;     //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .IssuingThreadId
                                           
        SDK_MAGIC_PROPERTIES( "_PERFINFO_FILE_SIMPLE_OPERATION.$", 0x1c, true, 0x918b976981bf4ca3 );                  
        SDK_FIXED_SIZE( perfinfo_file_simple_operation_t, 0x1c );                  
    };                                     
};
#include "magic/perfinfo_file_simple_operation_t.end.hpp"
SDK_VERIFY( struct win::perfinfo_file_simple_operation_t, 0x1c );
