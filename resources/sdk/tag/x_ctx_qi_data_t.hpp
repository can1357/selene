#pragma once
#include <sdkgen/support_library.hpp>

namespace nt  { struct guid_t;         }
namespace win { class c_std_wrapper_t; }
namespace win { class i_face_entry_t;  }

#include "magic/x_ctx_qi_data_t.start.hpp"
namespace tag
{
    // [struct tagXCtxQIData]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct x_ctx_qi_data_t                             
    {                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                             
        _m00 const struct nt::guid_t*    p_iid;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pIID
        _m01 class win::c_std_wrapper_t* p_std_wrapper;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pStdWrapper
        _m02 class win::i_face_entry_t*  p_entry;        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .pEntry
                                                       
        SDK_MAGIC_PROPERTIES( "tagXCtxQIData.$", 0x18, true, 0xa68919d4103f8985 );              
        SDK_FIXED_SIZE( x_ctx_qi_data_t, 0x18 );              
    };                                                 
};
#include "magic/x_ctx_qi_data_t.end.hpp"
SDK_VERIFY( struct tag::x_ctx_qi_data_t, 0x18 );
