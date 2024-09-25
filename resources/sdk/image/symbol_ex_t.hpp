#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/symbol_ex_t.start.hpp"
namespace image
{
    // [struct _IMAGE_SYMBOL_EX]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct symbol_ex_t                                                    
    {                                                                     
        union u0_n_t                                                      
        {                                                                 
            struct u4_name_t                                              
            {                                                             
                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                        
                //                                                        
                _m01 uint32_t _short;                                       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Short
                _m02 uint32_t _long;                                        //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Long
                                                                          
                SDK_MAGIC_PROPERTIES( "_IMAGE_SYMBOL_EX.N.Name.$", 0x8, true, 0xfccdb7fab3b71904 );                                        
                SDK_FIXED_SIZE( u4_name_t, 0x8 );                                        
            };                                                            
                                                                          
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                 
            //                                                            
            _m00 sdk::array<uint8_t, 8>  short_name;                        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ShortName
            _m03 u4_name_t               name;                              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Name
            _m04 sdk::array<uint32_t, 2> long_name;                         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .LongName
                                                                          
            SDK_MAGIC_PROPERTIES( "_IMAGE_SYMBOL_EX.N.$", 0x8, true, 0x566a60997c9342c8 );                                 
            SDK_FIXED_SIZE( u0_n_t, 0x8 );                                 
        };                                                                
                                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                                
        _m05 u0_n_t                                 n;                      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .N
        _m06 uint32_t                               value;                  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Value
        _m07 int32_t                                section_number;         //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .SectionNumber
        _m08 uint16_t                               type;                   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Type
        _m09 uint8_t                                storage_class;          //{ +0x0012    +0x0012    +0x0012    +0x0012    } | .StorageClass
        _m10 uint8_t                                number_of_aux_symbols;  //{ +0x0013    +0x0013    +0x0013    +0x0013    } | .NumberOfAuxSymbols
                                                                          
        SDK_MAGIC_PROPERTIES( "_IMAGE_SYMBOL_EX.$", 0x14, true, 0xb17fdfda9e4155f3 );                      
        SDK_FIXED_SIZE( symbol_ex_t, 0x14 );                              
    };                                                                    
};
#include "magic/symbol_ex_t.end.hpp"
SDK_VERIFY( struct image::symbol_ex_t::u0_n_t::u4_name_t, 0x8 );
SDK_VERIFY( union image::symbol_ex_t::u0_n_t, 0x8 );
SDK_VERIFY( struct image::symbol_ex_t, 0x14 );
