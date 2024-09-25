#pragma once
#include <sdkgen/support_library.hpp>

namespace io { struct security_context_t; }

#include "magic/query_path_request_t.start.hpp"
namespace nt
{
    // [struct _QUERY_PATH_REQUEST]
    // => WDK 10 (NV)
    //
    struct query_path_request_t                              
    {                                                        
        // WDK 10                                            
        //                                                   
        _m00 uint32_t                       path_name_length;  //{ +0x0000    } | .PathNameLength
        _m01 struct io::security_context_t* security_context;  //{ +0x0008    } | .SecurityContext
        _m02 sdk::array<wchar_t, 1>         file_path_name;    //{ +0x0010    } | .FilePathName
                                                             
        SDK_NONVOL_PROPERTIES( "_QUERY_PATH_REQUEST.$", 0x0, false, 0xcd71fbe20da5176a );                 
        SDK_FIXED_SIZE( query_path_request_t, 0x18 );                 
    };                                                       
};
#include "magic/query_path_request_t.end.hpp"
SDK_VERIFY( struct nt::query_path_request_t, 0x18 );
