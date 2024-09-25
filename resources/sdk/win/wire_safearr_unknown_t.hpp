#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/wire_safearr_unknown_t.start.hpp"
namespace win
{
    struct i_unknown_t;

    // [struct _wireSAFEARR_UNKNOWN]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wire_safearr_unknown_t                 
    {                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                        
        _m00 uint32_t                  size;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 struct win::i_unknown_t** ap_unknown;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .apUnknown
                                                  
        SDK_MAGIC_PROPERTIES( "_wireSAFEARR_UNKNOWN.$", 0x10, true, 0xd382760fe8028588 );           
        SDK_FIXED_SIZE( wire_safearr_unknown_t, 0x10 );           
    };                                            
};
#include "magic/wire_safearr_unknown_t.end.hpp"
SDK_VERIFY( struct win::wire_safearr_unknown_t, 0x10 );
