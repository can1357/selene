#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"

#include "magic/shared_memory_provider_characteristics_t.start.hpp"
namespace ndis
{
    struct shared_memory_parameters_t;

    // [struct _NDIS_SHARED_MEMORY_PROVIDER_CHARACTERISTICS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct shared_memory_provider_characteristics_t                            
    {                                                                          
        using allocate_shared_memory_handler_t = sdk::function<int32_t(void*, struct ndis::shared_memory_parameters_t*, void**)>*;                               
                                                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                               
        //                                                                     
        _m00 struct ndis::object_header_t       header;                          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                           flags;                           //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 void*                              provider_context;                //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ProviderContext
        _m03 allocate_shared_memory_handler_t   allocate_shared_memory_handler;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .AllocateSharedMemoryHandler
        _m04 sdk::function<void(void*, void*)>* free_shared_memory_handler;      //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .FreeSharedMemoryHandler
                                                                               
        SDK_MAGIC_PROPERTIES( "_NDIS_SHARED_MEMORY_PROVIDER_CHARACTERISTICS.$", 0x20, true, 0x3847b0a26d7c0be8 );                               
        SDK_FIXED_SIZE( shared_memory_provider_characteristics_t, 0x20 );                               
    };                                                                         
};
#include "magic/shared_memory_provider_characteristics_t.end.hpp"
SDK_VERIFY( struct ndis::shared_memory_provider_characteristics_t, 0x20 );
