#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_build_version_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_BUILD_VERSION_INFORMATION]
    // => Windows 11
    //
    struct system_build_version_information_t           
    {                                                   
        union u0_flags_t                                
        {                                               
            // Windows 11                               
            //                                          
            _m12 uint32_t value32;                        //{ +0x0000    } | .Value32
            _m13 uint1_t  is_top_level;                   //{ +0x0000@0  } | .IsTopLevel
            _m14 uint1_t  is_checked;                     //{ +0x0000@1  } | .IsChecked
                                                        
            SDK_MAGIC_PROPERTIES( "_SYSTEM_BUILD_VERSION_INFORMATION.Flags.$", 0x0, false, 0x7784c01d4f7fbbb6 );                              
            SDK_FIXED_SIZE( u0_flags_t, 0x4 );                              
        };                                              
                                                        
        // Windows 11                                   
        //                                              
        _m00 uint16_t                  layer_number;      //{ +0x0000    } | .LayerNumber
        _m01 uint16_t                  layer_count;       //{ +0x0002    } | .LayerCount
        _m02 uint32_t                  os_major_version;  //{ +0x0004    } | .OsMajorVersion
        _m03 uint32_t                  os_minor_version;  //{ +0x0008    } | .OsMinorVersion
        _m04 uint32_t                  nt_build_number;   //{ +0x000c    } | .NtBuildNumber
        _m05 uint32_t                  nt_build_qfe;      //{ +0x0010    } | .NtBuildQfe
        _m06 sdk::array<uint8_t, 128>  layer_name;        //{ +0x0014    } | .LayerName
        _m07 sdk::array<uint8_t, 128>  nt_build_branch;   //{ +0x0094    } | .NtBuildBranch
        _m08 sdk::array<uint8_t, 128>  nt_build_lab;      //{ +0x0114    } | .NtBuildLab
        _m09 sdk::array<uint8_t, 128>  nt_build_lab_ex;   //{ +0x0194    } | .NtBuildLabEx
        _m10 sdk::array<uint8_t, 26>   nt_build_stamp;    //{ +0x0214    } | .NtBuildStamp
        _m11 sdk::array<uint8_t, 16>   nt_build_arch;     //{ +0x022e    } | .NtBuildArch
        _m15 u0_flags_t                flags;             //{ +0x0240    } | .Flags
                                                        
        SDK_MAGIC_PROPERTIES( "_SYSTEM_BUILD_VERSION_INFORMATION.$", 0x0, false, 0x935a98929b9cec08 );                 
        SDK_FIXED_SIZE( system_build_version_information_t, 0x244 );                 
    };                                                  
};
#include "magic/system_build_version_information_t.end.hpp"
SDK_VERIFY( union win::system_build_version_information_t::u0_flags_t, 0x4 );
SDK_VERIFY( struct win::system_build_version_information_t, 0x244 );
