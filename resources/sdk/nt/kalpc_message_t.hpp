#pragma once
#include <sdkgen/support_library.hpp>
#include "port_message_t.hpp"
#include "kalpc_message_attributes_t.hpp"

namespace alpc { struct communication_info_t; }
namespace alpc { struct port_t;               }

#include "magic/kalpc_message_t.start.hpp"
namespace nt
{
    struct ethread_t;
    struct eprocess_t;
    struct kalpc_reserve_t;

    // [struct _KALPC_MESSAGE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct kalpc_message_t                                                           
    {                                                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                 
        //                                                                           
        _m000 nt::list_entry_t                      entry;                             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Entry
        _m001 struct alpc::port_t*                  port_queue;                        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .PortQueue
        _m002 struct alpc::port_t*                  owner_port;                        //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .OwnerPort
        _m003 struct nt::ethread_t*                 waiting_thread;                    //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .WaitingThread
        _m004 uint3_t                               queue_type;                        //{ +0x0028@0  +0x0028@0  +0x0028@0  +0x0028@0  } | .QueueType
        _m005 uint4_t                               queue_port_type;                   //{ +0x0028@3  +0x0028@3  +0x0028@3  +0x0028@3  } | .QueuePortType
        _m006 uint1_t                               canceled;                          //{ +0x0028@7  +0x0028@7  +0x0028@7  +0x0028@7  } | .Canceled
        _m007 uint1_t                               ready;                             //{ +0x0028@8  +0x0028@8  +0x0028@8  +0x0028@8  } | .Ready
        _m008 uint1_t                               release_message;                   //{ +0x0028@9  +0x0028@9  +0x0028@9  +0x0028@9  } | .ReleaseMessage
        _m009 uint1_t                               shared_quota;                      //{ +0x0028@10 +0x0028@10 +0x0028@10 +0x0028@10 } | .SharedQuota
        _m010 uint1_t                               reply_wait_reply;                  //{ +0x0028@11 +0x0028@11 +0x0028@11 +0x0028@11 } | .ReplyWaitReply
        _m011 uint1_t                               owner_port_reference;              //{ +0x0028@12 +0x0028@12 +0x0028@12 +0x0028@12 } | .OwnerPortReference
        _m012 uint1_t                               receiver_reference;                //{ +0x0028@14 +0x0028@13 +0x0028@13 +0x0028@13 } | .ReceiverReference
        _m013 uint1_t                               view_attribute_retrieved;          //{ +0x0028@15 +0x0028@14 +0x0028@14 +0x0028@14 } | .ViewAttributeRetrieved
        _m014 uint1_t                               in_dispatch;                       //{ +0x0028@16 +0x0028@15 +0x0028@16 +0x0028@15 } | .InDispatch
        _m015 uint32_t                              state;                             //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .State
        _m016 int32_t                               sequence_no;                       //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .SequenceNo
        _m017 struct nt::eprocess_t*                quota_process;                     //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .QuotaProcess
        _m018 void*                                 quota_block;                       //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .QuotaBlock
        _m019 struct alpc::port_t*                  cancel_sequence_port;              //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .CancelSequencePort
        _m020 struct alpc::port_t*                  cancel_queue_port;                 //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .CancelQueuePort
        _m021 int32_t                               cancel_sequence_no;                //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .CancelSequenceNo
        _m022 nt::list_entry_t                      cancel_list_entry;                 //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .CancelListEntry
        _m023 struct nt::kalpc_reserve_t*           reserve;                           //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .Reserve
        _m024 struct nt::kalpc_message_attributes_t message_attributes;                //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .MessageAttributes
        _m025 void*                                 data_user_va;                      //{ +0x00b0    +0x00b0    +0x00b0    +0x00b0    } | .DataUserVa
        _m026 struct alpc::communication_info_t*    communication_info;                //{ +0x00b8    +0x00b8    +0x00b8    +0x00b8    } | .CommunicationInfo
        _m027 struct alpc::port_t*                  connection_port;                   //{ +0x00c0    +0x00c0    +0x00c0    +0x00c0    } | .ConnectionPort
        _m028 struct nt::ethread_t*                 server_thread;                     //{ +0x00c8    +0x00c8    +0x00c8    +0x00c8    } | .ServerThread
        _m029 void*                                 wake_reference;                    //{ +0x00d0    +0x00d0    +0x00d0    +0x00d0    } | .WakeReference
        _m030 void*                                 extension_buffer;                  //{ +0x00d8    +0x00e0    +0x00e0    +0x00e0    } | .ExtensionBuffer
        _m031 uint64_t                              extension_buffer_size;             //{ +0x00e0    +0x00e8    +0x00e8    +0x00e8    } | .ExtensionBufferSize
        _m032 struct nt::port_message_t             port_message;                      //{ +0x00e8    +0x00f0    +0x00f0    +0x00f0    } | .PortMessage
                                                                                     
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                 
        //                                                                           
        _m033 void*                                 wake_reference2;                   //{ +0x00d8    +0x00d8    +0x00d8    } | .WakeReference2
                                                                                     
        // Windows 10 v1607                                                          
        //                                                                           
        _m034 uint1_t                               reserve_reference;                 //{ +0x0028@13 } | .ReserveReference
                                                                                     
        // Windows 11                                                                
        //                                                                           
        _m035 uint1_t                               view_attribute_delete_on_release;  //{ +0x0028@15 } | .ViewAttributeDeleteOnRelease
        _m036 uint1_t                               in_canceled_queue;                 //{ +0x0028@17 } | .InCanceledQueue
                                                                                     
        SDK_MAGIC_PROPERTIES( "_KALPC_MESSAGE.$", 0x118, true, 0xa9e11b3050783700 );                                 
        SDK_DYNAMIC_SIZE( kalpc_message_t );                                         
    };                                                                               
};
#include "magic/kalpc_message_t.end.hpp"
