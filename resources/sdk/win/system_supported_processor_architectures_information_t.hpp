#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_supported_processor_architectures_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_SUPPORTED_PROCESSOR_ARCHITECTURES_INFORMATION]
    // => Windows 11
    //
    struct system_supported_processor_architectures_information_t
    {                                                            
        // Windows 11                  
        //                             
        _m00 uint16_t machine;                                     //{ +0x0000@0  } | .Machine
        _m01 uint1_t  kernel_mode;                                 //{ +0x0000@16 } | .KernelMode
        _m02 uint1_t  user_mode;                                   //{ +0x0000@17 } | .UserMode
        _m03 uint1_t  native;                                      //{ +0x0000@18 } | .Native
        _m04 uint1_t  process;                                     //{ +0x0000@19 } | .Process
        _m05 uint1_t  wo_w64_container;                            //{ +0x0000@20 } | .WoW64Container
        _m06 uint11_t reserved_zero0;                              //{ +0x0000@21 } | .ReservedZero0
                                                                 
        SDK_MAGIC_PROPERTIES( "_SYSTEM_SUPPORTED_PROCESSOR_ARCHITECTURES_INFORMATION.$", 0x0, false, 0xc9a834c54e99e536 );                 
        SDK_FIXED_SIZE( system_supported_processor_architectures_information_t, 0x4 );                 
    };                                                           
};
#include "magic/system_supported_processor_architectures_information_t.end.hpp"
SDK_VERIFY( struct win::system_supported_processor_architectures_information_t, 0x4 );
