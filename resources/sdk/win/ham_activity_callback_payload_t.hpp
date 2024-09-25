#pragma once
#include <sdkgen/support_library.hpp>
#include "ham_terminate_reason_t.hpp"
#include "ham_activity_started_payload_t.hpp"
#include "ham_activity_callback_subject_t.hpp"
#include "ham_activity_stop_request_type_t.hpp"
#include "ham_activity_stop_request_reason_t.hpp"

#include "magic/ham_activity_callback_payload_t.start.hpp"
namespace win
{
    // [struct _HAM_ACTIVITY_CALLBACK_PAYLOAD]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ham_activity_callback_payload_t                                                     
    {                                                                                          
        struct u0_stop_request_t                                                               
        {                                                                                      
            // Windows 10 v2004, Windows 11, Windows 10 v20H2                                  
            //                                                                                 
            _m03 enum win::ham_activity_stop_request_type_t   type;                              //{ +0x0000    +0x0000    +0x0000    } | .Type
            _m04 enum win::ham_activity_stop_request_reason_t reason;                            //{ +0x0004    +0x0004    +0x0004    } | .Reason
            _m05 enum win::ham_terminate_reason_t             terminate_reason;                  //{ +0x0008    +0x0008    +0x0008    } | .TerminateReason
            _m06 uint32_t                                     failure_code;                      //{ +0x000c    +0x000c    +0x000c    } | .FailureCode
                                                                                               
            SDK_MAGIC_PROPERTIES( "_HAM_ACTIVITY_CALLBACK_PAYLOAD.StopRequest.$", 0x10, true, 0xe332b3d1e5b5c122 );                                 
            SDK_FIXED_SIZE( u0_stop_request_t, 0x10 );                                         
        };                                                                                     
                                                                                               
        struct u3_invalidated_t                                                                
        {                                                                                      
            // Windows 10 v2004, Windows 11, Windows 10 v20H2                                  
            //                                                                                 
            _m09 enum win::ham_terminate_reason_t terminate_reason;                              //{ +0x0000    +0x0000    +0x0000    } | .TerminateReason
                                                                                               
            SDK_MAGIC_PROPERTIES( "_HAM_ACTIVITY_CALLBACK_PAYLOAD.Invalidated.$", 0x4, true, 0xc2f82c4aac16c636 );                                 
            SDK_FIXED_SIZE( u3_invalidated_t, 0x4 );                                           
        };                                                                                     
                                                                                               
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                      
        //                                                                                     
        _m00 uint64_t                                                          activity_handle;  //{ +0x0000    +0x0000    +0x0000    } | .ActivityHandle
        _m01 uint64_t                                                          context;          //{ +0x0008    +0x0008    +0x0008    } | .Context
        _m02 enum win::ham_activity_callback_subject_t                         subject;          //{ +0x0010    +0x0010    +0x0010    } | .Subject
        _m07 u0_stop_request_t                                                 stop_request;     //{ +0x0018    +0x0018    +0x0018    } | .StopRequest
        _m08 struct win::ham_activity_started_payload_t                        started;          //{ +0x0018    +0x0018    +0x0018    } | .Started
        _m10 u3_invalidated_t                                                  invalidated;      //{ +0x0018    +0x0018    +0x0018    } | .Invalidated
                                                                                               
        SDK_MAGIC_PROPERTIES( "_HAM_ACTIVITY_CALLBACK_PAYLOAD.$", 0x40, true, 0x8c86eb503ea4fc2b );                
        SDK_FIXED_SIZE( ham_activity_callback_payload_t, 0x40 );                               
    };                                                                                         
};
#include "magic/ham_activity_callback_payload_t.end.hpp"
SDK_VERIFY( struct win::ham_activity_callback_payload_t::u0_stop_request_t, 0x10 );
SDK_VERIFY( struct win::ham_activity_callback_payload_t::u3_invalidated_t, 0x4 );
SDK_VERIFY( struct win::ham_activity_callback_payload_t, 0x40 );
