#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

namespace win { struct i_bind_ctx_t; }
namespace win { struct i_unknown_t;  }

#include "magic/start_param_t.start.hpp"
namespace tag
{
    // [struct _tagStartParam]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct start_param_t                            
    {                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                          
        _m00 struct nt::guid_t         iid;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .iid
        _m01 struct win::i_bind_ctx_t* p_i_bind_ctx;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .pIBindCtx
        _m02 struct win::i_unknown_t*  p_itf;         //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .pItf
                                                    
        SDK_MAGIC_PROPERTIES( "_tagStartParam.$", 0x20, true, 0x1e7a0ad0a1baa385 );             
        SDK_FIXED_SIZE( start_param_t, 0x20 );             
    };                                              
};
#include "magic/start_param_t.end.hpp"
SDK_VERIFY( struct tag::start_param_t, 0x20 );
