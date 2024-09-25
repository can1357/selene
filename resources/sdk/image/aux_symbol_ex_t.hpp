#pragma once
#include <sdkgen/support_library.hpp>
#include "aux_symbol_token_def_t.hpp"

#include "magic/aux_symbol_ex_t.start.hpp"
namespace image
{
    // [union _IMAGE_AUX_SYMBOL_EX]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union aux_symbol_ex_t                                                    
    {                                                                        
        struct u0_sym_t                                                      
        {                                                                    
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                    
            //                                                               
            _m00 uint32_t                weak_default_sym_index;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .WeakDefaultSymIndex
            _m01 uint32_t                weak_search_type;                     //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .WeakSearchType
            _m02 sdk::array<uint8_t, 12> rgb_reserved;                         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .rgbReserved
                                                                             
            SDK_MAGIC_PROPERTIES( "_IMAGE_AUX_SYMBOL_EX.Sym.$", 0x14, true, 0xcac23ee682d44622 );                                    
            SDK_FIXED_SIZE( u0_sym_t, 0x14 );                                    
        };                                                                   
                                                                             
        struct u4_file_t                                                     
        {                                                                    
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
            //                                                               
            _m04 sdk::array<uint8_t, 20> name;                                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Name
                                                                             
            SDK_MAGIC_PROPERTIES( "_IMAGE_AUX_SYMBOL_EX.File.$", 0x14, true, 0x15152e76cdb8b210 );                  
            SDK_FIXED_SIZE( u4_file_t, 0x14 );                               
        };                                                                   
                                                                             
        struct u8_section_t                                                  
        {                                                                    
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                   
            //                                                               
            _m06 uint32_t               length;                                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Length
            _m07 uint16_t               number_of_relocations;                 //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .NumberOfRelocations
            _m08 uint16_t               number_of_linenumbers;                 //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .NumberOfLinenumbers
            _m09 uint32_t               check_sum;                             //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .CheckSum
            _m10 int16_t                number;                                //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .Number
            _m11 uint8_t                selection;                             //{ +0x000e    +0x000e    +0x000e    +0x000e    } | .Selection
            _m12 uint8_t                b_reserved;                            //{ +0x000f    +0x000f    +0x000f    +0x000f    } | .bReserved
            _m13 int16_t                high_number;                           //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .HighNumber
            _m14 sdk::array<uint8_t, 2> rgb_reserved;                          //{ +0x0012    +0x0012    +0x0012    +0x0012    } | .rgbReserved
                                                                             
            SDK_MAGIC_PROPERTIES( "_IMAGE_AUX_SYMBOL_EX.Section.$", 0x14, true, 0x642aa8637b51538a );                                   
            SDK_FIXED_SIZE( u8_section_t, 0x14 );                                   
        };                                                                   
                                                                             
        struct u12_crc_t                                                     
        {                                                                    
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
            //                                                               
            _m18 uint32_t                crc;                                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .crc
            _m19 sdk::array<uint8_t, 16> rgb_reserved;                         //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .rgbReserved
                                                                             
            SDK_MAGIC_PROPERTIES( "_IMAGE_AUX_SYMBOL_EX.CRC.$", 0x14, true, 0x49d97e805fabb491 );                          
            SDK_FIXED_SIZE( u12_crc_t, 0x14 );                               
        };                                                                   
                                                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                                                   
        _m03 u0_sym_t                                           sym;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Sym
        _m05 u4_file_t                                          file;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .File
        _m15 u8_section_t                                       section;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Section
        _m16 struct image::aux_symbol_token_def_t               token_def;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .TokenDef
        _m17 sdk::array<uint8_t, 2>                             rgb_reserved;  //{ +0x0012    +0x0012    +0x0012    +0x0012    } | .rgbReserved
        _m20 u12_crc_t                                          crc;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .CRC
                                                                             
        SDK_MAGIC_PROPERTIES( "_IMAGE_AUX_SYMBOL_EX.$", 0x14, true, 0xfaaa09b0d481da4e );             
        SDK_FIXED_SIZE( aux_symbol_ex_t, 0x14 );                             
    };                                                                       
};
#include "magic/aux_symbol_ex_t.end.hpp"
SDK_VERIFY( struct image::aux_symbol_ex_t::u0_sym_t, 0x14 );
SDK_VERIFY( struct image::aux_symbol_ex_t::u4_file_t, 0x14 );
SDK_VERIFY( struct image::aux_symbol_ex_t::u8_section_t, 0x14 );
SDK_VERIFY( struct image::aux_symbol_ex_t::u12_crc_t, 0x14 );
SDK_VERIFY( union image::aux_symbol_ex_t, 0x14 );
