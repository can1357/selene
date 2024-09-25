#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct device_object_t; }

#include "magic/create_stream_file_options_t.start.hpp"
namespace io
{
    // [struct _IO_CREATE_STREAM_FILE_OPTIONS]
    // => WDK 10 (NV)
    //
    struct create_stream_file_options_t                       
    {                                                         
        // WDK 10                                             
        //                                                    
        _m00 uint16_t                    size;                  //{ +0x0000    } | .Size
        _m01 uint16_t                    flags;                 //{ +0x0002    } | .Flags
        _m02 struct nt::device_object_t* target_device_object;  //{ +0x0008    } | .TargetDeviceObject
                                                              
        SDK_NONVOL_PROPERTIES( "_IO_CREATE_STREAM_FILE_OPTIONS.$", 0x0, false, 0xd4f0d7581b8bd3d1 );                     
        SDK_FIXED_SIZE( create_stream_file_options_t, 0x10 );                     
    };                                                        
};
#include "magic/create_stream_file_options_t.end.hpp"
SDK_VERIFY( struct io::create_stream_file_options_t, 0x10 );
