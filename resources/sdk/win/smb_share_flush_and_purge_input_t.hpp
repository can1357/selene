#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/smb_share_flush_and_purge_input_t.start.hpp"
namespace win
{
    // [struct _SMB_SHARE_FLUSH_AND_PURGE_INPUT]
    // => Windows 11
    //
    struct smb_share_flush_and_purge_input_t
    {                                       
        // Windows 11         
        //                    
        _m00 uint16_t version;                //{ +0x0000    } | .Version
                                            
        SDK_MAGIC_PROPERTIES( "_SMB_SHARE_FLUSH_AND_PURGE_INPUT.$", 0x0, false, 0x1e4a9b921e143188 );        
        SDK_FIXED_SIZE( smb_share_flush_and_purge_input_t, 0x2 );        
    };                                      
};
#include "magic/smb_share_flush_and_purge_input_t.end.hpp"
SDK_VERIFY( struct win::smb_share_flush_and_purge_input_t, 0x2 );
