#pragma once
#include <sdkgen/support_library.hpp>
#include "../createdeviceflags_t.hpp"

namespace dxgk { struct deviceinfo_t; }

#include "magic/createdevice_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_CREATEDEVICE]
    // => WDK 10 (NV)
    //
    struct createdevice_t                                   
    {                                                       
        // WDK 10                                           
        //                                                  
        _m00 void*                            h_device;       //{ +0x0000    } | .hDevice
        _m01 struct dxgk::createdeviceflags_t flags;          //{ +0x0008    } | .Flags
        _m02 struct dxgk::deviceinfo_t*       p_info;         //{ +0x0008    } | .pInfo
        _m03 uint32_t                         pasid;          //{ +0x0010    } | .Pasid
        _m04 void*                            h_kmd_process;  //{ +0x0018    } | .hKmdProcess
                                                            
        SDK_NONVOL_PROPERTIES( "_DXGKARG_CREATEDEVICE.$", 0x0, false, 0xbb1d6bccf919c0cf );              
        SDK_FIXED_SIZE( createdevice_t, 0x20 );              
    };                                                      
};
#include "magic/createdevice_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::createdevice_t, 0x20 );
