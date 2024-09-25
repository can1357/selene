#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"
#include "ifr_offset_t.hpp"

#include "magic/ifr_header_t.start.hpp"
namespace wdf
{
    // [struct _WDF_IFR_HEADER]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct ifr_header_t                           
    {                                             
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                        
        _m00 struct nt::guid_t        guid;         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Guid
        _m01 uint8_t*                 base;         //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .Base
        _m02 uint32_t                 size;         //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .Size
        _m03 struct wdf::ifr_offset_t offset;       //{ +0x001c    +0x001c    +0x001c    +0x001c    +0x001c    } | .Offset
        _m04 int32_t                  sequence;     //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .Sequence
        _m05 sdk::array<char, 32>     driver_name;  //{ +0x0024    +0x0024    +0x0024    +0x0024    +0x0024    } | .DriverName
                                                  
        SDK_NONVOL_PROPERTIES( "_WDF_IFR_HEADER.$", 0x48, true, 0xc10419a98e512a3c );            
        SDK_FIXED_SIZE( ifr_header_t, 0x48 );            
    };                                            
};
#include "magic/ifr_header_t.end.hpp"
SDK_VERIFY( struct wdf::ifr_header_t, 0x48 );
