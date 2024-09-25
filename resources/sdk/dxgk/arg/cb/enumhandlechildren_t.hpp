#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/enumhandlechildren_t.start.hpp"
namespace dxgk::arg::cb
{
    // [struct _DXGKARGCB_ENUMHANDLECHILDREN]
    // => WDK 10 (NV)
    //
    struct enumhandlechildren_t
    {                          
        // WDK 10              
        //                     
        _m00 uint32_t h_object;  //{ +0x0000    } | .hObject
        _m01 uint32_t index;     //{ +0x0004    } | .Index
                               
        SDK_NONVOL_PROPERTIES( "_DXGKARGCB_ENUMHANDLECHILDREN.$", 0x0, false, 0x1ba5e93b80b294e7 );         
        SDK_FIXED_SIZE( enumhandlechildren_t, 0x8 );         
    };                         
};
#include "magic/enumhandlechildren_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::cb::enumhandlechildren_t, 0x8 );
