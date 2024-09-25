#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/public_access_ranges_t.start.hpp"
namespace video
{
    // [struct _VIDEO_PUBLIC_ACCESS_RANGES]
    // => WDK 10 (NV)
    //
    struct public_access_ranges_t        
    {                                    
        // WDK 10                        
        //                               
        _m00 uint32_t in_io_space;         //{ +0x0000    } | .InIoSpace
        _m01 uint32_t mapped_in_io_space;  //{ +0x0004    } | .MappedInIoSpace
        _m02 void*    virtual_address;     //{ +0x0008    } | .VirtualAddress
                                         
        SDK_NONVOL_PROPERTIES( "_VIDEO_PUBLIC_ACCESS_RANGES.$", 0x0, false, 0xa8456262834d0b28 );                   
        SDK_FIXED_SIZE( public_access_ranges_t, 0x10 );                   
    };                                   
};
#include "magic/public_access_ranges_t.end.hpp"
SDK_VERIFY( struct video::public_access_ranges_t, 0x10 );
