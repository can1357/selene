#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/activation_context_detailed_information_t.start.hpp"
namespace win
{
    // [struct _ACTIVATION_CONTEXT_DETAILED_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct activation_context_detailed_information_t         
    {                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                 
        //                                                   
        _m00 uint32_t       dw_flags;                          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwFlags
        _m01 uint32_t       ul_format_version;                 //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ulFormatVersion
        _m02 uint32_t       ul_assembly_count;                 //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ulAssemblyCount
        _m03 uint32_t       ul_root_manifest_path_type;        //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .ulRootManifestPathType
        _m04 uint32_t       ul_root_manifest_path_chars;       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ulRootManifestPathChars
        _m05 uint32_t       ul_root_configuration_path_type;   //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .ulRootConfigurationPathType
        _m06 uint32_t       ul_root_configuration_path_chars;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ulRootConfigurationPathChars
        _m07 uint32_t       ul_app_dir_path_type;              //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .ulAppDirPathType
        _m08 uint32_t       ul_app_dir_path_chars;             //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .ulAppDirPathChars
        _m09 const wchar_t* lp_root_manifest_path;             //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .lpRootManifestPath
        _m10 const wchar_t* lp_root_configuration_path;        //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .lpRootConfigurationPath
        _m11 const wchar_t* lp_app_dir_path;                   //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .lpAppDirPath
                                                             
        SDK_MAGIC_PROPERTIES( "_ACTIVATION_CONTEXT_DETAILED_INFORMATION.$", 0x40, true, 0x5f272a8e06b14421 );                                 
        SDK_FIXED_SIZE( activation_context_detailed_information_t, 0x40 );                                 
    };                                                       
};
#include "magic/activation_context_detailed_information_t.end.hpp"
SDK_VERIFY( struct win::activation_context_detailed_information_t, 0x40 );
