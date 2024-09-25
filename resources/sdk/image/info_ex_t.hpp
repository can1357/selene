#pragma once
#include <sdkgen/support_library.hpp>
#include "info_t.hpp"

namespace nt { struct file_object_t; }

#include "magic/info_ex_t.start.hpp"
namespace image
{
    // [struct _IMAGE_INFO_EX]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct info_ex_t                               
    {                                              
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                         
        _m00 uint64_t                  size;         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 struct image::info_t      image_info;   //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .ImageInfo
        _m02 struct nt::file_object_t* file_object;  //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .FileObject
                                                   
        SDK_NONVOL_PROPERTIES( "_IMAGE_INFO_EX.$", 0x38, true, 0xc1d2efdfac4feb02 );            
        SDK_FIXED_SIZE( info_ex_t, 0x38 );            
    };                                             
};
#include "magic/info_ex_t.end.hpp"
SDK_VERIFY( struct image::info_ex_t, 0x38 );
