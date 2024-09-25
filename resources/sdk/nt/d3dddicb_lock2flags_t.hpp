#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/d3dddicb_lock2flags_t.start.hpp"
namespace nt
{
    // [struct _D3DDDICB_LOCK2FLAGS]
    // => WDK 10 (NV)
    //
    struct d3dddicb_lock2flags_t
    {                           
        // WDK 10           
        //                  
        _m00 uint32_t value;      //{ +0x0000    } | .Value
                                
        SDK_NONVOL_PROPERTIES( "_D3DDDICB_LOCK2FLAGS.$", 0x0, false, 0xee404686594a1203 );      
        SDK_FIXED_SIZE( d3dddicb_lock2flags_t, 0x4 );      
    };                          
};
#include "magic/d3dddicb_lock2flags_t.end.hpp"
SDK_VERIFY( struct nt::d3dddicb_lock2flags_t, 0x4 );
