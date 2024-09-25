#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/name_control_t.start.hpp"
namespace fltmgr
{
    // [struct _NAME_CONTROL]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct name_control_t                             
    {                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                            
        _m00 nt::unicode_view      name;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Name
        _m01 uint32_t              buffer_size;         //{ +0x0018    +0x0014    +0x0014    +0x0014    } | .BufferSize
        _m02 uint16_t              share_name_length;   //{ +0x001c    +0x0018    +0x0018    +0x0018    } | .ShareNameLength
        _m03 uint16_t              stream_name_length;  //{ +0x001e    +0x001a    +0x001a    +0x001a    } | .StreamNameLength
        _m04 sdk::array<char, 254> small_buffer;        //{ +0x0020    +0x001c    +0x001c    +0x001c    } | .SmallBuffer
                                                      
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                            
        _m05 uint32_t              flags;               //{ +0x0010    +0x0010    +0x0010    } | .Flags
                                                      
        // Windows 10 v1607                           
        //                                            
        _m06 uint8_t*              allocated_buffer;    //{ +0x0010    } | .AllocatedBuffer
                                                      
        SDK_MAGIC_PROPERTIES( "_NAME_CONTROL.$", 0x120, true, 0x24e7272cf59742c );                   
        SDK_FIXED_SIZE( name_control_t, 0x120 );                   
    };                                                
};
#include "magic/name_control_t.end.hpp"
SDK_VERIFY( struct fltmgr::name_control_t, 0x120 );
