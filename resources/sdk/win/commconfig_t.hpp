#pragma once
#include <sdkgen/support_library.hpp>
#include "dcb_t.hpp"

#include "magic/commconfig_t.start.hpp"
namespace win
{
    // [struct _COMMCONFIG]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct commconfig_t                                  
    {                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                               
        _m00 uint32_t               dw_size;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwSize
        _m01 uint16_t               w_version;             //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .wVersion
        _m02 uint16_t               w_reserved;            //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .wReserved
        _m03 struct win::dcb_t      dcb;                   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .dcb
        _m04 uint32_t               dw_provider_sub_type;  //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .dwProviderSubType
        _m05 uint32_t               dw_provider_offset;    //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .dwProviderOffset
        _m06 uint32_t               dw_provider_size;      //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .dwProviderSize
        _m07 sdk::array<wchar_t, 1> wc_provider_data;      //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .wcProviderData
                                                         
        SDK_MAGIC_PROPERTIES( "_COMMCONFIG.$", 0x34, true, 0xc0aa687f9fadaaec );                     
        SDK_FIXED_SIZE( commconfig_t, 0x34 );                     
    };                                                   
};
#include "magic/commconfig_t.end.hpp"
SDK_VERIFY( struct win::commconfig_t, 0x34 );
