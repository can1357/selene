#pragma once
#include <sdkgen/support_library.hpp>
#include "../gpuengine_t.hpp"

#include "magic/getgpuengines_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_GETGPUENGINES]
    // => WDK 10 (NV)
    //
    struct getgpuengines_t                                       
    {                                                            
        // WDK 10                                                
        //                                                       
        _m00 uint32_t                                num_engines;  //{ +0x0000    } | .NumEngines
        _m01 sdk::array<struct dxgk::gpuengine_t, 1> engine_info;  //{ +0x0004    } | .EngineInfo
                                                                 
        SDK_NONVOL_PROPERTIES( "_DXGKARG_GETGPUENGINES.$", 0x0, false, 0xafd492eb0386b232 );            
        SDK_FIXED_SIZE( getgpuengines_t, 0x4c );                 
    };                                                           
};
#include "magic/getgpuengines_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::getgpuengines_t, 0x4c );
