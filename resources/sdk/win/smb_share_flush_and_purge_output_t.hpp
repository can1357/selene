#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/smb_share_flush_and_purge_output_t.start.hpp"
namespace win
{
    // [struct _SMB_SHARE_FLUSH_AND_PURGE_OUTPUT]
    // => Windows 11
    //
    struct smb_share_flush_and_purge_output_t
    {                                        
        // Windows 11                  
        //                             
        _m00 uint32_t c_entries_purged;        //{ +0x0000    } | .cEntriesPurged
                                             
        SDK_MAGIC_PROPERTIES( "_SMB_SHARE_FLUSH_AND_PURGE_OUTPUT.$", 0x0, false, 0x9eec2be6136386ab );                 
        SDK_FIXED_SIZE( smb_share_flush_and_purge_output_t, 0x4 );                 
    };                                       
};
#include "magic/smb_share_flush_and_purge_output_t.end.hpp"
SDK_VERIFY( struct win::smb_share_flush_and_purge_output_t, 0x4 );
