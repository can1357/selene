#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/querydisplayidout_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_QUERYDISPLAYIDOUT]
    // => WDK 10 (NV)
    //
    struct querydisplayidout_t     
    {                              
        // WDK 10                  
        //                         
        _m00 uint32_t length;        //{ +0x0000    } | .Length
        _m01 uint8_t* p_descriptor;  //{ +0x0008    } | .pDescriptor
                                   
        SDK_NONVOL_PROPERTIES( "_DXGK_QUERYDISPLAYIDOUT.$", 0x0, false, 0x8149dcf51c297745 );             
        SDK_FIXED_SIZE( querydisplayidout_t, 0x10 );             
    };                             
};
#include "magic/querydisplayidout_t.end.hpp"
SDK_VERIFY( struct dxgk::querydisplayidout_t, 0x10 );
