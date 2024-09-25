#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/querydisplayidin_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_QUERYDISPLAYIDIN]
    // => WDK 10 (NV)
    //
    struct querydisplayidin_t   
    {                           
        // WDK 10               
        //                      
        _m00 uint32_t target_id;  //{ +0x0000    } | .TargetId
                                
        SDK_NONVOL_PROPERTIES( "_DXGK_QUERYDISPLAYIDIN.$", 0x0, false, 0xed46cba20b557967 );          
        SDK_FIXED_SIZE( querydisplayidin_t, 0x4 );          
    };                          
};
#include "magic/querydisplayidin_t.end.hpp"
SDK_VERIFY( struct dxgk::querydisplayidin_t, 0x4 );
