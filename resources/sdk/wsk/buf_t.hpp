#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct mdl_t; }

#include "magic/buf_t.start.hpp"
namespace wsk
{
    // [struct _WSK_BUF]
    // => WDK 10 (NV)
    //
    struct buf_t                      
    {                                 
        // WDK 10                     
        //                            
        _m00 struct nt::mdl_t* mdl;     //{ +0x0000    } | .Mdl
        _m01 uint32_t          offset;  //{ +0x0008    } | .Offset
        _m02 uint64_t          length;  //{ +0x0010    } | .Length
                                      
        SDK_NONVOL_PROPERTIES( "_WSK_BUF.$", 0x0, false, 0xfc41a551bdc3cecb );       
        SDK_FIXED_SIZE( buf_t, 0x18 );       
    };                                
};
#include "magic/buf_t.end.hpp"
SDK_VERIFY( struct wsk::buf_t, 0x18 );
