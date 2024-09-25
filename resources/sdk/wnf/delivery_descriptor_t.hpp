#pragma once
#include <sdkgen/support_library.hpp>
#include "type_id_t.hpp"
#include "state_name_t.hpp"

#include "magic/delivery_descriptor_t.start.hpp"
namespace wnf
{
    // [struct _WNF_DELIVERY_DESCRIPTOR]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct delivery_descriptor_t                        
    {                                                   
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                              
        _m00 uint64_t                 subscription_id;    //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .SubscriptionId
        _m01 struct wnf::state_name_t state_name;         //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .StateName
        _m02 uint32_t                 change_stamp;       //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .ChangeStamp
        _m03 uint32_t                 state_data_size;    //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .StateDataSize
        _m04 uint32_t                 event_mask;         //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .EventMask
        _m05 struct wnf::type_id_t    type_id;            //{ +0x001c    +0x001c    +0x001c    +0x001c    +0x001c    } | .TypeId
        _m06 uint32_t                 state_data_offset;  //{ +0x002c    +0x002c    +0x002c    +0x002c    +0x002c    } | .StateDataOffset
                                                        
        SDK_NONVOL_PROPERTIES( "_WNF_DELIVERY_DESCRIPTOR.$", 0x30, true, 0xa6e96b70fa34ce8c );                  
        SDK_FIXED_SIZE( delivery_descriptor_t, 0x30 );                  
    };                                                  
};
#include "magic/delivery_descriptor_t.end.hpp"
SDK_VERIFY( struct wnf::delivery_descriptor_t, 0x30 );
