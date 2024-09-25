#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/page_access_info_flags_t.start.hpp"
namespace mm
{
    // [union _MM_PAGE_ACCESS_INFO_FLAGS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union page_access_info_flags_t                   
    {                                                
        struct u0_file_t                             
        {                                            
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                            
            //                                       
            _m00 uint9_t file_pointer_index;           //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .FilePointerIndex
            _m01 uint1_t hard_fault;                   //{ +0x0000@9  +0x0000@9  +0x0000@9  +0x0000@9  } | .HardFault
            _m02 uint1_t image;                        //{ +0x0000@10 +0x0000@10 +0x0000@10 +0x0000@10 } | .Image
                                                     
            SDK_MAGIC_PROPERTIES( "_MM_PAGE_ACCESS_INFO_FLAGS.File.$", 0x4, true, 0xb57c74e61159bd19 );                            
            SDK_FIXED_SIZE( u0_file_t, 0x4 );                            
        };                                           
                                                     
        struct u4__private_t                         
        {                                            
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                            
            //                                       
            _m04 uint9_t file_pointer_index;           //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .FilePointerIndex
            _m05 uint1_t hard_fault;                   //{ +0x0000@9  +0x0000@9  +0x0000@9  +0x0000@9  } | .HardFault
                                                     
            SDK_MAGIC_PROPERTIES( "_MM_PAGE_ACCESS_INFO_FLAGS.Private.$", 0x4, true, 0x946f3a85a4f3a00f );                            
            SDK_FIXED_SIZE( u4__private_t, 0x4 );                            
        };                                           
                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                                           
        _m03 u0_file_t                      file;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .File
        _m06 u4__private_t                  _private;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Private
                                                     
        SDK_MAGIC_PROPERTIES( "_MM_PAGE_ACCESS_INFO_FLAGS.$", 0x4, true, 0x821da287cd9e562 );         
        SDK_FIXED_SIZE( page_access_info_flags_t, 0x4 );         
    };                                               
};
#include "magic/page_access_info_flags_t.end.hpp"
SDK_VERIFY( struct mm::page_access_info_flags_t::u0_file_t, 0x4 );
SDK_VERIFY( struct mm::page_access_info_flags_t::u4__private_t, 0x4 );
SDK_VERIFY( union mm::page_access_info_flags_t, 0x4 );
