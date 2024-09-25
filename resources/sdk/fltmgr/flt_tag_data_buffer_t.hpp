#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/flt_tag_data_buffer_t.start.hpp"
namespace fltmgr
{
    // [struct _FLT_TAG_DATA_BUFFER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct flt_tag_data_buffer_t                                                            
    {                                                                                       
        struct u0_symbolic_link_reparse_buffer_t                                            
        {                                                                                   
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                    
            //                                                                              
            _m03 uint16_t               substitute_name_offset;                               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SubstituteNameOffset
            _m04 uint16_t               substitute_name_length;                               //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .SubstituteNameLength
            _m05 uint16_t               print_name_offset;                                    //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .PrintNameOffset
            _m06 uint16_t               print_name_length;                                    //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .PrintNameLength
            _m07 uint32_t               flags;                                                //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Flags
            _m08 sdk::array<wchar_t, 1> path_buffer;                                          //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .PathBuffer
                                                                                            
            SDK_MAGIC_PROPERTIES( "_FLT_TAG_DATA_BUFFER.SymbolicLinkReparseBuffer.$", 0x10, true, 0x5822a3617a1c8263 );                                                    
            SDK_FIXED_SIZE( u0_symbolic_link_reparse_buffer_t, 0x10 );                                                    
        };                                                                                  
                                                                                            
        struct u4_mount_point_reparse_buffer_t                                              
        {                                                                                   
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                    
            //                                                                              
            _m10 uint16_t               substitute_name_offset;                               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SubstituteNameOffset
            _m11 uint16_t               substitute_name_length;                               //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .SubstituteNameLength
            _m12 uint16_t               print_name_offset;                                    //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .PrintNameOffset
            _m13 uint16_t               print_name_length;                                    //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .PrintNameLength
            _m14 sdk::array<wchar_t, 1> path_buffer;                                          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .PathBuffer
                                                                                            
            SDK_MAGIC_PROPERTIES( "_FLT_TAG_DATA_BUFFER.MountPointReparseBuffer.$", 0xa, true, 0x554d238bc1163097 );                                                    
            SDK_FIXED_SIZE( u4_mount_point_reparse_buffer_t, 0xa );                                                    
        };                                                                                  
                                                                                            
        struct u8_generic_reparse_buffer_t                                                  
        {                                                                                   
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                         
            //                                                                              
            _m16 sdk::array<uint8_t, 1> data_buffer;                                          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .DataBuffer
                                                                                            
            SDK_MAGIC_PROPERTIES( "_FLT_TAG_DATA_BUFFER.GenericReparseBuffer.$", 0x1, true, 0x1e97fc6b1a7cd4df );                                         
            SDK_FIXED_SIZE( u8_generic_reparse_buffer_t, 0x1 );                                         
        };                                                                                  
                                                                                            
        struct u12_generic_guid_reparse_buffer_t                                            
        {                                                                                   
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                         
            //                                                                              
            _m18 struct nt::guid_t      tag_guid;                                             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .TagGuid
            _m19 sdk::array<uint8_t, 1> data_buffer;                                          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .DataBuffer
                                                                                            
            SDK_MAGIC_PROPERTIES( "_FLT_TAG_DATA_BUFFER.GenericGUIDReparseBuffer.$", 0x14, true, 0xdf70cdbed843fa18 );                                         
            SDK_FIXED_SIZE( u12_generic_guid_reparse_buffer_t, 0x14 );                                         
        };                                                                                  
                                                                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                                                                  
        _m00 uint32_t                                          file_tag;                      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .FileTag
        _m01 uint16_t                                          tag_data_length;               //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .TagDataLength
        _m02 uint16_t                                          unparsed_name_length;          //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .UnparsedNameLength
        _m09 u0_symbolic_link_reparse_buffer_t                 symbolic_link_reparse_buffer;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .SymbolicLinkReparseBuffer
        _m15 u4_mount_point_reparse_buffer_t                   mount_point_reparse_buffer;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .MountPointReparseBuffer
        _m17 u8_generic_reparse_buffer_t                       generic_reparse_buffer;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .GenericReparseBuffer
        _m20 u12_generic_guid_reparse_buffer_t                 generic_guid_reparse_buffer;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .GenericGUIDReparseBuffer
                                                                                            
        SDK_MAGIC_PROPERTIES( "_FLT_TAG_DATA_BUFFER.$", 0x1c, true, 0x3747bd368fab24ec );                             
        SDK_FIXED_SIZE( flt_tag_data_buffer_t, 0x1c );                                      
    };                                                                                      
};
#include "magic/flt_tag_data_buffer_t.end.hpp"
SDK_VERIFY( struct fltmgr::flt_tag_data_buffer_t::u0_symbolic_link_reparse_buffer_t, 0x10 );
SDK_VERIFY( struct fltmgr::flt_tag_data_buffer_t::u4_mount_point_reparse_buffer_t, 0xa );
SDK_VERIFY( struct fltmgr::flt_tag_data_buffer_t::u8_generic_reparse_buffer_t, 0x1 );
SDK_VERIFY( struct fltmgr::flt_tag_data_buffer_t::u12_generic_guid_reparse_buffer_t, 0x14 );
SDK_VERIFY( struct fltmgr::flt_tag_data_buffer_t, 0x1c );
