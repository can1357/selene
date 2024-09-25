#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/mark_handle_info32_t.start.hpp"
namespace win
{
    // [struct _MARK_HANDLE_INFO32]
    // => Windows 11
    //
    struct mark_handle_info32_t       
    {                                 
        // Windows 11                 
        //                            
        _m00 uint32_t usn_source_info;  //{ +0x0000    } | .UsnSourceInfo
        _m01 uint32_t copy_number;      //{ +0x0000    } | .CopyNumber
        _m02 uint32_t volume_handle;    //{ +0x0004    } | .VolumeHandle
        _m03 uint32_t handle_info;      //{ +0x0008    } | .HandleInfo
                                      
        SDK_MAGIC_PROPERTIES( "_MARK_HANDLE_INFO32.$", 0x0, false, 0x1d1b3b318c91c5de );                
        SDK_FIXED_SIZE( mark_handle_info32_t, 0xc );                
    };                                
};
#include "magic/mark_handle_info32_t.end.hpp"
SDK_VERIFY( struct win::mark_handle_info32_t, 0xc );
