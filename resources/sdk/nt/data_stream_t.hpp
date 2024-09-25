#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/data_stream_t.start.hpp"
namespace nt
{
    // [struct _DataStream]
    // => WDK 10 (NV)
    //
    struct data_stream_t     
    {                        
        // WDK 10            
        //                   
        _m00 uint16_t length;  //{ +0x0000    } | .Length
        _m01 uint16_t flags;   //{ +0x0002    } | .Flags
        _m02 uint64_t vdl;     //{ +0x0008    } | .Vdl
                             
        SDK_NONVOL_PROPERTIES( "_DataStream.$", 0x0, false, 0xca32f321e2c4fa9d );       
        SDK_FIXED_SIZE( data_stream_t, 0x10 );       
    };                       
};
#include "magic/data_stream_t.end.hpp"
SDK_VERIFY( struct nt::data_stream_t, 0x10 );
