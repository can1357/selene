#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/refs_stream_extent_t.start.hpp"
namespace win
{
    // [struct _REFS_STREAM_EXTENT]
    // => Windows 11
    //
    struct refs_stream_extent_t  
    {                            
        // Windows 11            
        //                       
        _m00 int64_t  vcn;         //{ +0x0000    } | .Vcn
        _m01 int64_t  lcn;         //{ +0x0008    } | .Lcn
        _m02 int64_t  length;      //{ +0x0010    } | .Length
        _m03 uint16_t properties;  //{ +0x0018    } | .Properties
                                 
        SDK_MAGIC_PROPERTIES( "_REFS_STREAM_EXTENT.$", 0x0, false, 0x4397ff2c5bec0468 );           
        SDK_FIXED_SIZE( refs_stream_extent_t, 0x20 );           
    };                           
};
#include "magic/refs_stream_extent_t.end.hpp"
SDK_VERIFY( struct win::refs_stream_extent_t, 0x20 );
