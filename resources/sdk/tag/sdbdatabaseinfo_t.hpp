#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/sdbdatabaseinfo_t.start.hpp"
namespace tag
{
    // [struct tagSDBDATABASEINFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct sdbdatabaseinfo_t                       
    {                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                         
        _m00 uint32_t          dw_flags;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwFlags
        _m01 uint32_t          dw_version_major;     //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwVersionMajor
        _m02 uint32_t          dw_version_minor;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .dwVersionMinor
        _m03 wchar_t*          psz_description;      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .pszDescription
        _m04 struct nt::guid_t guid_db;              //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .guidDB
                                                   
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                         
        _m05 uint32_t          dw_runtime_platform;  //{ +0x0028    +0x0028    +0x0028    } | .dwRuntimePlatform
                                                   
        SDK_MAGIC_PROPERTIES( "tagSDBDATABASEINFO.$", 0x30, true, 0x6f4b574f661bddb7 );                    
        SDK_DYNAMIC_SIZE( sdbdatabaseinfo_t );                    
    };                                             
};
#include "magic/sdbdatabaseinfo_t.end.hpp"
