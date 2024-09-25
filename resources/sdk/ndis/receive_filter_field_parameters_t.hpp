#pragma once
#include <sdkgen/support_library.hpp>
#include "frame_header_t.hpp"
#include "object_header_t.hpp"
#include "receive_filter_test_t.hpp"

#include "magic/receive_filter_field_parameters_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_RECEIVE_FILTER_FIELD_PARAMETERS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct receive_filter_field_parameters_t                      
    {                                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                        
        _m00 struct ndis::object_header_t     header;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                         flags;                //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 enum ndis::frame_header_t        frame_header;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .FrameHeader
        _m03 enum ndis::receive_filter_test_t receive_filter_test;  //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .ReceiveFilterTest
                                                                  
        SDK_MAGIC_PROPERTIES( "_NDIS_RECEIVE_FILTER_FIELD_PARAMETERS.$", 0x38, true, 0x18810b7931c0f795 );                    
        SDK_FIXED_SIZE( receive_filter_field_parameters_t, 0x38 );                    
    };                                                            
};
#include "magic/receive_filter_field_parameters_t.end.hpp"
SDK_VERIFY( struct ndis::receive_filter_field_parameters_t, 0x38 );
