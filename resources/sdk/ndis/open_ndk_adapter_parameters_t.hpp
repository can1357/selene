#pragma once
#include <sdkgen/support_library.hpp>
#include "ndk_version_t.hpp"

#include "magic/open_ndk_adapter_parameters_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_OPEN_NDK_ADAPTER_PARAMETERS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct open_ndk_adapter_parameters_t          
    {                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                                        
        _m00 struct ndis::ndk_version_t version;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint32_t                   switch_id;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .SwitchId
        _m02 uint32_t                   v_port_id;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .VPortId
                                                  
        SDK_MAGIC_PROPERTIES( "_NDIS_OPEN_NDK_ADAPTER_PARAMETERS.$", 0xc, true, 0xc46b795ba024af79 );          
        SDK_FIXED_SIZE( open_ndk_adapter_parameters_t, 0xc );          
    };                                            
};
#include "magic/open_ndk_adapter_parameters_t.end.hpp"
SDK_VERIFY( struct ndis::open_ndk_adapter_parameters_t, 0xc );
