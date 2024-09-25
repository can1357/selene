#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cor_secattr_t.start.hpp"
namespace win
{
    // [struct COR_SECATTR]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cor_secattr_t                     
    {                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                   
        _m00 uint32_t    tk_ctor;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .tkCtor
        _m01 const void* p_custom_attribute;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pCustomAttribute
        _m02 uint32_t    cb_custom_attribute;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .cbCustomAttribute
                                             
        SDK_MAGIC_PROPERTIES( "COR_SECATTR.$", 0x18, true, 0xccf7bd78a8fca83e );                    
        SDK_FIXED_SIZE( cor_secattr_t, 0x18 );                    
    };                                       
};
#include "magic/cor_secattr_t.end.hpp"
SDK_VERIFY( struct win::cor_secattr_t, 0x18 );
