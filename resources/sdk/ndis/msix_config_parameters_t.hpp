#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"
#include "msix_table_config_t.hpp"

#include "magic/msix_config_parameters_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_MSIX_CONFIG_PARAMETERS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct msix_config_parameters_t                          
    {                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                   
        _m00 struct ndis::object_header_t   header;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 enum ndis::msix_table_config_t config_operation;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ConfigOperation
        _m02 uint32_t                       table_entry;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .TableEntry
        _m03 uint32_t                       message_number;    //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .MessageNumber
                                                             
        SDK_MAGIC_PROPERTIES( "_NDIS_MSIX_CONFIG_PARAMETERS.$", 0x10, true, 0x15ebf4401a0b3e87 );                 
        SDK_FIXED_SIZE( msix_config_parameters_t, 0x10 );                 
    };                                                       
};
#include "magic/msix_config_parameters_t.end.hpp"
SDK_VERIFY( struct ndis::msix_config_parameters_t, 0x10 );
