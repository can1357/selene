#pragma once
#include <sdkgen/support_library.hpp>
#include "object_ref_stack_info_t.hpp"

#include "magic/object_ref_info_t.start.hpp"
namespace nt
{
    struct object_header_t;

    // [struct _OBJECT_REF_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct object_ref_info_t                                                
    {                                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                                                  
        _m00 struct nt::object_header_t*                    object_header;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ObjectHeader
        _m01 void*                                          next_ref;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .NextRef
        _m02 sdk::array<uint8_t, 16>                        image_file_name;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ImageFileName
        _m03 uint16_t                                       next_pos;         //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .NextPos
        _m04 uint16_t                                       max_stacks;       //{ +0x0022    +0x0022    +0x0022    +0x0022    } | .MaxStacks
        _m05 sdk::array<struct nt::object_ref_stack_info_t> stack_info;       //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .StackInfo
                                                                            
        SDK_MAGIC_PROPERTIES( "_OBJECT_REF_INFO.$", 0x28, true, 0xcdead03408d4e7b4 );                
        SDK_FIXED_SIZE( object_ref_info_t, 0x28 );                          
    };                                                                      
};
#include "magic/object_ref_info_t.end.hpp"
SDK_VERIFY( struct nt::object_ref_info_t, 0x28 );
