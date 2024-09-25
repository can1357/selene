#pragma once
#include <sdkgen/support_library.hpp>
#include "../primarydata_t.hpp"
#include "../setvidpnsourceaddress_flags_t.hpp"

#include "magic/setvidpnsourceaddress_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_SETVIDPNSOURCEADDRESS]
    // => WDK 10 (NV)
    //
    struct setvidpnsourceaddress_t                                               
    {                                                                            
        // WDK 10                                                                
        //                                                                       
        _m00 uint32_t                                   vid_pn_source_id;          //{ +0x0000    } | .VidPnSourceId
        _m01 uint32_t                                   primary_segment;           //{ +0x0004    } | .PrimarySegment
        _m02 int64_t                                    primary_address;           //{ +0x0008    } | .PrimaryAddress
        _m03 void*                                      h_allocation;              //{ +0x0010    } | .hAllocation
        _m04 uint32_t                                   context_count;             //{ +0x0018    } | .ContextCount
        _m05 sdk::array<void*, 65>                      context;                   //{ +0x0020    } | .Context
        _m06 struct dxgk::setvidpnsourceaddress_flags_t flags;                     //{ +0x0228    } | .Flags
        _m07 uint32_t                                   duration;                  //{ +0x022c    } | .Duration
        _m08 sdk::array<struct dxgk::primarydata_t, 64> primary_data;              //{ +0x0230    } | .PrimaryData
        _m09 uint32_t                                   driver_private_data_size;  //{ +0x0830    } | .DriverPrivateDataSize
        _m10 void*                                      p_driver_private_data;     //{ +0x0838    } | .pDriverPrivateData
                                                                                 
        SDK_NONVOL_PROPERTIES( "_DXGKARG_SETVIDPNSOURCEADDRESS.$", 0x0, false, 0xc3b82b55655a61d9 );                         
        SDK_FIXED_SIZE( setvidpnsourceaddress_t, 0x840 );                         
    };                                                                           
};
#include "magic/setvidpnsourceaddress_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::setvidpnsourceaddress_t, 0x840 );
