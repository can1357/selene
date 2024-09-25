#pragma once
#include <sdkgen/support_library.hpp>
#include "ksstream_pointer_offset_t.hpp"

#include "magic/ksstream_pointer_t.start.hpp"
namespace ndis
{
    struct kspin_t;
    struct ksstream_header_t;

    // [struct _KSSTREAM_POINTER]
    // => Windows 10 v1607
    //
    struct ksstream_pointer_t                                      
    {                                                              
        // Windows 10 v1607                                        
        //                                                         
        _m00 void*                                   context;        //{ +0x0000    } | .Context
        _m01 struct ndis::kspin_t*                   pin;            //{ +0x0008    } | .Pin
        _m02 struct ndis::ksstream_header_t*         stream_header;  //{ +0x0010    } | .StreamHeader
        _m03 struct ndis::ksstream_pointer_offset_t* offset;         //{ +0x0018    } | .Offset
        _m04 struct ndis::ksstream_pointer_offset_t  offset_in;      //{ +0x0020    } | .OffsetIn
        _m05 struct ndis::ksstream_pointer_offset_t  offset_out;     //{ +0x0030    } | .OffsetOut
                                                                   
        SDK_MAGIC_PROPERTIES( "_KSSTREAM_POINTER.$", 0x0, false, 0xa0680d92211a8f31 );              
        SDK_FIXED_SIZE( ksstream_pointer_t, 0x40 );                
    };                                                             
};
#include "magic/ksstream_pointer_t.end.hpp"
SDK_VERIFY( struct ndis::ksstream_pointer_t, 0x40 );
