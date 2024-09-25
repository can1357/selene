#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/file_pipe_remote_information_t.start.hpp"
namespace win
{
    // [struct _FILE_PIPE_REMOTE_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct file_pipe_remote_information_t      
    {                                          
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                     
        _m00 int64_t  collect_data_time;         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .CollectDataTime
        _m01 uint32_t maximum_collection_count;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .MaximumCollectionCount
                                               
        SDK_NONVOL_PROPERTIES( "_FILE_PIPE_REMOTE_INFORMATION.$", 0x10, true, 0x23d45a941e7124dc );                         
        SDK_FIXED_SIZE( file_pipe_remote_information_t, 0x10 );                         
    };                                         
};
#include "magic/file_pipe_remote_information_t.end.hpp"
SDK_VERIFY( struct win::file_pipe_remote_information_t, 0x10 );
