#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/file_timestamps_t.start.hpp"
namespace nt
{
    // [struct _FILE_TIMESTAMPS]
    // => WDK 10 (NV)
    //
    struct file_timestamps_t          
    {                                 
        // WDK 10                     
        //                            
        _m00 int64_t creation_time;     //{ +0x0000    } | .CreationTime
        _m01 int64_t last_access_time;  //{ +0x0008    } | .LastAccessTime
        _m02 int64_t last_write_time;   //{ +0x0010    } | .LastWriteTime
        _m03 int64_t change_time;       //{ +0x0018    } | .ChangeTime
                                      
        SDK_NONVOL_PROPERTIES( "_FILE_TIMESTAMPS.$", 0x0, false, 0x9c45e52c326708f1 );                 
        SDK_FIXED_SIZE( file_timestamps_t, 0x20 );                 
    };                                
};
#include "magic/file_timestamps_t.end.hpp"
SDK_VERIFY( struct nt::file_timestamps_t, 0x20 );
