#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/share_memory_information_t.start.hpp"
namespace video
{
    // [struct _VIDEO_SHARE_MEMORY_INFORMATION]
    // => WDK 10 (NV)
    //
    struct share_memory_information_t    
    {                                    
        // WDK 10                        
        //                               
        _m00 uint32_t shared_view_offset;  //{ +0x0000    } | .SharedViewOffset
        _m01 uint32_t shared_view_size;    //{ +0x0004    } | .SharedViewSize
        _m02 void*    virtual_address;     //{ +0x0008    } | .VirtualAddress
                                         
        SDK_NONVOL_PROPERTIES( "_VIDEO_SHARE_MEMORY_INFORMATION.$", 0x0, false, 0x3169688c495beefd );                   
        SDK_FIXED_SIZE( share_memory_information_t, 0x10 );                   
    };                                   
};
#include "magic/share_memory_information_t.end.hpp"
SDK_VERIFY( struct video::share_memory_information_t, 0x10 );
