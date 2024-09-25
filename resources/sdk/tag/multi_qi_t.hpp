#pragma once
#include <sdkgen/support_library.hpp>

namespace nt  { struct guid_t;      }
namespace win { struct i_unknown_t; }

#include "magic/multi_qi_t.start.hpp"
namespace tag
{
    // [struct tagMULTI_QI]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct multi_qi_t                       
    {                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                                  
        _m00 const struct nt::guid_t* p_iid;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pIID
        _m01 struct win::i_unknown_t* p_itf;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pItf
        _m02 sdk::hresult             hr;     //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .hr
                                            
        SDK_MAGIC_PROPERTIES( "tagMULTI_QI.$", 0x18, true, 0xa0a1d0a0f7eff525 );      
        SDK_FIXED_SIZE( multi_qi_t, 0x18 );      
    };                                      
};
#include "magic/multi_qi_t.end.hpp"
SDK_VERIFY( struct tag::multi_qi_t, 0x18 );
