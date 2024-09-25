#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"
#include "../rtl/query_registry_table_t.hpp"

#include "magic/wrapper_configuration_handle_t.start.hpp"
namespace ndis
{
    struct miniport_block_t;

    // [struct _NDIS_WRAPPER_CONFIGURATION_HANDLE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wrapper_configuration_handle_t                          
    {                                                              
        using parameters_query_table_t = sdk::array<struct rtl::query_registry_table_t, 2>;                       
                                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                         
        _m00 struct ndis::object_header_t   header;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 struct ndis::miniport_block_t* miniport;                //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Miniport
        _m02 uint32_t                       flags;                   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Flags
        _m03 parameters_query_table_t       parameters_query_table;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ParametersQueryTable
                                                                   
        SDK_MAGIC_PROPERTIES( "_NDIS_WRAPPER_CONFIGURATION_HANDLE.$", 0x88, true, 0xe2f62dfa77e4edfd );                       
        SDK_FIXED_SIZE( wrapper_configuration_handle_t, 0x88 );                       
    };                                                             
};
#include "magic/wrapper_configuration_handle_t.end.hpp"
SDK_VERIFY( struct ndis::wrapper_configuration_handle_t, 0x88 );
