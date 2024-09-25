#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/request_xlation_context_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_REQUEST_XLATION_CONTEXT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct request_xlation_context_t      
    {                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                
        _m00 uint32_t old_oid;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .OldOid
        _m01 void*    info_buf;             //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .InfoBuf
        _m02 uint32_t info_buf_length;      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .InfoBufLength
        _m03 uint64_t rcv_error_value;      //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .RcvErrorValue
        _m04 uint64_t rcv_no_buffer_value;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .RcvNoBufferValue
        _m05 uint64_t rcv_discards_value;   //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .RcvDiscardsValue
        _m06 uint64_t xmit_error_value;     //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .XmitErrorValue
        _m07 int32_t  status;               //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .Status
                                          
        SDK_MAGIC_PROPERTIES( "_NDIS_REQUEST_XLATION_CONTEXT.$", 0x40, true, 0xdfd3b6caa62f73fd );                    
        SDK_FIXED_SIZE( request_xlation_context_t, 0x40 );                    
    };                                    
};
#include "magic/request_xlation_context_t.end.hpp"
SDK_VERIFY( struct ndis::request_xlation_context_t, 0x40 );
