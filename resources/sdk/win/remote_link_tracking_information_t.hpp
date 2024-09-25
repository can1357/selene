#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/remote_link_tracking_information_t.start.hpp"
namespace win
{
    // [struct _REMOTE_LINK_TRACKING_INFORMATION_]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct remote_link_tracking_information_t                               
    {                                                                       
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                        
        //                                                                  
        _m00 void*                  target_file_object;                       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .TargetFileObject
        _m01 uint32_t               target_link_tracking_information_length;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .TargetLinkTrackingInformationLength
        _m02 sdk::array<uint8_t, 1> target_link_tracking_information_buffer;  //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .TargetLinkTrackingInformationBuffer
                                                                            
        SDK_NONVOL_PROPERTIES( "_REMOTE_LINK_TRACKING_INFORMATION_.$", 0x10, true, 0x504b31c7e419b709 );                                        
        SDK_FIXED_SIZE( remote_link_tracking_information_t, 0x10 );                                        
    };                                                                      
};
#include "magic/remote_link_tracking_information_t.end.hpp"
SDK_VERIFY( struct win::remote_link_tracking_information_t, 0x10 );
