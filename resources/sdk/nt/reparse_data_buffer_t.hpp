#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/reparse_data_buffer_t.start.hpp"
namespace nt
{
    // [struct _REPARSE_DATA_BUFFER]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct reparse_data_buffer_t                                                            
    {                                                                                       
        struct u0_symbolic_link_reparse_buffer_t                                            
        {                                                                                   
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                    
            //                                                                              
            _m02 uint16_t               substitute_name_offset;                               //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .SubstituteNameOffset
            _m03 uint16_t               substitute_name_length;                               //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .SubstituteNameLength
            _m04 uint16_t               print_name_offset;                                    //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .PrintNameOffset
            _m05 uint16_t               print_name_length;                                    //{ +0x0006    +0x0006    +0x0006    +0x0006    +0x0006    } | .PrintNameLength
            _m06 uint32_t               flags;                                                //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Flags
            _m07 sdk::array<wchar_t, 1> path_buffer;                                          //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .PathBuffer
                                                                                            
            SDK_NONVOL_PROPERTIES( "_REPARSE_DATA_BUFFER.SymbolicLinkReparseBuffer.$", 0x10, true, 0x7aabbc0a174961fd );                                                    
            SDK_FIXED_SIZE( u0_symbolic_link_reparse_buffer_t, 0x10 );                                                    
        };                                                                                  
                                                                                            
        struct u5_mount_point_reparse_buffer_t                                              
        {                                                                                   
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                    
            //                                                                              
            _m09 uint16_t               substitute_name_offset;                               //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .SubstituteNameOffset
            _m10 uint16_t               substitute_name_length;                               //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .SubstituteNameLength
            _m11 uint16_t               print_name_offset;                                    //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .PrintNameOffset
            _m12 uint16_t               print_name_length;                                    //{ +0x0006    +0x0006    +0x0006    +0x0006    +0x0006    } | .PrintNameLength
            _m13 sdk::array<wchar_t, 1> path_buffer;                                          //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .PathBuffer
                                                                                            
            SDK_NONVOL_PROPERTIES( "_REPARSE_DATA_BUFFER.MountPointReparseBuffer.$", 0xa, true, 0x658fe038ab66b5b4 );                                                    
            SDK_FIXED_SIZE( u5_mount_point_reparse_buffer_t, 0xa );                                                    
        };                                                                                  
                                                                                            
        struct u10_generic_reparse_buffer_t                                                 
        {                                                                                   
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                         
            //                                                                              
            _m15 sdk::array<uint8_t, 1> data_buffer;                                          //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .DataBuffer
                                                                                            
            SDK_NONVOL_PROPERTIES( "_REPARSE_DATA_BUFFER.GenericReparseBuffer.$", 0x1, true, 0x90f55f4964d20f0d );                                         
            SDK_FIXED_SIZE( u10_generic_reparse_buffer_t, 0x1 );                                         
        };                                                                                  
                                                                                            
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                                                                  
        _m00 uint32_t                                          reparse_tag;                   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .ReparseTag
        _m01 uint16_t                                          reparse_data_length;           //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .ReparseDataLength
        _m08 u0_symbolic_link_reparse_buffer_t                 symbolic_link_reparse_buffer;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .SymbolicLinkReparseBuffer
        _m14 u5_mount_point_reparse_buffer_t                   mount_point_reparse_buffer;    //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .MountPointReparseBuffer
        _m16 u10_generic_reparse_buffer_t                      generic_reparse_buffer;        //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .GenericReparseBuffer
                                                                                            
        SDK_NONVOL_PROPERTIES( "_REPARSE_DATA_BUFFER.$", 0x18, true, 0xd5c72cc5d687fd02 );                             
        SDK_FIXED_SIZE( reparse_data_buffer_t, 0x18 );                                      
    };                                                                                      
};
#include "magic/reparse_data_buffer_t.end.hpp"
SDK_VERIFY( struct nt::reparse_data_buffer_t::u0_symbolic_link_reparse_buffer_t, 0x10 );
SDK_VERIFY( struct nt::reparse_data_buffer_t::u5_mount_point_reparse_buffer_t, 0xa );
SDK_VERIFY( struct nt::reparse_data_buffer_t::u10_generic_reparse_buffer_t, 0x1 );
SDK_VERIFY( struct nt::reparse_data_buffer_t, 0x18 );
