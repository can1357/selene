#pragma once
#include <sdkgen/support_library.hpp>
#include "mfnd_child_pf_admin_command_permission_entry_t.hpp"

#include "magic/mfnd_child_pf_admin_command_permission_status_t.start.hpp"
namespace stor::port
{
    // [struct _MFND_CHILD_PF_ADMIN_COMMAND_PERMISSION_STATUS]
    // => Windows 11
    //
    struct mfnd_child_pf_admin_command_permission_status_t            
    {                                                                 
        using command_permission_entries_t = sdk::array<struct stor::port::mfnd_child_pf_admin_command_permission_entry_t, 1>;                           
                                                                      
        // Windows 11                                                 
        //                                                            
        _m00 uint32_t                      version;                     //{ +0x0000    } | .Version
        _m01 uint32_t                      size;                        //{ +0x0004    } | .Size
        _m02 uint32_t                      command_count;               //{ +0x0008    } | .CommandCount
        _m03 command_permission_entries_t  command_permission_entries;  //{ +0x000c    } | .CommandPermissionEntries
                                                                      
        SDK_MAGIC_PROPERTIES( "_MFND_CHILD_PF_ADMIN_COMMAND_PERMISSION_STATUS.$", 0x0, false, 0x193310b7e52d87f2 );                           
        SDK_FIXED_SIZE( mfnd_child_pf_admin_command_permission_status_t, 0x1c );                           
    };                                                                
};
#include "magic/mfnd_child_pf_admin_command_permission_status_t.end.hpp"
SDK_VERIFY( struct stor::port::mfnd_child_pf_admin_command_permission_status_t, 0x1c );
