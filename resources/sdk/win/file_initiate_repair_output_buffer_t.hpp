#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/file_initiate_repair_output_buffer_t.start.hpp"
namespace win
{
    // [struct _FILE_INITIATE_REPAIR_OUTPUT_BUFFER]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct file_initiate_repair_output_buffer_t
    {                                          
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                   
        _m00 uint64_t hint1;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Hint1
        _m01 uint64_t hint2;                     //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Hint2
        _m02 uint64_t clsn;                      //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .Clsn
        _m03 int32_t  status;                    //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .Status
                                               
        SDK_NONVOL_PROPERTIES( "_FILE_INITIATE_REPAIR_OUTPUT_BUFFER.$", 0x20, true, 0xd20805d72e640ba2 );       
        SDK_FIXED_SIZE( file_initiate_repair_output_buffer_t, 0x20 );       
    };                                         
};
#include "magic/file_initiate_repair_output_buffer_t.end.hpp"
SDK_VERIFY( struct win::file_initiate_repair_output_buffer_t, 0x20 );
