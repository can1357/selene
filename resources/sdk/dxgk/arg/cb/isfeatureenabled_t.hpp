#pragma once
#include <sdkgen/support_library.hpp>
#include "../../feature_id_t.hpp"

#include "magic/isfeatureenabled_t.start.hpp"
namespace dxgk::arg::cb
{
    // [struct _DXGKARGCB_ISFEATUREENABLED]
    // => WDK 10 (NV)
    //
    struct isfeatureenabled_t                      
    {                                              
        // WDK 10                                  
        //                                         
        _m00 void*                   device_handle;  //{ +0x0000    } | .DeviceHandle
        _m01 enum dxgk::feature_id_t feature_id;     //{ +0x0008    } | .FeatureId
        _m02 uint8_t                 enabled;        //{ +0x000c    } | .Enabled
                                                   
        SDK_NONVOL_PROPERTIES( "_DXGKARGCB_ISFEATUREENABLED.$", 0x0, false, 0xfef4aa09d0acdbaa );              
        SDK_FIXED_SIZE( isfeatureenabled_t, 0x10 );              
    };                                             
};
#include "magic/isfeatureenabled_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::cb::isfeatureenabled_t, 0x10 );
