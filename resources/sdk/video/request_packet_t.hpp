#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct status_block_t; }

#include "magic/request_packet_t.start.hpp"
namespace video
{
    // [struct _VIDEO_REQUEST_PACKET]
    // => WDK 10 (NV)
    //
    struct request_packet_t                                  
    {                                                        
        // WDK 10                                            
        //                                                   
        _m00 uint32_t                   io_control_code;       //{ +0x0000    } | .IoControlCode
        _m01 struct nt::status_block_t* status_block;          //{ +0x0008    } | .StatusBlock
        _m02 void*                      input_buffer;          //{ +0x0010    } | .InputBuffer
        _m03 uint32_t                   input_buffer_length;   //{ +0x0018    } | .InputBufferLength
        _m04 void*                      output_buffer;         //{ +0x0020    } | .OutputBuffer
        _m05 uint32_t                   output_buffer_length;  //{ +0x0028    } | .OutputBufferLength
                                                             
        SDK_NONVOL_PROPERTIES( "_VIDEO_REQUEST_PACKET.$", 0x0, false, 0xebcfd4dbe111eb67 );                     
        SDK_FIXED_SIZE( request_packet_t, 0x30 );                     
    };                                                       
};
#include "magic/request_packet_t.end.hpp"
SDK_VERIFY( struct video::request_packet_t, 0x30 );
