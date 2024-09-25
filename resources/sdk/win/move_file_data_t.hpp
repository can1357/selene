#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/move_file_data_t.start.hpp"
namespace win
{
    // [struct MOVE_FILE_DATA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct move_file_data_t         
    {                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                          
        _m00 void*    file_handle;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .FileHandle
        _m01 int64_t  starting_vcn;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .StartingVcn
        _m02 int64_t  starting_lcn;   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .StartingLcn
        _m03 uint32_t cluster_count;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ClusterCount
                                    
        SDK_MAGIC_PROPERTIES( "MOVE_FILE_DATA.$", 0x20, true, 0x3e171b493450e209 );              
        SDK_FIXED_SIZE( move_file_data_t, 0x20 );              
    };                              
};
#include "magic/move_file_data_t.end.hpp"
SDK_VERIFY( struct win::move_file_data_t, 0x20 );
