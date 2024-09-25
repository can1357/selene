#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/wire_winrt_async_call_success_details_part1_t.start.hpp"
namespace win
{
    // [struct WireWinrtAsyncCallSuccessDetailsPart1]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wire_winrt_async_call_success_details_part1_t   
    {                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                                 
        _m00 uint32_t            size_of_marshaled_results;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .sizeOfMarshaledResults
        _m01 uint32_t            ref;                        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ref
        _m02 uint32_t            array_size;                 //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .array_size
                                                           
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                                 
        _m03 sdk::array<uint8_t> marshaled_result_data;      //{ +0x0010    +0x0010    +0x0010    } | .marshaledResultData
                                                           
        SDK_MAGIC_PROPERTIES( "WireWinrtAsyncCallSuccessDetailsPart1.$", 0x10, true, 0x128a1121e66bf9c7 );                          
        SDK_FIXED_SIZE( wire_winrt_async_call_success_details_part1_t, 0x10 );                          
    };                                                     
};
#include "magic/wire_winrt_async_call_success_details_part1_t.end.hpp"
SDK_VERIFY( struct win::wire_winrt_async_call_success_details_part1_t, 0x10 );
