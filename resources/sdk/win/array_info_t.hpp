#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/array_info_t.start.hpp"
namespace win
{
    // [struct ARRAY_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct array_info_t                        
    {                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                     
        _m00 int32_t   dimension;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Dimension
        _m01 uint32_t* buffer_conformance_mark;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .BufferConformanceMark
        _m02 uint32_t* buffer_variance_mark;     //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .BufferVarianceMark
        _m03 uint32_t* max_count_array;          //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .MaxCountArray
        _m04 uint32_t* offset_array;             //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .OffsetArray
        _m05 uint32_t* actual_count_array;       //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .ActualCountArray
                                               
        SDK_MAGIC_PROPERTIES( "ARRAY_INFO.$", 0x30, true, 0xd273f9c56b18094 );                        
        SDK_FIXED_SIZE( array_info_t, 0x30 );                        
    };                                         
};
#include "magic/array_info_t.end.hpp"
SDK_VERIFY( struct win::array_info_t, 0x30 );
