#pragma once
#include <sdkgen/support_library.hpp>
#include "aux_symbol_token_def_t.hpp"

#include "magic/aux_symbol_t.start.hpp"
namespace image
{
    // [union _IMAGE_AUX_SYMBOL]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union aux_symbol_t                                                                  
    {                                                                                   
        struct u0_sym_t                                                                 
        {                                                                               
            union u4_misc_t                                                             
            {                                                                           
                struct u8_ln_sz_t                                                       
                {                                                                       
                    // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                          
                    //                                                                  
                    _m01 uint16_t linenumber;                                             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Linenumber
                    _m02 uint16_t size;                                                   //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .Size
                                                                                        
                    SDK_MAGIC_PROPERTIES( "_IMAGE_AUX_SYMBOL.Sym.Misc.LnSz.$", 0x4, true, 0x7af0f3b5003ddc79 );                                          
                    SDK_FIXED_SIZE( u8_ln_sz_t, 0x4 );                                          
                };                                                                      
                                                                                        
                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                               
                //                                                                      
                _m03 u8_ln_sz_t              ln_sz;                                       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .LnSz
                _m04 uint32_t                total_size;                                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .TotalSize
                                                                                        
                SDK_MAGIC_PROPERTIES( "_IMAGE_AUX_SYMBOL.Sym.Misc.$", 0x4, true, 0xeb3ffb3edbc666a3 );                               
                SDK_FIXED_SIZE( u4_misc_t, 0x4 );                                       
            };                                                                          
                                                                                        
            union u12_fcn_ary_t                                                         
            {                                                                           
                struct u16_function_t                                                   
                {                                                                       
                    // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                      
                    //                                                                  
                    _m06 uint32_t pointer_to_linenumber;                                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PointerToLinenumber
                    _m07 uint32_t pointer_to_next_function;                               //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .PointerToNextFunction
                                                                                        
                    SDK_MAGIC_PROPERTIES( "_IMAGE_AUX_SYMBOL.Sym.FcnAry.Function.$", 0x8, true, 0xce4aaf0f1d155d35 );                                                      
                    SDK_FIXED_SIZE( u16_function_t, 0x8 );                                                      
                };                                                                      
                                                                                        
                struct u20_array_t                                                      
                {                                                                       
                    // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                       
                    //                                                                  
                    _m09 sdk::array<uint16_t, 4> dimension;                               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Dimension
                                                                                        
                    SDK_MAGIC_PROPERTIES( "_IMAGE_AUX_SYMBOL.Sym.FcnAry.Array.$", 0x8, true, 0x190f8e750b55c2ac );                                       
                    SDK_FIXED_SIZE( u20_array_t, 0x8 );                                       
                };                                                                      
                                                                                        
                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                             
                //                                                                      
                _m08 u16_function_t                        function;                      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Function
                _m10 u20_array_t                           array;                         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Array
                                                                                        
                SDK_MAGIC_PROPERTIES( "_IMAGE_AUX_SYMBOL.Sym.FcnAry.$", 0x8, true, 0x39d7bca7569894b3 );                             
                SDK_FIXED_SIZE( u12_fcn_ary_t, 0x8 );                                   
            };                                                                          
                                                                                        
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
            //                                                                          
            _m00 uint32_t                                           tag_index;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .TagIndex
            _m05 u4_misc_t                                          misc;                 //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Misc
            _m11 u12_fcn_ary_t                                      fcn_ary;              //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .FcnAry
            _m12 uint16_t                                           tv_index;             //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .TvIndex
                                                                                        
            SDK_MAGIC_PROPERTIES( "_IMAGE_AUX_SYMBOL.Sym.$", 0x12, true, 0xe46b0c24d0cd7177 );                    
            SDK_FIXED_SIZE( u0_sym_t, 0x12 );                                           
        };                                                                              
                                                                                        
        struct u24_file_t                                                               
        {                                                                               
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
            //                                                                          
            _m14 sdk::array<uint8_t, 18> name;                                            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Name
                                                                                        
            SDK_MAGIC_PROPERTIES( "_IMAGE_AUX_SYMBOL.File.$", 0x12, true, 0xbe6560b1ee081a15 );               
            SDK_FIXED_SIZE( u24_file_t, 0x12 );                                         
        };                                                                              
                                                                                        
        struct u28_section_t                                                            
        {                                                                               
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                
            //                                                                          
            _m16 uint32_t length;                                                         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Length
            _m17 uint16_t number_of_relocations;                                          //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .NumberOfRelocations
            _m18 uint16_t number_of_linenumbers;                                          //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .NumberOfLinenumbers
            _m19 uint32_t check_sum;                                                      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .CheckSum
            _m20 int16_t  number;                                                         //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .Number
            _m21 uint8_t  selection;                                                      //{ +0x000e    +0x000e    +0x000e    +0x000e    } | .Selection
            _m22 uint8_t  b_reserved;                                                     //{ +0x000f    +0x000f    +0x000f    +0x000f    } | .bReserved
            _m23 int16_t  high_number;                                                    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .HighNumber
                                                                                        
            SDK_MAGIC_PROPERTIES( "_IMAGE_AUX_SYMBOL.Section.$", 0x12, true, 0xe053bed818aee730 );                                
            SDK_FIXED_SIZE( u28_section_t, 0x12 );                                      
        };                                                                              
                                                                                        
        struct u32_crc_t                                                                
        {                                                                               
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
            //                                                                          
            _m26 uint32_t                crc;                                             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .crc
            _m27 sdk::array<uint8_t, 14> rgb_reserved;                                    //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .rgbReserved
                                                                                        
            SDK_MAGIC_PROPERTIES( "_IMAGE_AUX_SYMBOL.CRC.$", 0x12, true, 0x3700f86ba59d0c83 );                       
            SDK_FIXED_SIZE( u32_crc_t, 0x12 );                                          
        };                                                                              
                                                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                                                              
        _m13 u0_sym_t                                                         sym;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Sym
        _m15 u24_file_t                                                       file;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .File
        _m24 u28_section_t                                                    section;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Section
        _m25 struct image::aux_symbol_token_def_t                             token_def;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .TokenDef
        _m28 u32_crc_t                                                        crc;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .CRC
                                                                                        
        SDK_MAGIC_PROPERTIES( "_IMAGE_AUX_SYMBOL.$", 0x12, true, 0x95db51fbe373430e );          
        SDK_FIXED_SIZE( aux_symbol_t, 0x12 );                                           
    };                                                                                  
};
#include "magic/aux_symbol_t.end.hpp"
SDK_VERIFY( struct image::aux_symbol_t::u0_sym_t::u4_misc_t::u8_ln_sz_t, 0x4 );
SDK_VERIFY( union image::aux_symbol_t::u0_sym_t::u4_misc_t, 0x4 );
SDK_VERIFY( struct image::aux_symbol_t::u0_sym_t::u12_fcn_ary_t::u16_function_t, 0x8 );
SDK_VERIFY( struct image::aux_symbol_t::u0_sym_t::u12_fcn_ary_t::u20_array_t, 0x8 );
SDK_VERIFY( union image::aux_symbol_t::u0_sym_t::u12_fcn_ary_t, 0x8 );
SDK_VERIFY( struct image::aux_symbol_t::u0_sym_t, 0x12 );
SDK_VERIFY( struct image::aux_symbol_t::u24_file_t, 0x12 );
SDK_VERIFY( struct image::aux_symbol_t::u28_section_t, 0x12 );
SDK_VERIFY( struct image::aux_symbol_t::u32_crc_t, 0x12 );
SDK_VERIFY( union image::aux_symbol_t, 0x12 );
