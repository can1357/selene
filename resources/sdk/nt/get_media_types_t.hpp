#pragma once
#include <sdkgen/support_library.hpp>
#include "device_media_info_t.hpp"

#include "magic/get_media_types_t.start.hpp"
namespace nt
{
    // [struct _GET_MEDIA_TYPES]
    // => WDK 10 (NV)
    //
    struct get_media_types_t                                                
    {                                                                       
        // WDK 10                                                           
        //                                                                  
        _m00 uint32_t                                      device_type;       //{ +0x0000    } | .DeviceType
        _m01 uint32_t                                      media_info_count;  //{ +0x0004    } | .MediaInfoCount
        _m02 sdk::array<struct nt::device_media_info_t, 1> media_info;        //{ +0x0008    } | .MediaInfo
                                                                            
        SDK_NONVOL_PROPERTIES( "_GET_MEDIA_TYPES.$", 0x0, false, 0xea8ef2bfd03ffc3 );                 
        SDK_FIXED_SIZE( get_media_types_t, 0x28 );                          
    };                                                                      
};
#include "magic/get_media_types_t.end.hpp"
SDK_VERIFY( struct nt::get_media_types_t, 0x28 );
