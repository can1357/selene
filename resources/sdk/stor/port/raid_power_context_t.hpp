#pragma once
#include <sdkgen/support_library.hpp>
#include "storage_request_block_t.hpp"
#include "scsi_power_request_block_t.hpp"

namespace io { struct resource_entry_t; }

#include "magic/raid_power_context_t.start.hpp"
namespace stor::port
{
    // [struct _RAID_POWER_CONTEXT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct raid_power_context_t                                                
    {                                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                                     
        _m00 struct stor::port::scsi_power_request_block_t power_srb;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PowerSrb
        _m01 struct stor::port::storage_request_block_t    power_srb_ex;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PowerSrbEx
        _m02 sdk::array<uint8_t, 168>                      power_srb_ex_buffer;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PowerSrbExBuffer
        _m03 struct io::resource_entry_t*                  io_resource;          //{ +0x00a8    +0x00a8    +0x00a8    +0x00a8    } | .IoResource
        _m04 uint8_t                                       in_use;               //{ +0x00b0    +0x00b0    +0x00b0    +0x00b0    } | .InUse
        _m05 uint8_t                                       d3_processing;        //{ +0x00b1    +0x00b1    +0x00b1    +0x00b1    } | .D3Processing
                                                                               
        SDK_MAGIC_PROPERTIES( "_RAID_POWER_CONTEXT.$", 0xb8, true, 0x797b11bd10b332c7 );                    
        SDK_FIXED_SIZE( raid_power_context_t, 0xb8 );                          
    };                                                                         
};
#include "magic/raid_power_context_t.end.hpp"
SDK_VERIFY( struct stor::port::raid_power_context_t, 0xb8 );
