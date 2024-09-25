#pragma once
#include <sdkgen/support_library.hpp>
#include "../rtl/bitmap_t.hpp"

namespace nt { struct mmpte_t; }

#include "magic/driver_va_t.start.hpp"
namespace mi
{
    struct driver_va_t;

    // [struct _MI_DRIVER_VA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct driver_va_t                           
    {                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                       
        _m00 struct mi::driver_va_t* next;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Next
        _m01 struct nt::mmpte_t*     pointer_pte;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .PointerPte
        _m02 struct rtl::bitmap_t    bit_map;      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .BitMap
        _m03 uint32_t                hint;         //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Hint
                                                 
        // Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                       
        _m04 uint32_t                flags;        //{ +0x0024    +0x0024    +0x0024    } | .Flags
                                                 
        SDK_MAGIC_PROPERTIES( "_MI_DRIVER_VA.$", 0x28, true, 0xff2f1b48003b8d7f );            
        SDK_FIXED_SIZE( driver_va_t, 0x28 );            
    };                                           
};
#include "magic/driver_va_t.end.hpp"
SDK_VERIFY( struct mi::driver_va_t, 0x28 );
