#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct guid_t; }

#include "magic/interface_header_t.start.hpp"
namespace wdf
{
    // [struct _WDF_INTERFACE_HEADER]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct interface_header_t                        
    {                                                
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                           
        _m00 const struct nt::guid_t* interface_type;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .InterfaceType
        _m01 uint32_t                 interface_size;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .InterfaceSize
                                                     
        SDK_NONVOL_PROPERTIES( "_WDF_INTERFACE_HEADER.$", 0x10, true, 0x5b8f749311d1e8ec );               
        SDK_FIXED_SIZE( interface_header_t, 0x10 );               
    };                                               
};
#include "magic/interface_header_t.end.hpp"
SDK_VERIFY( struct wdf::interface_header_t, 0x10 );
