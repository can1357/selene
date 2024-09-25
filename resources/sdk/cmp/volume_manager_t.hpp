#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/cmsi_rw_lock_t.hpp"

#include "magic/volume_manager_t.start.hpp"
namespace cmp
{
    // [struct _CMP_VOLUME_MANAGER]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct volume_manager_t                                     
    {                                                           
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                                      
        _m00 struct nt::cmsi_rw_lock_t volume_context_list_lock;  //{ +0x0000    +0x0000    +0x0000    } | .VolumeContextListLock
        _m01 nt::list_entry_t          volume_context_list_head;  //{ +0x0008    +0x0008    +0x0008    } | .VolumeContextListHead
                                                                
        SDK_MAGIC_PROPERTIES( "_CMP_VOLUME_MANAGER.$", 0x18, true, 0xdbb8c7593d4d5041 );                         
        SDK_FIXED_SIZE( volume_manager_t, 0x18 );                         
    };                                                          
};
#include "magic/volume_manager_t.end.hpp"
SDK_VERIFY( struct cmp::volume_manager_t, 0x18 );
