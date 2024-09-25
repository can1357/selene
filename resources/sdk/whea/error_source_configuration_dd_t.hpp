#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/error_source_configuration_dd_t.start.hpp"
namespace whea
{
    // [struct _WHEA_ERROR_SOURCE_CONFIGURATION_DD]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct error_source_configuration_dd_t                           
    {                                                                
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                                           
        _m00 sdk::function<uint32_t(void*, uint32_t)>*  initialize;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Initialize
        _m01 sdk::function<void(void*)>*                uninitialize;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Uninitialize
        _m02 sdk::function<uint32_t(void*, uint32_t*)>* correct;       //{ +0x0018    +0x0010    +0x0010    +0x0010    } | .Correct
                                                                     
        // WDK 10                                                    
        //                                                           
        _m03 sdk::function<void(void*, void*)>*         ready;         //{ +0x0010    } | .Ready
                                                                     
        SDK_MAGIC_PROPERTIES( "_WHEA_ERROR_SOURCE_CONFIGURATION_DD.$", 0x18, true, 0x718900ec7e0bb38c );             
        SDK_DYNAMIC_SIZE( error_source_configuration_dd_t );             
    };                                                               
};
#include "magic/error_source_configuration_dd_t.end.hpp"
