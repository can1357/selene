#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"
#include "if_provider_characteristics_t.hpp"

#include "magic/if_provider_block_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_IF_PROVIDER_BLOCK]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct if_provider_block_t                                                   
    {                                                                            
        // Windows 10 v1607                                                      
        //                                                                       
        _m00 struct ndis::object_header_t               header;                    //{ +0x0000    } | .Header
        _m01 nt::list_entry_t                           link;                      //{ +0x0008    } | .Link
        _m02 nt::list_entry_t                           if_list;                   //{ +0x0018    } | .IfList
        _m03 void*                                      if_provider_context;       //{ +0x0028    } | .IfProviderContext
        _m04 struct ndis::if_provider_characteristics_t provider_characteristics;  //{ +0x0030    } | .ProviderCharacteristics
                                                                                 
        SDK_MAGIC_PROPERTIES( "_NDIS_IF_PROVIDER_BLOCK.$", 0x0, true, 0x32b0c8e66ad86f6e );                         
        SDK_DYNAMIC_SIZE( if_provider_block_t );                                 
    };                                                                           
};
#include "magic/if_provider_block_t.end.hpp"
