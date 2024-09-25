#pragma once
#include <sdkgen/support_library.hpp>
#include "co_specific_parameters_t.hpp"

#include "magic/co_media_parameters_t.start.hpp"
namespace ndis
{
    // [struct _CO_MEDIA_PARAMETERS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct co_media_parameters_t                                     
    {                                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                           
        _m00 uint32_t                              flags;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Flags
        _m01 uint32_t                              receive_priority;   //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ReceivePriority
        _m02 uint32_t                              receive_size_hint;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ReceiveSizeHint
        _m03 struct ndis::co_specific_parameters_t media_specific;     //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .MediaSpecific
                                                                     
        SDK_MAGIC_PROPERTIES( "_CO_MEDIA_PARAMETERS.$", 0x20, true, 0x56e704ef43590056 );                  
        SDK_FIXED_SIZE( co_media_parameters_t, 0x20 );                  
    };                                                               
};
#include "magic/co_media_parameters_t.end.hpp"
SDK_VERIFY( struct ndis::co_media_parameters_t, 0x20 );
