#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/storage_endurance_info_t.start.hpp"
namespace nt
{
    // [struct _STORAGE_ENDURANCE_INFO]
    // => WDK 10 (NV)
    //
    struct storage_endurance_info_t                   
    {                                                 
        struct u0_flags_t                             
        {                                             
            // WDK 10                                 
            //                                        
            _m02 uint1_t shared;                        //{ +0x0000@0  } | .Shared
                                                      
            SDK_NONVOL_PROPERTIES( "_STORAGE_ENDURANCE_INFO.Flags.$", 0x0, false, 0x7b362028e8468d41 );                        
            SDK_FIXED_SIZE( u0_flags_t, 0x4 );                        
        };                                            
                                                      
        // WDK 10                                     
        //                                            
        _m00 uint32_t                valid_fields;      //{ +0x0000    } | .ValidFields
        _m01 uint32_t                group_id;          //{ +0x0004    } | .GroupId
        _m03 u0_flags_t              flags;             //{ +0x0008    } | .Flags
        _m04 uint32_t                life_percentage;   //{ +0x000c    } | .LifePercentage
        _m05 sdk::array<uint8_t, 16> bytes_read_count;  //{ +0x0010    } | .BytesReadCount
        _m06 sdk::array<uint8_t, 16> byte_write_count;  //{ +0x0020    } | .ByteWriteCount
                                                      
        SDK_NONVOL_PROPERTIES( "_STORAGE_ENDURANCE_INFO.$", 0x0, false, 0x320ceb3d10b7c0b6 );                 
        SDK_FIXED_SIZE( storage_endurance_info_t, 0x30 );                 
    };                                                
};
#include "magic/storage_endurance_info_t.end.hpp"
SDK_VERIFY( struct nt::storage_endurance_info_t::u0_flags_t, 0x4 );
SDK_VERIFY( struct nt::storage_endurance_info_t, 0x30 );
