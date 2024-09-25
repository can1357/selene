#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/c_ctx_chnl_t.start.hpp"
namespace win
{
    class i_face_entry_t;
    class c_std_wrapper_t;

    // [class CCtxChnl]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_ctx_chnl_t                                  
    {                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                              
        _m00 uint32_t                    dw_state;        //{ +0x0030    +0x0040    +0x0040    +0x0040    } | ._dwState
        _m01 class win::i_face_entry_t*  p_i_face_entry;  //{ +0x0038    +0x0048    +0x0048    +0x0048    } | ._pIFaceEntry
        _m02 class win::c_std_wrapper_t* p_std_wrapper;   //{ +0x0040    +0x0050    +0x0050    +0x0050    } | ._pStdWrapper
                                                        
        SDK_MAGIC_PROPERTIES( "CCtxChnl.$", 0x58, true, 0x512a192c4621cef2 );               
        SDK_DYNAMIC_SIZE( c_ctx_chnl_t );               
    };                                                  
};
#include "magic/c_ctx_chnl_t.end.hpp"
