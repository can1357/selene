#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/wire_local_that_part1_t.start.hpp"
namespace win
{
    // [struct WireLocalThatPart1]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wire_local_that_part1_t                       
    {                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                   
        //                                               
        _m00 uint64_t marshaling_set_id;                   //{ +0x0008    +0x0000    +0x0000    +0x0000    } | .marshalingSetId
                                                         
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                   
        //                                               
        _m01 uint32_t unique_p_async_response_block;       //{ +0x000c    +0x000c    +0x000c    } | .unique_pAsyncResponseBlock
        _m02 uint32_t unique_container_error_information;  //{ +0x0010    +0x0010    +0x0010    } | .unique_containerErrorInformation
        _m03 uint32_t unique_container_passthrough_data;   //{ +0x0014    +0x0014    +0x0014    } | .unique_containerPassthroughData
                                                         
        // Windows 10 v1607                                   
        //                                               
        _m04 uint64_t marshaling_set_acknowledgment_oxid;  //{ +0x0000    } | .marshalingSetAcknowledgmentOxid
        _m05 uint32_t unique;                              //{ +0x0014    } | .unique
                                                         
        SDK_MAGIC_PROPERTIES( "WireLocalThatPart1.$", 0x18, true, 0x19824806a9e6c74e );                                   
        SDK_FIXED_SIZE( wire_local_that_part1_t, 0x18 );                                   
    };                                                   
};
#include "magic/wire_local_that_part1_t.end.hpp"
SDK_VERIFY( struct win::wire_local_that_part1_t, 0x18 );
