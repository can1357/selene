#pragma once
#include <sdkgen/support_library.hpp>
#include "info_class_t.hpp"

#include "magic/service_lookup_t.start.hpp"
namespace ahc
{
    // [struct _AHC_SERVICE_LOOKUP]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct service_lookup_t                              
    {                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                               
        _m00 enum ahc::info_class_t info_class;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .InfoClass
        _m01 uint32_t               hint_flags;            //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .HintFlags
        _m02 nt::unicode_view       package_alias;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .PackageAlias
        _m03 void*                  file_handle;           //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .FileHandle
        _m04 void*                  process_handle;        //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .ProcessHandle
        _m05 uint16_t               exe_type;              //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .ExeType
        _m06 nt::unicode_view       exe_signature;         //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .ExeSignature
        _m07 const wchar_t*         environment;           //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .Environment
        _m08 uint32_t               environment_size;      //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .EnvironmentSize
                                                         
        // Windows 11                                    
        //                                               
        _m09 nt::unicode_view       process_command_line;  //{ +0x0050    } | .ProcessCommandLine
                                                         
        SDK_MAGIC_PROPERTIES( "_AHC_SERVICE_LOOKUP.$", 0x50, true, 0xf4d594958ad5941e );                     
        SDK_DYNAMIC_SIZE( service_lookup_t );                     
    };                                                   
};
#include "magic/service_lookup_t.end.hpp"
