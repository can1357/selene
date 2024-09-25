#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/per_proc_performance_counters_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_PER_PROC_PERFORMANCE_COUNTERS]
    // => Windows 10 v1607
    //
    struct per_proc_performance_counters_t                   
    {                                                        
        // Windows 10 v1607                                      
        //                                                   
        _m000 uint64_t dpc_count;                              //{ +0x0000    } | .DpcCount
        _m001 uint64_t isr_count;                              //{ +0x0008    } | .IsrCount
        _m002 uint64_t receive_indication_calls;               //{ +0x0010    } | .ReceiveIndicationCalls
        _m003 uint64_t return_nbls_calls;                      //{ +0x0018    } | .ReturnNblsCalls
        _m004 uint64_t received_nbls;                          //{ +0x0020    } | .ReceivedNbls
        _m005 uint64_t returned_nbls;                          //{ +0x0028    } | .ReturnedNbls
        _m006 uint64_t send_calls;                             //{ +0x0030    } | .SendCalls
        _m007 uint64_t send_complete_calls;                    //{ +0x0038    } | .SendCompleteCalls
        _m008 uint64_t sent_nbs;                               //{ +0x0040    } | .SentNbs
        _m009 uint64_t send_complete_nbs;                      //{ +0x0048    } | .SendCompleteNbs
        _m010 uint64_t hal_build_sg_list_calls;                //{ +0x0050    } | .HalBuildSGListCalls
        _m011 uint64_t indirection_table_change_calls;         //{ +0x0058    } | .IndirectionTableChangeCalls
        _m012 uint64_t ndis_queue_dpc_calls_not_current_cpu;   //{ +0x0060    } | .NdisQueueDpcCallsNotCurrentCpu
        _m013 uint64_t dpc_total_cycles;                       //{ +0x0068    } | .DpcTotalCycles
        _m014 uint64_t isr_cycles;                             //{ +0x0070    } | .IsrCycles
        _m015 uint64_t ndis_receive_indication_cycles;         //{ +0x0078    } | .NdisReceiveIndicationCycles
        _m016 uint64_t stack_receive_indication_cycles;        //{ +0x0080    } | .StackReceiveIndicationCycles
        _m017 uint64_t ndis_return_nbl_cycles;                 //{ +0x0088    } | .NdisReturnNblCycles
        _m018 uint64_t miniport_return_nbl_cycles;             //{ +0x0090    } | .MiniportReturnNblCycles
        _m019 uint64_t ndis_send_cycles;                       //{ +0x0098    } | .NdisSendCycles
        _m020 uint64_t miniport_send_cycles;                   //{ +0x00a0    } | .MiniportSendCycles
        _m021 uint64_t ndis_send_complete_cycles;              //{ +0x00a8    } | .NdisSendCompleteCycles
        _m022 uint64_t stack_send_complete_cycles;             //{ +0x00b0    } | .StackSendCompleteCycles
        _m023 uint64_t hal_build_sg_list_cycles;               //{ +0x00b8    } | .HalBuildSGListCycles
        _m024 uint64_t indirection_table_change_cycles;        //{ +0x00c0    } | .IndirectionTableChangeCycles
        _m025 uint64_t send_calls_at_passive;                  //{ +0x00c8    } | .SendCallsAtPassive
        _m026 uint64_t sent_nbs_at_passive;                    //{ +0x00d0    } | .SentNbsAtPassive
        _m027 uint64_t return_nbls_calls_at_passive;           //{ +0x00d8    } | .ReturnNblsCallsAtPassive
        _m028 uint64_t returned_nbls_at_passive;               //{ +0x00e0    } | .ReturnedNblsAtPassive
        _m029 uint64_t low_resource_receive_indication_calls;  //{ +0x00e8    } | .LowResourceReceiveIndicationCalls
        _m030 uint64_t low_resource_received_nbls;             //{ +0x00f0    } | .LowResourceReceivedNbls
        _m031 uint64_t tcp_offload_receive_indication_calls;   //{ +0x00f8    } | .TcpOffloadReceiveIndicationCalls
        _m032 uint64_t tcp_offload_send_calls;                 //{ +0x0100    } | .TcpOffloadSendCalls
        _m033 uint64_t tcp_offload_receive_data;               //{ +0x0108    } | .TcpOffloadReceiveData
        _m034 uint64_t tcp_offload_send_data;                  //{ +0x0110    } | .TcpOffloadSendData
        _m035 uint64_t isr_to_dpc_cycles;                      //{ +0x0118    } | .IsrToDpcCycles
        _m036 uint64_t dpc_calls_deferred;                     //{ +0x0120    } | .DpcCallsDeferred
        _m037 uint64_t packets_coalesced;                      //{ +0x0128    } | .PacketsCoalesced
                                                             
        SDK_MAGIC_PROPERTIES( "_NDIS_PER_PROC_PERFORMANCE_COUNTERS.$", 0x0, false, 0x112f4f0e7abeba96 );                                      
        SDK_FIXED_SIZE( per_proc_performance_counters_t, 0x130 );                                      
    };                                                       
};
#include "magic/per_proc_performance_counters_t.end.hpp"
SDK_VERIFY( struct ndis::per_proc_performance_counters_t, 0x130 );
