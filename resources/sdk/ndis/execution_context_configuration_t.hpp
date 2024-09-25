#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct guid_t; }

#include "magic/execution_context_configuration_t.start.hpp"
namespace ndis
{
    struct execution_context_runtime_knobs_t;

    // [struct _EXECUTION_CONTEXT_CONFIGURATION]
    // => Windows 11
    //
    struct execution_context_configuration_t               
    {                                                      
        using runtime_knobs_t = const struct ndis::execution_context_runtime_knobs_t*;                     
                                                           
        // Windows 11                                      
        //                                                 
        _m00 uint32_t                 size;                  //{ +0x0000    } | .Size
        _m01 runtime_knobs_t          runtime_knobs;         //{ +0x0008    } | .RuntimeKnobs
        _m02 const struct nt::guid_t* client_identifier;     //{ +0x0010    } | .ClientIdentifier
        _m03 nt::unicode_view         client_friendly_name;  //{ +0x0018    } | .ClientFriendlyName
                                                           
        SDK_MAGIC_PROPERTIES( "_EXECUTION_CONTEXT_CONFIGURATION.$", 0x0, false, 0x6b38036036fdef19 );                     
        SDK_FIXED_SIZE( execution_context_configuration_t, 0x28 );                     
    };                                                     
};
#include "magic/execution_context_configuration_t.end.hpp"
SDK_VERIFY( struct ndis::execution_context_configuration_t, 0x28 );
