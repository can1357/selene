#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pre_start_info_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_PRE_START_INFO]
    // => WDK 10 (NV)
    //
    struct pre_start_info_t                                              
    {                                                                    
        // WDK 10                                                        
        //                                                               
        _m00 uint32_t reserved_in;                                         //{ +0x0000    } | .ReservedIn
        _m01 uint32_t input;                                               //{ +0x0000    } | .Input
        _m02 uint1_t  support_preserve_boot_display;                       //{ +0x0004@0  } | .SupportPreserveBootDisplay
        _m03 uint1_t  is_uefi_frame_buffer_cpu_accessible_during_startup;  //{ +0x0004@1  } | .IsUEFIFrameBufferCpuAccessibleDuringStartup
        _m04 uint30_t reserved_out;                                        //{ +0x0004@2  } | .ReservedOut
        _m05 uint32_t output;                                              //{ +0x0004    } | .Output
                                                                         
        SDK_NONVOL_PROPERTIES( "_DXGK_PRE_START_INFO.$", 0x0, false, 0xbdd9fbb72711000c );                                                   
        SDK_FIXED_SIZE( pre_start_info_t, 0x8 );                                                   
    };                                                                   
};
#include "magic/pre_start_info_t.end.hpp"
SDK_VERIFY( struct dxgk::pre_start_info_t, 0x8 );
