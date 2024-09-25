#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/startio_performance_parameters_t.start.hpp"
namespace stor::port
{
    // [struct _STARTIO_PERFORMANCE_PARAMETERS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct startio_performance_parameters_t
    {                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                           
        _m00 uint32_t version;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint32_t size;                  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Size
        _m02 uint32_t message_number;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .MessageNumber
        _m03 uint32_t channel_number;        //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .ChannelNumber
                                           
        SDK_MAGIC_PROPERTIES( "_STARTIO_PERFORMANCE_PARAMETERS.$", 0x10, true, 0x703e16f4589477fb );               
        SDK_FIXED_SIZE( startio_performance_parameters_t, 0x10 );               
    };                                     
};
#include "magic/startio_performance_parameters_t.end.hpp"
SDK_VERIFY( struct stor::port::startio_performance_parameters_t, 0x10 );
