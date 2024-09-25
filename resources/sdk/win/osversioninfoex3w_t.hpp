#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/osversioninfoex3w_t.start.hpp"
namespace win
{
    // [struct _OSVERSIONINFOEX3W]
    // => Windows 11
    //
    struct osversioninfoex3w_t                                      
    {                                                               
        union u0_input_t                                            
        {                                                           
            // Windows 11                                           
            //                                                      
            _m15 uint16_t w_raw_input16;                              //{ +0x0000    } | .wRawInput16
            _m16 uint12_t w_layer_number;                             //{ +0x0000@0  } | .wLayerNumber
            _m17 uint4_t  w_attrib_selector;                          //{ +0x0000@12 } | .wAttribSelector
                                                                    
            SDK_MAGIC_PROPERTIES( "_OSVERSIONINFOEX3W.Input.$", 0x0, false, 0xcc3cc1c43971c4 );                                          
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
        _m06 sdk::array<wchar_t, 128>       sz_csd_version;           //{ +0x0014    } | .szCSDVersion
        _m07 sdk::array<wchar_t, 128>       sz_layer_attrib;          //{ +0x0014    } | .szLayerAttrib
        _m08 uint16_t                       w_service_pack_major;     //{ +0x0114    } | .wServicePackMajor
        _m09 uint16_t                       w_service_pack_minor;     //{ +0x0116    } | .wServicePackMinor
        _m10 uint16_t                       w_suite_mask;             //{ +0x0118    } | .wSuiteMask
        _m11 uint8_t                        w_product_type;           //{ +0x011a    } | .wProductType
        _m12 uint8_t                        w_reserved;               //{ +0x011b    } | .wReserved
        _m13 uint32_t                       w_suite_mask_ex;          //{ +0x011c    } | .wSuiteMaskEx
        _m14 uint32_t                       w_reserved2;              //{ +0x0120    } | .wReserved2
        _m18 u0_input_t                     input;                    //{ +0x0124    } | .Input
        _m19 uint16_t                       w_layer_count;            //{ +0x0126    } | .wLayerCount
        _m20 uint32_t                       dw_layer_flags;           //{ +0x0128    } | .dwLayerFlags
                                                                    
        SDK_MAGIC_PROPERTIES( "_OSVERSIONINFOEX3W.$", 0x0, false, 0x6491dc9e70a86684 );                        
        SDK_FIXED_SIZE( osversioninfoex3w_t, 0x12c );                        
    };                                                              
};
#include "magic/osversioninfoex3w_t.end.hpp"
SDK_VERIFY( union win::osversioninfoex3w_t::u0_input_t, 0x2 );
SDK_VERIFY( struct win::osversioninfoex3w_t, 0x12c );
