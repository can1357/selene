#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/osversioninfoex3a_t.start.hpp"
namespace win
{
    // [struct _OSVERSIONINFOEX3A]
    // => Windows 11
    //
    struct osversioninfoex3a_t                                      
    {                                                               
        union u0_input_t                                            
        {                                                           
            // Windows 11                                           
            //                                                      
            _m15 uint16_t w_raw_input16;                              //{ +0x0000    } | .wRawInput16
            _m16 uint12_t w_layer_number;                             //{ +0x0000@0  } | .wLayerNumber
            _m17 uint4_t  w_attrib_selector;                          //{ +0x0000@12 } | .wAttribSelector
                                                                    
            SDK_MAGIC_PROPERTIES( "_OSVERSIONINFOEX3A.Input.$", 0x0, false, 0xd3e2fa14793b90db );                                          
            SDK_FIXED_SIZE( u0_input_t, 0x2 );                                          
        };                                                          
                                                                    
        // Windows 11                                               
        //                                                          
        _m00 uint32_t                       dw_os_version_info_size;  //{ +0x0000    } | .dwOSVersionInfoSize
        _m01 uint32_t                       dw_major_version;         //{ +0x0004    } | .dwMajorVersion
        _m02 uint32_t                       dw_minor_version;         //{ +0x0008    } | .dwMinorVersion
        _m03 uint32_t                       dw_build_number;          //{ +0x000c    } | .dwBuildNumber
        _m04 uint32_t                       dw_platform_id;           //{ +0x0010    } | .dwPlatformId
        _m05 uint32_t                       dw_qfe_number;            //{ +0x0010    } | .dwQfeNumber
        _m06 sdk::array<char, 128>          sz_csd_version;           //{ +0x0014    } | .szCSDVersion
        _m07 sdk::array<char, 128>          sz_layer_attrib;          //{ +0x0014    } | .szLayerAttrib
        _m08 uint16_t                       w_service_pack_major;     //{ +0x0094    } | .wServicePackMajor
        _m09 uint16_t                       w_service_pack_minor;     //{ +0x0096    } | .wServicePackMinor
        _m10 uint16_t                       w_suite_mask;             //{ +0x0098    } | .wSuiteMask
        _m11 uint8_t                        w_product_type;           //{ +0x009a    } | .wProductType
        _m12 uint8_t                        w_reserved;               //{ +0x009b    } | .wReserved
        _m13 uint32_t                       w_suite_mask_ex;          //{ +0x009c    } | .wSuiteMaskEx
        _m14 uint32_t                       w_reserved2;              //{ +0x00a0    } | .wReserved2
        _m18 u0_input_t                     input;                    //{ +0x00a4    } | .Input
        _m19 uint16_t                       w_layer_count;            //{ +0x00a6    } | .wLayerCount
        _m20 uint32_t                       dw_layer_flags;           //{ +0x00a8    } | .dwLayerFlags
                                                                    
        SDK_MAGIC_PROPERTIES( "_OSVERSIONINFOEX3A.$", 0x0, false, 0x9ae07ff6b76f7cd5 );                        
        SDK_FIXED_SIZE( osversioninfoex3a_t, 0xac );                        
    };                                                              
};
#include "magic/osversioninfoex3a_t.end.hpp"
SDK_VERIFY( union win::osversioninfoex3a_t::u0_input_t, 0x2 );
SDK_VERIFY( struct win::osversioninfoex3a_t, 0xac );
