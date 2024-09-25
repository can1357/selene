#pragma once
#include <sdkgen/support_library.hpp>

namespace io { struct security_context_t; }

#include "magic/query_path_request_ex_t.start.hpp"
namespace nt
{
    struct ejob_t;
    struct ecp_list_t;

    // [struct _QUERY_PATH_REQUEST_EX]
    // => WDK 10 (NV)
    //
    struct query_path_request_ex_t                              
    {                                                           
        // WDK 10                                               
        //                                                      
        _m00 struct io::security_context_t* p_security_context;   //{ +0x0000    } | .pSecurityContext
        _m01 uint32_t                       ea_length;            //{ +0x0008    } | .EaLength
        _m02 void*                          p_ea_buffer;          //{ +0x0010    } | .pEaBuffer
        _m03 nt::unicode_view               path_name;            //{ +0x0018    } | .PathName
        _m04 nt::unicode_view               domain_service_name;  //{ +0x0028    } | .DomainServiceName
        _m05 struct nt::ecp_list_t*         ecp_list;             //{ +0x0038    } | .EcpList
        _m06 struct nt::ejob_t*             silo;                 //{ +0x0040    } | .Silo
                                                                
        SDK_NONVOL_PROPERTIES( "_QUERY_PATH_REQUEST_EX.$", 0x0, false, 0xe771fca22f8bae92 );                    
        SDK_FIXED_SIZE( query_path_request_ex_t, 0x50 );                    
    };                                                          
};
#include "magic/query_path_request_ex_t.end.hpp"
SDK_VERIFY( struct nt::query_path_request_ex_t, 0x50 );
