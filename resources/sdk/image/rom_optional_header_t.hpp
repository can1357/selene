#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/rom_optional_header_t.start.hpp"
namespace image
{
    // [struct _IMAGE_ROM_OPTIONAL_HEADER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct rom_optional_header_t                                
    {                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                                      
        _m00 uint16_t                magic;                       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Magic
        _m01 uint8_t                 major_linker_version;        //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .MajorLinkerVersion
        _m02 uint8_t                 minor_linker_version;        //{ +0x0003    +0x0003    +0x0003    +0x0003    } | .MinorLinkerVersion
        _m03 uint32_t                size_of_code;                //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .SizeOfCode
        _m04 uint32_t                size_of_initialized_data;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .SizeOfInitializedData
        _m05 uint32_t                size_of_uninitialized_data;  //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .SizeOfUninitializedData
        _m06 uint32_t                address_of_entry_point;      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .AddressOfEntryPoint
        _m07 uint32_t                base_of_code;                //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .BaseOfCode
        _m08 uint32_t                base_of_data;                //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .BaseOfData
        _m09 uint32_t                base_of_bss;                 //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .BaseOfBss
        _m10 uint32_t                gpr_mask;                    //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .GprMask
        _m11 sdk::array<uint32_t, 4> cpr_mask;                    //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .CprMask
        _m12 uint32_t                gp_value;                    //{ +0x0034    +0x0034    +0x0034    +0x0034    } | .GpValue
                                                                
        SDK_MAGIC_PROPERTIES( "_IMAGE_ROM_OPTIONAL_HEADER.$", 0x38, true, 0xb05f9c36fc8f7e88 );                           
        SDK_FIXED_SIZE( rom_optional_header_t, 0x38 );                           
    };                                                          
};
#include "magic/rom_optional_header_t.end.hpp"
SDK_VERIFY( struct image::rom_optional_header_t, 0x38 );
