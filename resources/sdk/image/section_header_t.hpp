#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/section_header_t.start.hpp"
namespace image
{
    // [struct _IMAGE_SECTION_HEADER]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct section_header_t                                       
    {                                                             
        union u0_misc_t                                           
        {                                                         
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                        
            //                                                    
            _m01 uint32_t physical_address;                         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .PhysicalAddress
            _m02 uint32_t virtual_size;                             //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .VirtualSize
                                                                  
            SDK_NONVOL_PROPERTIES( "_IMAGE_SECTION_HEADER.Misc.$", 0x4, true, 0x80f179348e04e5a1 );                                        
            SDK_FIXED_SIZE( u0_misc_t, 0x4 );                                        
        };                                                        
                                                                  
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                        
        _m00 sdk::array<uint8_t, 8>        name;                    //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Name
        _m03 u0_misc_t                     misc;                    //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Misc
        _m04 uint32_t                      virtual_address;         //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .VirtualAddress
        _m05 uint32_t                      size_of_raw_data;        //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .SizeOfRawData
        _m06 uint32_t                      pointer_to_raw_data;     //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .PointerToRawData
        _m07 uint32_t                      pointer_to_relocations;  //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .PointerToRelocations
        _m08 uint32_t                      pointer_to_linenumbers;  //{ +0x001c    +0x001c    +0x001c    +0x001c    +0x001c    } | .PointerToLinenumbers
        _m09 uint16_t                      number_of_relocations;   //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .NumberOfRelocations
        _m10 uint16_t                      number_of_linenumbers;   //{ +0x0022    +0x0022    +0x0022    +0x0022    +0x0022    } | .NumberOfLinenumbers
        _m11 uint32_t                      characteristics;         //{ +0x0024    +0x0024    +0x0024    +0x0024    +0x0024    } | .Characteristics
                                                                  
        SDK_NONVOL_PROPERTIES( "_IMAGE_SECTION_HEADER.$", 0x28, true, 0xa445aaf65dc72fd3 );                       
        SDK_FIXED_SIZE( section_header_t, 0x28 );                       
    };                                                            
};
#include "magic/section_header_t.end.hpp"
SDK_VERIFY( union image::section_header_t::u0_misc_t, 0x4 );
SDK_VERIFY( struct image::section_header_t, 0x28 );
