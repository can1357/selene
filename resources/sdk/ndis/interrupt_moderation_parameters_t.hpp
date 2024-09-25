#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"
#include "interrupt_moderation_t.hpp"

#include "magic/interrupt_moderation_parameters_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_INTERRUPT_MODERATION_PARAMETERS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct interrupt_moderation_parameters_t                        
    {                                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                          
        _m00 struct ndis::object_header_t      header;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                          flags;                 //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 enum ndis::interrupt_moderation_t interrupt_moderation;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .InterruptModeration
                                                                    
        SDK_MAGIC_PROPERTIES( "_NDIS_INTERRUPT_MODERATION_PARAMETERS.$", 0xc, true, 0xe154434ddddecc );                     
        SDK_FIXED_SIZE( interrupt_moderation_parameters_t, 0xc );                     
    };                                                              
};
#include "magic/interrupt_moderation_parameters_t.end.hpp"
SDK_VERIFY( struct ndis::interrupt_moderation_parameters_t, 0xc );
