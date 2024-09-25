#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/transferflags_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_TRANSFERFLAGS]
    // => WDK 10 (NV)
    //
    struct transferflags_t               
    {                                    
        // WDK 10                        
        //                               
        _m00 uint1_t  swizzle;             //{ +0x0000@0  } | .Swizzle
        _m01 uint1_t  unswizzle;           //{ +0x0000@1  } | .Unswizzle
        _m02 uint1_t  allocation_is_idle;  //{ +0x0000@2  } | .AllocationIsIdle
        _m03 uint1_t  transfer_start;      //{ +0x0000@3  } | .TransferStart
        _m04 uint1_t  transfer_end;        //{ +0x0000@4  } | .TransferEnd
        _m05 uint32_t value;               //{ +0x0000    } | .Value
                                         
        SDK_NONVOL_PROPERTIES( "_DXGK_TRANSFERFLAGS.$", 0x0, false, 0xd304eb797d702f5f );                   
        SDK_FIXED_SIZE( transferflags_t, 0x4 );                   
    };                                   
};
#include "magic/transferflags_t.end.hpp"
SDK_VERIFY( struct dxgk::transferflags_t, 0x4 );
