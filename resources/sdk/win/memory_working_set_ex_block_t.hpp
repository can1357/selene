#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/memory_working_set_ex_block_t.start.hpp"
namespace win
{
    // [struct _MEMORY_WORKING_SET_EX_BLOCK]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct memory_working_set_ex_block_t                            
    {                                                               
        struct u0_invalid_t                                         
        {                                                           
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                          
            //                                                      
            _m11 uint1_t  valid;                                      //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .Valid
            _m12 uint1_t  shared;                                     //{ +0x0000@15 +0x0000@15 +0x0000@15 +0x0000@15 } | .Shared
            _m13 uint1_t  page_table;                                 //{ +0x0000@21 +0x0000@21 +0x0000@21 +0x0000@21 } | .PageTable
            _m14 uint2_t  location;                                   //{ +0x0000@22 +0x0000@22 +0x0000@22 +0x0000@22 } | .Location
            _m15 uint3_t  priority;                                   //{ +0x0000@24 +0x0000@24 +0x0000@24 +0x0000@24 } | .Priority
            _m16 uint1_t  modified_list;                              //{ +0x0000@27 +0x0000@27 +0x0000@27 +0x0000@27 } | .ModifiedList
            _m17 uint1_t  shared_original;                            //{ +0x0000@30 +0x0000@30 +0x0000@30 +0x0000@30 } | .SharedOriginal
            _m18 uint1_t  bad;                                        //{ +0x0000@31 +0x0000@31 +0x0000@31 +0x0000@31 } | .Bad
            _m19 uint32_t reserved_ulong;                             //{ +0x0000@32 +0x0000@32 +0x0000@32 +0x0000@32 } | .ReservedUlong
                                                                    
            SDK_MAGIC_PROPERTIES( "_MEMORY_WORKING_SET_EX_BLOCK.Invalid.$", 0x8, true, 0x64bb38c3b0d0e320 );                                          
            SDK_FIXED_SIZE( u0_invalid_t, 0x8 );                                          
        };                                                          
                                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                                          
        _m00 uint1_t                      valid;                      //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .Valid
        _m01 uint3_t                      share_count;                //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .ShareCount
        _m02 uint11_t                     win32_protection;           //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .Win32Protection
        _m03 uint1_t                      shared;                     //{ +0x0000@15 +0x0000@15 +0x0000@15 +0x0000@15 } | .Shared
        _m04 uint6_t                      node;                       //{ +0x0000@16 +0x0000@16 +0x0000@16 +0x0000@16 } | .Node
        _m05 uint1_t                      locked;                     //{ +0x0000@22 +0x0000@22 +0x0000@22 +0x0000@22 } | .Locked
        _m06 uint1_t                      large_page;                 //{ +0x0000@23 +0x0000@23 +0x0000@23 +0x0000@23 } | .LargePage
        _m07 uint3_t                      priority;                   //{ +0x0000@24 +0x0000@24 +0x0000@24 +0x0000@24 } | .Priority
        _m08 uint1_t                      shared_original;            //{ +0x0000@30 +0x0000@30 +0x0000@30 +0x0000@30 } | .SharedOriginal
        _m09 uint1_t                      bad;                        //{ +0x0000@31 +0x0000@31 +0x0000@31 +0x0000@31 } | .Bad
        _m10 varuint_t                    reserved_ulong;             //{ +0x0000@32 +0x0000@36 +0x0000@36 +0x0000@36 } | .ReservedUlong
        _m20 u0_invalid_t                 invalid;                    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Invalid
                                                                    
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                                          
        _m21 uint4_t                      win32_graphics_protection;  //{ +0x0000@32 +0x0000@32 +0x0000@32 } | .Win32GraphicsProtection
                                                                    
        SDK_MAGIC_PROPERTIES( "_MEMORY_WORKING_SET_EX_BLOCK.$", 0x8, true, 0xa7db5a5dd9144582 );                          
        SDK_FIXED_SIZE( memory_working_set_ex_block_t, 0x8 );                          
    };                                                              
};
#include "magic/memory_working_set_ex_block_t.end.hpp"
SDK_VERIFY( struct win::memory_working_set_ex_block_t::u0_invalid_t, 0x8 );
SDK_VERIFY( struct win::memory_working_set_ex_block_t, 0x8 );
