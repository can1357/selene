#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct event_filter_descriptor_t; }
namespace nt { struct guid_t;                    }

#include "magic/provider_t.start.hpp"
namespace tlg
{
    // [struct _tlgProvider_t]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct provider_t                                          
    {                                                          
        using enable_callback_t = sdk::function<void(const struct nt::guid_t*, uint32_t, uint8_t, uint64_t, uint64_t, struct nt::event_filter_descriptor_t*, void*)>*;                      
                                                               
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                     
        _m00 uint32_t                    level_plus1;            //{ +0x0000    +0x0000    +0x0000    } | .LevelPlus1
        _m01 __unaligned const uint16_t* provider_metadata_ptr;  //{ +0x0008    +0x0008    +0x0008    } | .ProviderMetadataPtr
        _m02 uint64_t                    keyword_any;            //{ +0x0010    +0x0010    +0x0010    } | .KeywordAny
        _m03 uint64_t                    keyword_all;            //{ +0x0018    +0x0018    +0x0018    } | .KeywordAll
        _m04 uint64_t                    reg_handle;             //{ +0x0020    +0x0020    +0x0020    } | .RegHandle
        _m05 enable_callback_t           enable_callback;        //{ +0x0028    +0x0028    +0x0028    } | .EnableCallback
        _m06 void*                       callback_context;       //{ +0x0030    +0x0030    +0x0030    } | .CallbackContext
                                                               
        SDK_MAGIC_PROPERTIES( "_tlgProvider_t.$", 0x38, true, 0x1bf29baddbec8ac7 );                      
        SDK_FIXED_SIZE( provider_t, 0x38 );                      
    };                                                         
};
#include "magic/provider_t.end.hpp"
SDK_VERIFY( struct tlg::provider_t, 0x38 );
