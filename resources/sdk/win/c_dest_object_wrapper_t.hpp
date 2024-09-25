#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/c_dest_object_wrapper_t.start.hpp"
namespace win
{
    struct i_dest_info_t;

    // [class CDestObjectWrapper]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_dest_object_wrapper_t                     
    {                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                            
        _m00 int32_t                    m_c_ref;        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .m_cRef
        _m01 struct win::i_dest_info_t* m_p_idi;        //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .m_pIDI
                                                      
        // Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                            
        _m02 const uint32_t             m_dw_dest_ctx;  //{ +0x0014    +0x0014    +0x0014    } | .m_dwDestCtx
                                                      
        SDK_MAGIC_PROPERTIES( "CDestObjectWrapper.$", 0x20, true, 0x7eb83a91b6f10f94 );              
        SDK_FIXED_SIZE( c_dest_object_wrapper_t, 0x20 );              
    };                                                
};
#include "magic/c_dest_object_wrapper_t.end.hpp"
SDK_VERIFY( class win::c_dest_object_wrapper_t, 0x20 );
