#pragma once
#include <sdkgen/support_library.hpp>
#include "rfc6877_464xlat_offload_options_t.hpp"

#include "magic/rfc6877_464xlat_offload_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_RFC6877_464XLAT_OFFLOAD]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct rfc6877_464xlat_offload_t                                   
    {                                                                  
        // Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                                             
        _m00 enum ndis::rfc6877_464xlat_offload_options_t xlat_offload;  //{ +0x0000    +0x0000    +0x0000    } | .XlatOffload
        _m01 uint32_t                                     flags;         //{ +0x0004    +0x0004    +0x0004    } | .Flags
                                                                       
        SDK_MAGIC_PROPERTIES( "_NDIS_RFC6877_464XLAT_OFFLOAD.$", 0x8, true, 0x88d045239810ca92 );             
        SDK_FIXED_SIZE( rfc6877_464xlat_offload_t, 0x8 );              
    };                                                                 
};
#include "magic/rfc6877_464xlat_offload_t.end.hpp"
SDK_VERIFY( struct ndis::rfc6877_464xlat_offload_t, 0x8 );
