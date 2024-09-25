#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/atomic_create_ecp_context_t.start.hpp"
namespace nt
{
    struct file_timestamps_t;
    struct reparse_data_buffer_t;

    // [struct _ATOMIC_CREATE_ECP_CONTEXT]
    // => WDK 10 (NV)
    //
    struct atomic_create_ecp_context_t                                                  
    {                                                                                   
        // WDK 10                                                                       
        //                                                                              
        _m00 uint16_t                          size;                                      //{ +0x0000    } | .Size
        _m01 uint16_t                          in_flags;                                  //{ +0x0002    } | .InFlags
        _m02 uint16_t                          out_flags;                                 //{ +0x0004    } | .OutFlags
        _m03 uint16_t                          reparse_buffer_length;                     //{ +0x0006    } | .ReparseBufferLength
        _m04 struct nt::reparse_data_buffer_t* reparse_buffer;                            //{ +0x0008    } | .ReparseBuffer
        _m05 int64_t                           file_size;                                 //{ +0x0010    } | .FileSize
        _m06 int64_t                           valid_data_length;                         //{ +0x0018    } | .ValidDataLength
        _m07 struct nt::file_timestamps_t*     file_timestamps;                           //{ +0x0020    } | .FileTimestamps
        _m08 uint32_t                          file_attributes;                           //{ +0x0028    } | .FileAttributes
        _m09 uint32_t                          usn_source_info;                           //{ +0x002c    } | .UsnSourceInfo
        _m10 int64_t                           usn;                                       //{ +0x0030    } | .Usn
        _m11 uint32_t                          suppress_file_attribute_inheritance_mask;  //{ +0x0038    } | .SuppressFileAttributeInheritanceMask
        _m12 uint32_t                          in_op_flags;                               //{ +0x003c    } | .InOpFlags
        _m13 uint32_t                          out_op_flags;                              //{ +0x0040    } | .OutOpFlags
        _m14 uint32_t                          in_gen_flags;                              //{ +0x0044    } | .InGenFlags
        _m15 uint32_t                          out_gen_flags;                             //{ +0x0048    } | .OutGenFlags
        _m16 uint32_t                          case_sensitive_flags_mask;                 //{ +0x004c    } | .CaseSensitiveFlagsMask
        _m17 uint32_t                          in_case_sensitive_flags;                   //{ +0x0050    } | .InCaseSensitiveFlags
        _m18 uint32_t                          out_case_sensitive_flags;                  //{ +0x0054    } | .OutCaseSensitiveFlags
                                                                                        
        SDK_NONVOL_PROPERTIES( "_ATOMIC_CREATE_ECP_CONTEXT.$", 0x0, false, 0x420dd277c5682c40 );                                         
        SDK_FIXED_SIZE( atomic_create_ecp_context_t, 0x58 );                                         
    };                                                                                  
};
#include "magic/atomic_create_ecp_context_t.end.hpp"
SDK_VERIFY( struct nt::atomic_create_ecp_context_t, 0x58 );
