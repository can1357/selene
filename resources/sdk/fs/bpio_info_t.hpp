#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/bpio_info_t.start.hpp"
namespace fs
{
    // [struct _FS_BPIO_INFO]
    // => Windows 11
    //
    struct bpio_info_t                                       
    {                                                        
        // Windows 11                                        
        //                                                   
        _m00 uint32_t                active_bypass_io_count;   //{ +0x0000    } | .ActiveBypassIoCount
        _m01 uint16_t                storage_driver_name_len;  //{ +0x0004    } | .StorageDriverNameLen
        _m02 sdk::array<wchar_t, 32> storage_driver_name;      //{ +0x0006    } | .StorageDriverName
                                                             
        SDK_MAGIC_PROPERTIES( "_FS_BPIO_INFO.$", 0x0, false, 0xfec2666d74ac694a );                        
        SDK_FIXED_SIZE( bpio_info_t, 0x48 );                        
    };                                                       
};
#include "magic/bpio_info_t.end.hpp"
SDK_VERIFY( struct fs::bpio_info_t, 0x48 );
