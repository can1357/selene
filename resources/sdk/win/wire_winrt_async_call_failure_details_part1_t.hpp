#pragma once
#include <sdkgen/support_library.hpp>
#include "midl_xmit_defs_0006_t.hpp"

#include "magic/wire_winrt_async_call_failure_details_part1_t.start.hpp"
namespace win
{
    // [struct WireWinrtAsyncCallFailureDetailsPart1]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wire_winrt_async_call_failure_details_part1_t                  
    {                                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                                                
        _m00 enum win::midl_xmit_defs_0006_t point_of_failure;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pointOfFailure
        _m01 sdk::hresult                    hr_failure;                    //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .hrFailure
        _m02 uint32_t                        size_of_marshaled_error_info;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .sizeOfMarshaledErrorInfo
        _m03 uint32_t                        unique;                        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .unique
        _m04 uint32_t                        array_size;                    //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .array_size
                                                                          
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                                                
        _m05 sdk::array<uint8_t>             marshaled_error_info;          //{ +0x0018    +0x0018    +0x0018    } | .marshaledErrorInfo
                                                                          
        SDK_MAGIC_PROPERTIES( "WireWinrtAsyncCallFailureDetailsPart1.$", 0x18, true, 0x7696f683f8d3f85f );                             
        SDK_FIXED_SIZE( wire_winrt_async_call_failure_details_part1_t, 0x18 );                             
    };                                                                    
};
#include "magic/wire_winrt_async_call_failure_details_part1_t.end.hpp"
SDK_VERIFY( struct win::wire_winrt_async_call_failure_details_part1_t, 0x18 );
