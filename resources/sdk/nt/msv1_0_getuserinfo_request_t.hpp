#pragma once
#include <sdkgen/support_library.hpp>
#include "luid_t.hpp"
#include "msv1_0_protocol_message_type_t.hpp"

#include "magic/msv1_0_getuserinfo_request_t.start.hpp"
namespace nt
{
    // [struct _MSV1_0_GETUSERINFO_REQUEST]
    // => WDK 10 (NV)
    //
    struct msv1_0_getuserinfo_request_t                           
    {                                                             
        // WDK 10                                                 
        //                                                        
        _m00 enum nt::msv1_0_protocol_message_type_t message_type;  //{ +0x0000    } | .MessageType
        _m01 struct nt::luid_t                       logon_id;      //{ +0x0004    } | .LogonId
                                                                  
        SDK_NONVOL_PROPERTIES( "_MSV1_0_GETUSERINFO_REQUEST.$", 0x0, false, 0x3b9353b2247cfde8 );             
        SDK_FIXED_SIZE( msv1_0_getuserinfo_request_t, 0xc );             
    };                                                            
};
#include "magic/msv1_0_getuserinfo_request_t.end.hpp"
SDK_VERIFY( struct nt::msv1_0_getuserinfo_request_t, 0xc );
