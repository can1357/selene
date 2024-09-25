#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/dataelement_t.start.hpp"
namespace tag
{
    // [struct tagDATAELEMENT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct dataelement_t                       
    {                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                     
        _m00 struct nt::guid_t      data_id;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dataID
        _m01 uint32_t               cb_size;     //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .cbSize
        _m02 uint32_t               cb_rounded;  //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .cbRounded
        _m03 sdk::array<uint8_t, 1> data;        //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Data
                                               
        SDK_MAGIC_PROPERTIES( "tagDATAELEMENT.$", 0x1c, true, 0xfe3223d23e93ff22 );           
        SDK_FIXED_SIZE( dataelement_t, 0x1c );           
    };                                         
};
#include "magic/dataelement_t.end.hpp"
SDK_VERIFY( struct tag::dataelement_t, 0x1c );
