#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"

#include "magic/provider_chimney_offload_generic_characteristics_t.start.hpp"
namespace ndis
{
    struct miniport_offload_block_list_t;

    // [struct _NDIS_PROVIDER_CHIMNEY_OFFLOAD_GENERIC_CHARACTERISTICS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct provider_chimney_offload_generic_characteristics_t         
    {                                                                 
        using initiate_offload_handler_t =   sdk::function<void(void*, struct ndis::miniport_offload_block_list_t*)>*;                           
        using terminate_offload_handler_t =  sdk::function<void(void*, struct ndis::miniport_offload_block_list_t*)>*;                           
        using update_offload_handler_t =     sdk::function<void(void*, struct ndis::miniport_offload_block_list_t*)>*;                           
        using invalidate_offload_handler_t = sdk::function<void(void*, struct ndis::miniport_offload_block_list_t*)>*;                           
        using query_offload_handler_t =      sdk::function<void(void*, struct ndis::miniport_offload_block_list_t*)>*;                           
                                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                                            
        _m00 struct ndis::object_header_t  header;                      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                      flags;                       //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 initiate_offload_handler_t    initiate_offload_handler;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .InitiateOffloadHandler
        _m03 terminate_offload_handler_t   terminate_offload_handler;   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .TerminateOffloadHandler
        _m04 update_offload_handler_t      update_offload_handler;      //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .UpdateOffloadHandler
        _m05 invalidate_offload_handler_t  invalidate_offload_handler;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .InvalidateOffloadHandler
        _m06 query_offload_handler_t       query_offload_handler;       //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .QueryOffloadHandler
                                                                      
        SDK_MAGIC_PROPERTIES( "_NDIS_PROVIDER_CHIMNEY_OFFLOAD_GENERIC_CHARACTERISTICS.$", 0x30, true, 0xf26c7874624ec8f5 );                           
        SDK_FIXED_SIZE( provider_chimney_offload_generic_characteristics_t, 0x30 );                           
    };                                                                
};
#include "magic/provider_chimney_offload_generic_characteristics_t.end.hpp"
SDK_VERIFY( struct ndis::provider_chimney_offload_generic_characteristics_t, 0x30 );
