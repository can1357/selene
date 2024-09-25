#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/error_object_with_associated_passthrough_data_t.start.hpp"
namespace win
{
    // [struct ErrorObjectWithAssociatedPassthroughData]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct error_object_with_associated_passthrough_data_t
    {                                                     
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                  
        _m00 uint32_t passthrough_data_size;                //{ +0x0010    +0x0010    +0x0010    } | .passthroughDataSize
                                                          
        SDK_MAGIC_PROPERTIES( "ErrorObjectWithAssociatedPassthroughData.$", 0x18, true, 0x69583aa57dccf780 );                      
        SDK_FIXED_SIZE( error_object_with_associated_passthrough_data_t, 0x18 );                      
    };                                                    
};
#include "magic/error_object_with_associated_passthrough_data_t.end.hpp"
SDK_VERIFY( struct win::error_object_with_associated_passthrough_data_t, 0x18 );
