#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/mfnd_child_pf_admin_command_permission_entry_t.start.hpp"
namespace stor::port
{
    // [struct _MFND_CHILD_PF_ADMIN_COMMAND_PERMISSION_ENTRY]
    // => Windows 11
    //
    struct mfnd_child_pf_admin_command_permission_entry_t
    {                                                    
        // Windows 11                
        //                           
        _m00 uint32_t version;                             //{ +0x0000    } | .Version
        _m01 uint32_t size;                                //{ +0x0004    } | .Size
        _m02 uint32_t flags;                               //{ +0x0008    } | .Flags
        _m03 uint8_t  command_opcode;                      //{ +0x000c    } | .CommandOpcode
                                                         
        SDK_MAGIC_PROPERTIES( "_MFND_CHILD_PF_ADMIN_COMMAND_PERMISSION_ENTRY.$", 0x0, false, 0xda3b17fcb2611ba );               
        SDK_FIXED_SIZE( mfnd_child_pf_admin_command_permission_entry_t, 0x10 );               
    };                                                   
};
#include "magic/mfnd_child_pf_admin_command_permission_entry_t.end.hpp"
SDK_VERIFY( struct stor::port::mfnd_child_pf_admin_command_permission_entry_t, 0x10 );
