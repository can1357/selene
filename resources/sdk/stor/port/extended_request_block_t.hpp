#pragma once
#include <sdkgen/support_library.hpp>
#include "../../nt/guid_t.hpp"
#include "../../nt/kevent_t.hpp"
#include "../../nt/slist_entry_t.hpp"
#include "stor_event_queue_entry_t.hpp"
#include "../../nt/processor_number_t.hpp"

namespace nt { struct irp_t;                   }
namespace nt { struct mdl_t;                   }
namespace nt { struct npaged_lookaside_list_t; }
namespace nt { struct scatter_gather_list_t;   }
namespace nt { struct scsi_request_block_t;    }

#include "magic/extended_request_block_t.start.hpp"
namespace stor::port
{
    struct startio_token_t;
    struct raid_unit_extension_t;
    struct stor_crypto_key_info_t;
    struct extended_request_block_t;
    struct raid_adapter_extension_t;

    // [struct _EXTENDED_REQUEST_BLOCK]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct extended_request_block_t                                                          
    {                                                                                        
        struct u0_srb_data_t                                                                 
        {                                                                                    
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                           
            //                                                                               
            _m24 void*   original_request;                                                     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .OriginalRequest
            _m25 void*   data_buffer;                                                          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .DataBuffer
            _m26 void*   data_in_buffer;                                                       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .DataInBuffer
            _m27 void*   sense_info_buffer;                                                    //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .SenseInfoBuffer
            _m28 uint8_t sense_info_buffer_length;                                             //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .SenseInfoBufferLength
                                                                                             
            SDK_MAGIC_PROPERTIES( "_EXTENDED_REQUEST_BLOCK.SrbData.$", 0x28, true, 0x5565cf1df1b7d75e );                                                           
            SDK_FIXED_SIZE( u0_srb_data_t, 0x28 );                                                           
        };                                                                                   
                                                                                             
        using completion_routine_t = sdk::function<void(struct stor::port::extended_request_block_t*)>*;                                  
                                                                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                  
        //                                                                                   
        _m000 uint32_t                                     signature;                          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Signature
        _m001 struct nt::npaged_lookaside_list_t*          pool;                               //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Pool
        _m002 uint1_t                                      owned_mdl;                          //{ +0x0010@0  +0x0010@0  +0x0010@0  +0x0010@0  } | .OwnedMdl
        _m003 uint1_t                                      remove_from_event_queue;            //{ +0x0010@1  +0x0010@1  +0x0010@1  +0x0010@1  } | .RemoveFromEventQueue
        _m004 uint3_t                                      state;                              //{ +0x0010@2  +0x0010@2  +0x0010@2  +0x0010@2  } | .State
        _m005 uint1_t                                      remapped_sense_info;                //{ +0x0010@5  +0x0010@5  +0x0010@5  +0x0010@5  } | .RemappedSenseInfo
        _m006 uint1_t                                      compat_srb_in_use;                  //{ +0x0010@6  +0x0010@6  +0x0010@6  +0x0010@6  } | .CompatSrbInUse
        _m007 uint1_t                                      srb_activate_component;             //{ +0x0010@7  +0x0010@7  +0x0010@7  +0x0010@7  } | .SrbActivateComponent
        _m008 uint1_t                                      do_extra_adapter_dereference;       //{ +0x0011@0  +0x0011@0  +0x0011@0  +0x0011@0  } | .DoExtraAdapterDereference
        _m009 uint1_t                                      do_extra_unit_dereference;          //{ +0x0011@1  +0x0011@1  +0x0011@1  +0x0011@1  } | .DoExtraUnitDereference
        _m010 uint1_t                                      abort_in_progress;                  //{ +0x0011@2  +0x0011@2  +0x0011@2  +0x0011@2  } | .AbortInProgress
        _m011 uint1_t                                      by_pass_paused_gateway;             //{ +0x0011@3  +0x0011@3  +0x0011@3  +0x0011@3  } | .ByPassPausedGateway
        _m012 struct nt::processor_number_t                initiating_processor;               //{ +0x0012    +0x0012    +0x0012    +0x0012    } | .InitiatingProcessor
        _m013 struct nt::slist_entry_t                     completed_link;                     //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .CompletedLink
        _m014 struct stor::port::stor_event_queue_entry_t  pending_link;                       //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .PendingLink
        _m015 struct nt::mdl_t*                            mdl;                                //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .Mdl
        _m016 struct nt::scatter_gather_list_t*            sg_list;                            //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .SgList
        _m017 struct nt::mdl_t*                            remapped_sg_list_mdl;               //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .RemappedSgListMdl
        _m018 struct nt::scatter_gather_list_t*            remapped_sg_list;                   //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .RemappedSgList
        _m019 struct nt::mdl_t*                            data_in_mdl;                        //{ +0x0088    +0x0088    +0x0088    +0x0088    } | .DataInMdl
        _m020 struct nt::mdl_t*                            double_buffered_mdl;                //{ +0x0090    +0x0090    +0x0090    +0x0090    } | .DoubleBufferedMdl
        _m021 struct nt::scatter_gather_list_t*            data_in_sg_list;                    //{ +0x0098    +0x0098    +0x0098    +0x0098    } | .DataInSgList
        _m022 struct nt::irp_t*                            irp;                                //{ +0x00a0    +0x00a0    +0x00a0    +0x00a0    } | .Irp
        _m023 struct nt::scsi_request_block_t*             srb;                                //{ +0x00a8    +0x00a8    +0x00a8    +0x00a8    } | .Srb
        _m029 u0_srb_data_t                                srb_data;                           //{ +0x00b0    +0x00b0    +0x00b0    +0x00b0    } | .SrbData
        _m030 struct stor::port::raid_adapter_extension_t* adapter;                            //{ +0x00d8    +0x00d8    +0x00d8    +0x00d8    } | .Adapter
        _m031 struct stor::port::raid_unit_extension_t*    unit;                               //{ +0x00e0    +0x00e0    +0x00e0    +0x00e0    } | .Unit
        _m032 sdk::array<uint8_t, 424>                     scatter_gather_buffer;              //{ +0x00e8    +0x00e8    +0x00e8    +0x00e8    } | .ScatterGatherBuffer
        _m033 completion_routine_t                         completion_routine;                 //{ +0x0290    +0x0290    +0x0290    +0x0290    } | .CompletionRoutine
        _m034 struct nt::kevent_t                          completion_event;                   //{ +0x0298    +0x0298    +0x0298    +0x0298    } | .CompletionEvent
        _m035 uint64_t                                     request_wait_duration;              //{ +0x02b0    +0x02b0    +0x02b0    +0x02b0    } | .RequestWaitDuration
        _m036 int64_t                                      request_start_time_stamp;           //{ +0x02b8    +0x02b8    +0x02b8    +0x02b8    } | .RequestStartTimeStamp
        _m037 int64_t                                      request_after_build_io_time_stamp;  //{ +0x02c0    +0x02c0    +0x02c0    +0x02c0    } | .RequestAfterBuildIoTimeStamp
        _m038 int64_t                                      request_after_start_io_time_stamp;  //{ +0x02c8    +0x02c8    +0x02c8    +0x02c8    } | .RequestAfterStartIoTimeStamp
        _m039 uint64_t                                     request_miniport_duration;          //{ +0x02d0    +0x02d0    +0x02d0    +0x02d0    } | .RequestMiniportDuration
        _m040 struct nt::guid_t                            activity_id;                        //{ +0x02d8    +0x02d8    +0x02d8    +0x02d8    } | .ActivityId
        _m041 uint32_t                                     compat_srb_buffer_size;             //{ +0x02e8    +0x02e8    +0x02e8    +0x02e8    } | .CompatSrbBufferSize
        _m042 uint32_t                                     component;                          //{ +0x02ec    +0x02ec    +0x02ec    +0x02ec    } | .Component
        _m043 struct nt::scsi_request_block_t*             original_srb;                       //{ +0x02f0    +0x02f0    +0x02f0    +0x02f0    } | .OriginalSrb
        _m044 void*                                        compat_srb_buffer;                  //{ +0x02f8    +0x02f8    +0x02f8    +0x02f8    } | .CompatSrbBuffer
        _m045 struct nt::irp_t*                            parent_irp;                         //{ +0x0300    +0x0300    +0x0300    +0x0300    } | .ParentIrp
        _m046 int32_t                                      abort_status;                       //{ +0x0308    +0x0308    +0x0308    +0x0308    } | .AbortStatus
                                                                                             
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                    
        //                                                                                   
        _m047 uint1_t                                      zone_overflow_io;                   //{ +0x0011@4  +0x0011@4  +0x0011@4  } | .ZoneOverflowIo
        _m048 uint32_t                                     channel_number;                     //{ +0x0018    +0x0018    +0x0018    } | .ChannelNumber
        _m049 struct stor::port::stor_crypto_key_info_t*   crypto_key_info;                    //{ +0x0310    +0x0310    +0x0310    } | .CryptoKeyInfo
                                                                                             
        // Windows 10 v1607                                                                  
        //                                                                                   
        _m050 struct stor::port::startio_token_t*          initiating_token;                   //{ +0x0018    } | .InitiatingToken
                                                                                             
        SDK_MAGIC_PROPERTIES( "_EXTENDED_REQUEST_BLOCK.$", 0x320, true, 0x564e08849ad47c85 );                                  
        SDK_DYNAMIC_SIZE( extended_request_block_t );                                        
    };                                                                                       
};
#include "magic/extended_request_block_t.end.hpp"
SDK_VERIFY( struct stor::port::extended_request_block_t::u0_srb_data_t, 0x28 );
