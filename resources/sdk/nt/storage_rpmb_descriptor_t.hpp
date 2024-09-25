#pragma once
#include <sdkgen/support_library.hpp>
#include "../stor/port/storage_rpmb_frame_type_t.hpp"

#include "magic/storage_rpmb_descriptor_t.start.hpp"
namespace nt
{
    // [struct _STORAGE_RPMB_DESCRIPTOR]
    // => WDK 10 (NV)
    //
    struct storage_rpmb_descriptor_t                                                     
    {                                                                                    
        // WDK 10                                                                        
        //                                                                               
        _m00 uint32_t                                   version;                           //{ +0x0000    } | .Version
        _m01 uint32_t                                   size;                              //{ +0x0004    } | .Size
        _m02 uint32_t                                   size_in_bytes;                     //{ +0x0008    } | .SizeInBytes
        _m03 uint32_t                                   max_reliable_write_size_in_bytes;  //{ +0x000c    } | .MaxReliableWriteSizeInBytes
        _m04 enum stor::port::storage_rpmb_frame_type_t frame_format;                      //{ +0x0010    } | .FrameFormat
                                                                                         
        SDK_NONVOL_PROPERTIES( "_STORAGE_RPMB_DESCRIPTOR.$", 0x0, false, 0x9b90492799b21817 );                                 
        SDK_FIXED_SIZE( storage_rpmb_descriptor_t, 0x14 );                                 
    };                                                                                   
};
#include "magic/storage_rpmb_descriptor_t.end.hpp"
SDK_VERIFY( struct nt::storage_rpmb_descriptor_t, 0x14 );
