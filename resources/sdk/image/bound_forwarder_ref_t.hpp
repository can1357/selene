#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/bound_forwarder_ref_t.start.hpp"
namespace image
{
    // [struct _IMAGE_BOUND_FORWARDER_REF]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct bound_forwarder_ref_t         
    {                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                               
        _m00 uint32_t time_date_stamp;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .TimeDateStamp
        _m01 uint16_t offset_module_name;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .OffsetModuleName
                                         
        SDK_MAGIC_PROPERTIES( "_IMAGE_BOUND_FORWARDER_REF.$", 0x8, true, 0xd9a56113e930c26f );                   
        SDK_FIXED_SIZE( bound_forwarder_ref_t, 0x8 );                   
    };                                   
};
#include "magic/bound_forwarder_ref_t.end.hpp"
SDK_VERIFY( struct image::bound_forwarder_ref_t, 0x8 );
