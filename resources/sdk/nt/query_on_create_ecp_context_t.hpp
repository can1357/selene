#pragma once
#include <sdkgen/support_library.hpp>
#include "query_on_create_ea_information_t.hpp"
#include "query_on_create_file_lx_information_t.hpp"
#include "query_on_create_file_stat_information_t.hpp"

#include "magic/query_on_create_ecp_context_t.start.hpp"
namespace nt
{
    // [struct _QUERY_ON_CREATE_ECP_CONTEXT]
    // => WDK 10 (NV)
    //
    struct query_on_create_ecp_context_t                                           
    {                                                                              
        using stat_information_t = struct nt::query_on_create_file_stat_information_t;                     
                                                                                   
        // WDK 10                                                                  
        //                                                                         
        _m00 uint32_t                                         requested_classes;     //{ +0x0000    } | .RequestedClasses
        _m01 uint32_t                                         classes_processed;     //{ +0x0004    } | .ClassesProcessed
        _m02 uint32_t                                         classes_with_errors;   //{ +0x0008    } | .ClassesWithErrors
        _m03 uint32_t                                         classes_with_no_data;  //{ +0x000c    } | .ClassesWithNoData
        _m04 stat_information_t                               stat_information;      //{ +0x0010    } | .StatInformation
        _m05 struct nt::query_on_create_file_lx_information_t lx_information;        //{ +0x0058    } | .LxInformation
        _m06 struct nt::query_on_create_ea_information_t      ea_information;        //{ +0x0078    } | .EaInformation
                                                                                   
        SDK_NONVOL_PROPERTIES( "_QUERY_ON_CREATE_ECP_CONTEXT.$", 0x0, false, 0xa889855591d02f8f );                     
        SDK_FIXED_SIZE( query_on_create_ecp_context_t, 0x88 );                     
    };                                                                             
};
#include "magic/query_on_create_ecp_context_t.end.hpp"
SDK_VERIFY( struct nt::query_on_create_ecp_context_t, 0x88 );
