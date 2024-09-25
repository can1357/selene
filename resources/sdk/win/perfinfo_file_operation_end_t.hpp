#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/perfinfo_file_operation_end_t.start.hpp"
namespace win
{
    // [struct _PERFINFO_FILE_OPERATION_END]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct perfinfo_file_operation_end_t
    {                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                              
        _m00 uint64_t irp;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Irp
        _m01 uint64_t extra_information;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ExtraInformation
        _m02 int32_t  status;             //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Status
                                        
        SDK_MAGIC_PROPERTIES( "_PERFINFO_FILE_OPERATION_END.$", 0x14, true, 0x122f6384d9ff7929 );                  
        SDK_FIXED_SIZE( perfinfo_file_operation_end_t, 0x14 );                  
    };                                  
};
#include "magic/perfinfo_file_operation_end_t.end.hpp"
SDK_VERIFY( struct win::perfinfo_file_operation_end_t, 0x14 );
