#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/c_ctx_com_chnl_t.start.hpp"
namespace win
{
    class oxid_entry_t;
    class c_std_identity_t;

    // [class CCtxComChnl]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_ctx_com_chnl_t                                      
    {                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                                      
        _m00 class win::c_std_identity_t const* p_std_id;         //{ +0x0020    +0x0030    +0x0030    +0x0030    } | ._pStdId
        _m01 class win::oxid_entry_t const*     p_oxid_entry;     //{ +0x0028    +0x0038    +0x0038    +0x0038    } | ._pOXIDEntry
        _m02 const bool                         b_free_threaded;  //{ +0x0030    +0x0040    +0x0040    +0x0040    } | ._bFreeThreaded
        _m03 const uint32_t                     dw_apt_id;        //{ +0x0034    +0x0044    +0x0044    +0x0044    } | ._dwAptId
                                                                
        SDK_MAGIC_PROPERTIES( "CCtxComChnl.$", 0x48, true, 0x48fb9d1684e22807 );                
        SDK_DYNAMIC_SIZE( c_ctx_com_chnl_t );                   
    };                                                          
};
#include "magic/c_ctx_com_chnl_t.end.hpp"
