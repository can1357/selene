#pragma once
#include <sdkgen/support_library.hpp>
#include "mfnd_set_child_pf_admin_command_permission_entry_t.hpp"

#include "magic/mfnd_set_child_pf_admin_command_permission_additional_t.start.hpp"
namespace stor::port
{
    // [struct _MFND_SET_CHILD_PF_ADMIN_COMMAND_PERMISSION_ADDITIONAL]
    // => Windows 11
    //
    struct mfnd_set_child_pf_admin_command_permission_additional_t    
    {                                                                 
        using command_permission_entries_t = sdk::array<struct stor::port::mfnd_set_child_pf_admin_command_permission_entry_t, 1>;                           
                                                                      
        // Windows 11                                                 
        //                                                            
        _m00 uint32_t                      version;                     //{ +0x0000    } | .Version
        _m01 uint32_t                      size;                        //{ +0x0004    } | .Size
        _m02 uint32_t                      flags;                       //{ +0x0008    } | .Flags
        _m03 uint32_t                      command_count;               //{ +0x000c    } | .CommandCount
        _m04 command_permission_entries_t  command_permission_entries;  //{ +0x0010    } | .CommandPermissionEntries
                                                                      
        SDK_MAGIC_PROPERTIES( "_MFND_SET_CHILD_PF_ADMIN_COMMAND_PERMISSION_ADDITIONAL.$", 0x0, false, 0xa277a4e0bc83c852 );                           
        SDK_FIXED_SIZE( mfnd_set_child_pf_admin_command_permission_additional_t, 0x20 );                           
    };                                                                
};
#include "magic/mfnd_set_child_pf_admin_command_permission_additional_t.end.hpp"
SDK_VERIFY( struct stor::port::mfnd_set_child_pf_admin_command_permission_additional_t, 0x20 );
