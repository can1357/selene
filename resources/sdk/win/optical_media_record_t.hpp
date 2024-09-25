#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/optical_media_record_t.start.hpp"
namespace win
{
    // [struct _OPTICAL_MEDIA_RECORD]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct optical_media_record_t                          
    {                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                 
        _m00 uint16_t               disk_number;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .DiskNumber
        _m01 uint16_t               bus_type;                //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .BusType
        _m02 uint16_t               device_type;             //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .DeviceType
        _m03 uint16_t               media_type;              //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .MediaType
        _m04 uint64_t               starting_offset;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .StartingOffset
        _m05 uint64_t               size;                    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Size
        _m06 uint64_t               number_of_free_blocks;   //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .NumberOfFreeBlocks
        _m07 uint64_t               total_number_of_blocks;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .TotalNumberOfBlocks
        _m08 uint64_t               next_writable_address;   //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .NextWritableAddress
        _m09 uint32_t               number_of_sessions;      //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .NumberOfSessions
        _m10 uint32_t               number_of_tracks;        //{ +0x0034    +0x0034    +0x0034    +0x0034    } | .NumberOfTracks
        _m11 uint32_t               bytes_per_sector;        //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .BytesPerSector
        _m12 uint16_t               disc_status;             //{ +0x003c    +0x003c    +0x003c    +0x003c    } | .DiscStatus
        _m13 uint16_t               last_session_status;     //{ +0x003e    +0x003e    +0x003e    +0x003e    } | .LastSessionStatus
        _m14 sdk::array<wchar_t, 1> data;                    //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .Data
                                                           
        SDK_MAGIC_PROPERTIES( "_OPTICAL_MEDIA_RECORD.$", 0x48, true, 0x9195eefa3b317fdb );                       
        SDK_FIXED_SIZE( optical_media_record_t, 0x48 );                       
    };                                                     
};
#include "magic/optical_media_record_t.end.hpp"
SDK_VERIFY( struct win::optical_media_record_t, 0x48 );
