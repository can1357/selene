#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/dcom_endpoint_t.start.hpp"
namespace tag
{
    // [struct tagDCOM_ENDPOINT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct dcom_endpoint_t         
    {                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                         
        _m00 wchar_t* wsz_prot_seq;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .wszProtSeq
        _m01 wchar_t* wsz_ports;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .wszPorts
        _m02 uint32_t dw_flags;      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .dwFlags
                                   
        SDK_MAGIC_PROPERTIES( "tagDCOM_ENDPOINT.$", 0x18, true, 0x1987da3ce71422fa );             
        SDK_FIXED_SIZE( dcom_endpoint_t, 0x18 );             
    };                             
};
#include "magic/dcom_endpoint_t.end.hpp"
SDK_VERIFY( struct tag::dcom_endpoint_t, 0x18 );
