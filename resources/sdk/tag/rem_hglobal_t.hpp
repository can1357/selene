#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/rem_hglobal_t.start.hpp"
namespace tag
{
    // [struct tagRemHGLOBAL]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct rem_hglobal_t                            
    {                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                          
        _m00 int32_t                f_null_h_global;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .fNullHGlobal
        _m01 uint32_t               cb_data;          //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .cbData
        _m02 sdk::array<uint8_t, 1> data;             //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .data
                                                    
        SDK_MAGIC_PROPERTIES( "tagRemHGLOBAL.$", 0xc, true, 0x919c016485b753ad );                
        SDK_FIXED_SIZE( rem_hglobal_t, 0xc );                
    };                                              
};
#include "magic/rem_hglobal_t.end.hpp"
SDK_VERIFY( struct tag::rem_hglobal_t, 0xc );
