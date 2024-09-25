#pragma once
#include <sdkgen/support_library.hpp>

namespace io { struct status_block_t;            }
namespace nt { struct bcb_t;                     }
namespace nt { struct fsrtl_common_fcb_header_t; }
namespace nt { struct kevent_t;                  }
namespace nt { struct private_volume_cachemap_t; }
namespace nt { struct section_object_pointers_t; }
namespace nt { struct shared_cache_map_t;        }
namespace nt { struct work_queue_entry_t;        }

#include "magic/flush_packet_t.start.hpp"
namespace cc
{
    struct partition_t;

    // [struct _CC_FLUSH_PACKET]
    // => Windows 11
    //
    struct flush_packet_t                                                             
    {                                                                                 
        // Windows 11                                                                 
        //                                                                            
        _m000 struct cc::partition_t*               partition;                          //{ +0x0000    } | .Partition
        _m001 struct nt::private_volume_cachemap_t* private_volume_cache_map;           //{ +0x0008    } | .PrivateVolumeCacheMap
        _m002 struct nt::shared_cache_map_t*        shared_cache_map;                   //{ +0x0010    } | .SharedCacheMap
        _m003 struct nt::section_object_pointers_t* section_object_pointer;             //{ +0x0018    } | .SectionObjectPointer
        _m004 int64_t                               target_offset;                      //{ +0x0020    } | .TargetOffset
        _m005 int64_t                               next_file_offset;                   //{ +0x0028    } | .NextFileOffset
        _m006 uint32_t                              next_length;                        //{ +0x0030    } | .NextLength
        _m007 uint32_t                              bytes_written;                      //{ +0x0034    } | .BytesWritten
        _m008 uint32_t                              mm_flush_flags;                     //{ +0x0038    } | .MmFlushFlags
        _m009 uint32_t                              hot_spot;                           //{ +0x003c    } | .HotSpot
        _m010 uint32_t                              verify_required;                    //{ +0x0040    } | .VerifyRequired
        _m011 struct nt::kevent_t*                  flush_event;                        //{ +0x0048    } | .FlushEvent
        _m012 int64_t                               flush_largest_lsn;                  //{ +0x0050    } | .FlushLargestLsn
        _m013 int64_t*                              largest_lsn;                        //{ +0x0058    } | .LargestLsn
        _m014 int64_t*                              callers_file_offset;                //{ +0x0060    } | .CallersFileOffset
        _m015 uint32_t                              callers_length;                     //{ +0x0068    } | .CallersLength
        _m016 uint8_t                               mark_writethrough;                  //{ +0x006c    } | .MarkWritethrough
        _m017 struct io::status_block_t*            callers_io_status;                  //{ +0x0070    } | .CallersIoStatus
        _m018 struct nt::bcb_t*                     first_bcb;                          //{ +0x0078    } | .FirstBcb
        _m019 int32_t                               first_failure_status;               //{ +0x0080    } | .FirstFailureStatus
        _m020 uint8_t                               is_lazy_writer;                     //{ +0x0084    } | .IsLazyWriter
        _m021 uint8_t                               fast_lazy_write;                    //{ +0x0085    } | .FastLazyWrite
        _m022 uint8_t                               force_full_flush;                   //{ +0x0086    } | .ForceFullFlush
        _m023 uint8_t                               performed_flush_for_mem_mapped;     //{ +0x0087    } | .PerformedFlushForMemMapped
        _m024 uint8_t                               teardown_flag_before_flush;         //{ +0x0088    } | .TeardownFlagBeforeFlush
        _m025 uint8_t                               should_retry_teardown;              //{ +0x0089    } | .ShouldRetryTeardown
        _m026 uint8_t                               flush_for_image_section;            //{ +0x008a    } | .FlushForImageSection
        _m027 uint8_t                               force_synchronous_lazy_write;       //{ +0x008b    } | .ForceSynchronousLazyWrite
        _m028 uint32_t                              acquire_for_lazy_write_out_flags;   //{ +0x008c    } | .AcquireForLazyWriteOutFlags
        _m029 int64_t                               start_tick;                         //{ +0x0090    } | .StartTick
        _m030 int64_t                               end_tick;                           //{ +0x0098    } | .EndTick
        _m031 struct nt::fsrtl_common_fcb_header_t* fs_context;                         //{ +0x00a0    } | .FsContext
        _m032 struct nt::work_queue_entry_t*        work_entry;                         //{ +0x00a8    } | .WorkEntry
        _m033 nt::list_entry_t*                     deferred_writes_list;               //{ +0x00b0    } | .DeferredWritesList
        _m034 uint8_t*                              coalescing_state;                   //{ +0x00b8    } | .CoalescingState
        _m035 uint8_t                               do_single_pass_flush;               //{ +0x00c0    } | .DoSinglePassFlush
        _m036 uint8_t                               recorded_single_pass_start_offset;  //{ +0x00c1    } | .RecordedSinglePassStartOffset
        _m037 int64_t                               single_pass_start_offset;           //{ +0x00c8    } | .SinglePassStartOffset
        _m038 uint64_t                              dirty_pages_at_start;               //{ +0x00d0    } | .DirtyPagesAtStart
        _m039 uint64_t                              total_bytes_written;                //{ +0x00d8    } | .TotalBytesWritten
        _m040 int64_t                               lw_flush_start;                     //{ +0x00e0    } | .LwFlushStart
        _m041 int64_t                               lw_flush_end;                       //{ +0x00e8    } | .LwFlushEnd
        _m042 uint32_t                              total_pages_flushed;                //{ +0x00f0    } | .TotalPagesFlushed
        _m043 uint32_t                              pages_to_write;                     //{ +0x00f4    } | .PagesToWrite
        _m044 uint32_t                              requeue_to_head_count;              //{ +0x00f8    } | .RequeueToHeadCount
        _m045 struct nt::work_queue_entry_t*        work_queue_entry;                   //{ +0x0100    } | .WorkQueueEntry
                                                                                      
        SDK_MAGIC_PROPERTIES( "_CC_FLUSH_PACKET.$", 0x0, false, 0xc2ac05a074a21b5f );                                  
        SDK_FIXED_SIZE( flush_packet_t, 0x108 );                                      
    };                                                                                
};
#include "magic/flush_packet_t.end.hpp"
SDK_VERIFY( struct cc::flush_packet_t, 0x108 );
