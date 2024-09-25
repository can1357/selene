#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/arm64_runtime_function_entry_xdata_t.start.hpp"
namespace image
{
    // [union IMAGE_ARM64_RUNTIME_FUNCTION_ENTRY_XDATA]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union arm64_runtime_function_entry_xdata_t
    {                                         
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                   
        _m00 uint32_t header_data;              //{ +0x0000    +0x0000    +0x0000    } | .HeaderData
        _m01 uint18_t function_length;          //{ +0x0000@0  +0x0000@0  +0x0000@0  } | .FunctionLength
        _m02 uint2_t  version;                  //{ +0x0000@18 +0x0000@18 +0x0000@18 } | .Version
        _m03 uint1_t  exception_data_present;   //{ +0x0000@20 +0x0000@20 +0x0000@20 } | .ExceptionDataPresent
        _m04 uint1_t  epilog_in_header;         //{ +0x0000@21 +0x0000@21 +0x0000@21 } | .EpilogInHeader
        _m05 uint5_t  epilog_count;             //{ +0x0000@22 +0x0000@22 +0x0000@22 } | .EpilogCount
        _m06 uint5_t  code_words;               //{ +0x0000@27 +0x0000@27 +0x0000@27 } | .CodeWords
                                              
        SDK_MAGIC_PROPERTIES( "IMAGE_ARM64_RUNTIME_FUNCTION_ENTRY_XDATA.$", 0x4, true, 0x3e976132cf3fb5e1 );                       
        SDK_FIXED_SIZE( arm64_runtime_function_entry_xdata_t, 0x4 );                       
    };                                        
};
#include "magic/arm64_runtime_function_entry_xdata_t.end.hpp"
SDK_VERIFY( union image::arm64_runtime_function_entry_xdata_t, 0x4 );
