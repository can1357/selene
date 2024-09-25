#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/feature_error_t.start.hpp"
namespace nt
{
    // [struct FEATURE_ERROR]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct feature_error_t                                    
    {                                                         
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                    
        //                                                    
        _m00 sdk::hresult hr;                                   //{ +0x0000    +0x0000    +0x0000    } | .hr
        _m01 uint16_t     line_number;                          //{ +0x0004    +0x0004    +0x0004    } | .lineNumber
        _m02 const char*  file;                                 //{ +0x0008    +0x0008    +0x0008    } | .file
        _m03 const char*  process;                              //{ +0x0010    +0x0010    +0x0010    } | .process
        _m04 const char*  module_path;                          //{ +0x0018    +0x0018    +0x0018    } | .modulePath
        _m05 uint32_t     caller_return_address_offset;         //{ +0x0020    +0x0020    +0x0020    } | .callerReturnAddressOffset
        _m06 const char*  caller_module;                        //{ +0x0028    +0x0028    +0x0028    } | .callerModule
        _m07 const char*  message;                              //{ +0x0030    +0x0030    +0x0030    } | .message
        _m08 uint16_t     origin_line_number;                   //{ +0x0038    +0x0038    +0x0038    } | .originLineNumber
        _m09 const char*  origin_file;                          //{ +0x0040    +0x0040    +0x0040    } | .originFile
        _m10 const char*  origin_module;                        //{ +0x0048    +0x0048    +0x0048    } | .originModule
        _m11 uint32_t     origin_caller_return_address_offset;  //{ +0x0050    +0x0050    +0x0050    } | .originCallerReturnAddressOffset
        _m12 const char*  origin_caller_module;                 //{ +0x0058    +0x0058    +0x0058    } | .originCallerModule
        _m13 const char*  origin_name;                          //{ +0x0060    +0x0060    +0x0060    } | .originName
                                                              
        SDK_MAGIC_PROPERTIES( "FEATURE_ERROR.$", 0x68, true, 0x267686fa4aee92e3 );                                    
        SDK_FIXED_SIZE( feature_error_t, 0x68 );                                    
    };                                                        
};
#include "magic/feature_error_t.end.hpp"
SDK_VERIFY( struct nt::feature_error_t, 0x68 );
