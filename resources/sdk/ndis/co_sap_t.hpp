#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/co_sap_t.start.hpp"
namespace ndis
{
    // [struct CO_SAP]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct co_sap_t                            
    {                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                     
        _m00 uint32_t               sap_type;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SapType
        _m01 uint32_t               sap_length;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .SapLength
        _m02 sdk::array<uint8_t, 1> sap;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Sap
                                               
        SDK_MAGIC_PROPERTIES( "CO_SAP.$", 0xc, true, 0x1d9089c85f931a80 );           
        SDK_FIXED_SIZE( co_sap_t, 0xc );           
    };                                         
};
#include "magic/co_sap_t.end.hpp"
SDK_VERIFY( struct ndis::co_sap_t, 0xc );
