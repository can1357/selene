#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/usn_journal_data_v2_t.start.hpp"
namespace win
{
    // [struct USN_JOURNAL_DATA_V2]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct usn_journal_data_v2_t                      
    {                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                
        //                                            
        _m00 uint64_t usn_journal_id;                   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .UsnJournalID
        _m01 int64_t  first_usn;                        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .FirstUsn
        _m02 int64_t  next_usn;                         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .NextUsn
        _m03 int64_t  lowest_valid_usn;                 //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .LowestValidUsn
        _m04 int64_t  max_usn;                          //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .MaxUsn
        _m05 uint64_t maximum_size;                     //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .MaximumSize
        _m06 uint64_t allocation_delta;                 //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .AllocationDelta
        _m07 uint16_t min_supported_major_version;      //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .MinSupportedMajorVersion
        _m08 uint16_t max_supported_major_version;      //{ +0x003a    +0x003a    +0x003a    +0x003a    } | .MaxSupportedMajorVersion
        _m09 uint32_t flags;                            //{ +0x003c    +0x003c    +0x003c    +0x003c    } | .Flags
        _m10 uint64_t range_track_chunk_size;           //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .RangeTrackChunkSize
        _m11 int64_t  range_track_file_size_threshold;  //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .RangeTrackFileSizeThreshold
                                                      
        SDK_MAGIC_PROPERTIES( "USN_JOURNAL_DATA_V2.$", 0x50, true, 0x880e3c5c35de3425 );                                
        SDK_FIXED_SIZE( usn_journal_data_v2_t, 0x50 );                                
    };                                                
};
#include "magic/usn_journal_data_v2_t.end.hpp"
SDK_VERIFY( struct win::usn_journal_data_v2_t, 0x50 );
