#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/scrub_data_output_t.start.hpp"
namespace win
{
    // [struct _SCRUB_DATA_OUTPUT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct scrub_data_output_t                                                                     
    {                                                                                              
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                             
        //                                                                                         
        _m00 uint32_t                 size;                                                          //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 uint32_t                 flags;                                                         //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 uint32_t                 status;                                                        //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Status
        _m03 uint64_t                 error_file_offset;                                             //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .ErrorFileOffset
        _m04 uint64_t                 error_length;                                                  //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .ErrorLength
        _m05 uint64_t                 number_of_bytes_repaired;                                      //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .NumberOfBytesRepaired
        _m06 uint64_t                 number_of_bytes_failed;                                        //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .NumberOfBytesFailed
        _m07 uint64_t                 internal_file_reference;                                       //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .InternalFileReference
        _m08 uint16_t                 resume_context_length;                                         //{ +0x0038    +0x0038    +0x0038    +0x0038    +0x0038    } | .ResumeContextLength
        _m09 uint16_t                 parity_extent_data_offset;                                     //{ +0x003a    +0x003a    +0x003a    +0x003a    +0x003a    } | .ParityExtentDataOffset
        _m10 sdk::array<uint8_t, 816> resume_context;                                                //{ +0x0080    +0x0050    +0x0080    +0x00c0    +0x0080    } | .ResumeContext
                                                                                                   
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                             
        //                                                                                         
        _m11 uint64_t                 number_of_metadata_bytes_processed;                            //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .NumberOfMetadataBytesProcessed
        _m12 uint64_t                 number_of_data_bytes_processed;                                //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .NumberOfDataBytesProcessed
        _m13 uint64_t                 total_number_of_metadata_bytes_in_use;                         //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .TotalNumberOfMetadataBytesInUse
        _m14 uint64_t                 total_number_of_data_bytes_in_use;                             //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .TotalNumberOfDataBytesInUse
                                                                                                   
        // Windows 11                                                                              
        //                                                                                         
        _m15 uint64_t                 data_bytes_skipped_due_to_no_allocation;                       //{ +0x0080    } | .DataBytesSkippedDueToNoAllocation
        _m16 uint64_t                 data_bytes_skipped_due_to_invalid_run;                         //{ +0x0088    } | .DataBytesSkippedDueToInvalidRun
        _m17 uint64_t                 data_bytes_skipped_due_to_integrity_stream;                    //{ +0x0090    } | .DataBytesSkippedDueToIntegrityStream
        _m18 uint64_t                 data_bytes_skipped_due_to_region_being_clean;                  //{ +0x0098    } | .DataBytesSkippedDueToRegionBeingClean
        _m19 uint64_t                 data_bytes_skipped_due_to_lock_conflict;                       //{ +0x00a0    } | .DataBytesSkippedDueToLockConflict
        _m20 uint64_t                 data_bytes_skipped_due_to_no_scrub_data_flag;                  //{ +0x00a8    } | .DataBytesSkippedDueToNoScrubDataFlag
        _m21 uint64_t                 data_bytes_skipped_due_to_no_scrub_non_integrity_stream_flag;  //{ +0x00b0    } | .DataBytesSkippedDueToNoScrubNonIntegrityStreamFlag
        _m22 uint64_t                 data_bytes_scrubbed;                                           //{ +0x00b8    } | .DataBytesScrubbed
                                                                                                   
        SDK_MAGIC_PROPERTIES( "_SCRUB_DATA_OUTPUT.$", 0x3b0, true, 0xeba6dc3a59e3be9f );                                                             
        SDK_DYNAMIC_SIZE( scrub_data_output_t );                                                             
    };                                                                                             
};
#include "magic/scrub_data_output_t.end.hpp"
