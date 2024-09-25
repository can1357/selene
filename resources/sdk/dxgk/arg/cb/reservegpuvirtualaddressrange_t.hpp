#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/reservegpuvirtualaddressrange_t.start.hpp"
namespace dxgk::arg::cb
{
    // [struct _DXGKARGCB_RESERVEGPUVIRTUALADDRESSRANGE]
    // => WDK 10 (NV)
    //
    struct reservegpuvirtualaddressrange_t    
    {                                         
        // WDK 10                             
        //                                    
        _m00 void*    h_dxgk_process;           //{ +0x0000    } | .hDxgkProcess
        _m01 uint64_t size_in_bytes;            //{ +0x0008    } | .SizeInBytes
        _m02 uint32_t alignment;                //{ +0x0010    } | .Alignment
        _m03 uint64_t start_virtual_address;    //{ +0x0018    } | .StartVirtualAddress
        _m04 uint64_t base_address;             //{ +0x0020    } | .BaseAddress
        _m05 uint1_t  allow_user_mode_mapping;  //{ +0x0028@0  } | .AllowUserModeMapping
        _m06 uint32_t flags;                    //{ +0x0028    } | .Flags
                                              
        SDK_NONVOL_PROPERTIES( "_DXGKARGCB_RESERVEGPUVIRTUALADDRESSRANGE.$", 0x0, false, 0x2e1800b440ce11e1 );                        
        SDK_FIXED_SIZE( reservegpuvirtualaddressrange_t, 0x30 );                        
    };                                        
};
#include "magic/reservegpuvirtualaddressrange_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::cb::reservegpuvirtualaddressrange_t, 0x30 );
