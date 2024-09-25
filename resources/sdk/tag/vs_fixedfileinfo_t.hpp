#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/vs_fixedfileinfo_t.start.hpp"
namespace tag
{
    // [struct tagVS_FIXEDFILEINFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct vs_fixedfileinfo_t               
    {                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                  
        _m00 uint32_t dw_signature;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwSignature
        _m01 uint32_t dw_struc_version;       //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwStrucVersion
        _m02 uint32_t dw_file_version_ms;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .dwFileVersionMS
        _m03 uint32_t dw_file_version_ls;     //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .dwFileVersionLS
        _m04 uint32_t dw_product_version_ms;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .dwProductVersionMS
        _m05 uint32_t dw_product_version_ls;  //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .dwProductVersionLS
        _m06 uint32_t dw_file_flags_mask;     //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .dwFileFlagsMask
        _m07 uint32_t dw_file_flags;          //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .dwFileFlags
        _m08 uint32_t dw_file_os;             //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .dwFileOS
        _m09 uint32_t dw_file_type;           //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .dwFileType
        _m10 uint32_t dw_file_subtype;        //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .dwFileSubtype
        _m11 uint32_t dw_file_date_ms;        //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .dwFileDateMS
        _m12 uint32_t dw_file_date_ls;        //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .dwFileDateLS
                                            
        SDK_MAGIC_PROPERTIES( "tagVS_FIXEDFILEINFO.$", 0x34, true, 0x2cf98241fc3331b3 );                      
        SDK_FIXED_SIZE( vs_fixedfileinfo_t, 0x34 );                      
    };                                      
};
#include "magic/vs_fixedfileinfo_t.end.hpp"
SDK_VERIFY( struct tag::vs_fixedfileinfo_t, 0x34 );
