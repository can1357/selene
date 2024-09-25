#pragma once
#include <sdkgen/support_library.hpp>
#include "diag_type_t.hpp"

#include "magic/diag_header_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_DIAG_HEADER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct diag_header_t                            
    {                                               
        struct u0_u_t                               
        {                                           
            // Windows 10 v2004, Windows 11, Windows 10 v20H2                          
            //                                      
            _m07 uint32_t thread_id;                  //{ +0x0000    +0x0000    +0x0000    } | .ThreadId
            _m08 uint31_t session_id;                 //{ +0x0004@0  +0x0004@0  +0x0004@0  } | .SessionId
            _m09 uint1_t  all_session;                //{ +0x0004@31 +0x0004@31 +0x0004@31 } | .AllSession
                                                    
            SDK_MAGIC_PROPERTIES( "_DXGK_DIAG_HEADER.u.$", 0x8, true, 0xed187d279be8b584 );                          
            SDK_FIXED_SIZE( u0_u_t, 0x8 );                          
        };                                          
                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                          
        _m00 enum dxgk::diag_type_t   type;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Type
        _m01 uint32_t                 size;           //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Size
        _m02 uint64_t                 log_timestamp;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .LogTimestamp
        _m03 sdk::array<uint8_t, 16>  process_name;   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ProcessName
        _m04 uint64_t                 thread_id;      //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .ThreadId
        _m05 uint32_t                 index;          //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .Index
        _m06 uint32_t                 wd_log_idx;     //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .WdLogIdx
                                                    
        // Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                          
        _m10 u0_u_t                   u;              //{ +0x0020    +0x0020    +0x0020    } | .u
                                                    
        SDK_MAGIC_PROPERTIES( "_DXGK_DIAG_HEADER.$", 0x30, true, 0xc0149bf65da6b623 );              
        SDK_FIXED_SIZE( diag_header_t, 0x30 );              
    };                                              
};
#include "magic/diag_header_t.end.hpp"
SDK_VERIFY( struct dxgk::diag_header_t::u0_u_t, 0x8 );
SDK_VERIFY( struct dxgk::diag_header_t, 0x30 );
