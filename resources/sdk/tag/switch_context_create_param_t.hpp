#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/switch_context_create_param_t.start.hpp"
namespace tag
{
    // [struct tagSWITCH_CONTEXT_CREATE_PARAM]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct switch_context_create_param_t                   
    {                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                               
        //                                                 
        _m00 uint64_t       os_max_version_tested;           //{ +0x0010    +0x0000    +0x0000    +0x0000    } | .OsMaxVersionTested
        _m01 uint32_t       target_platform;                 //{ +0x0018    +0x0008    +0x0008    +0x0008    } | .TargetPlatform
        _m02 void*          shim_data;                       //{ +0x0020    +0x0010    +0x0010    +0x0010    } | .ShimData
        _m03 uint16_t       sub_system_major_version;        //{ +0x0028    +0x0018    +0x0018    +0x0018    } | .SubSystemMajorVersion
        _m04 uint16_t       sub_system_minor_version;        //{ +0x002a    +0x001a    +0x001a    +0x001a    } | .SubSystemMinorVersion
        _m05 uint16_t       major_operating_system_version;  //{ +0x002c    +0x001c    +0x001c    +0x001c    } | .MajorOperatingSystemVersion
        _m06 uint16_t       minor_operating_system_version;  //{ +0x002e    +0x001e    +0x001e    +0x001e    } | .MinorOperatingSystemVersion
        _m07 void*          supported_os_info;               //{ +0x0030    +0x0020    +0x0020    +0x0020    } | .SupportedOsInfo
                                                           
        // Windows 10 v1607                                
        //                                                 
        _m08 const wchar_t* lpwz_application_name;           //{ +0x0000    } | .lpwzApplicationName
        _m09 const wchar_t* lpwz_package_moniker;            //{ +0x0008    } | .lpwzPackageMoniker
                                                           
        SDK_MAGIC_PROPERTIES( "tagSWITCH_CONTEXT_CREATE_PARAM.$", 0x28, true, 0xd73e97568bdf4ace );                               
        SDK_DYNAMIC_SIZE( switch_context_create_param_t );                               
    };                                                     
};
#include "magic/switch_context_create_param_t.end.hpp"
