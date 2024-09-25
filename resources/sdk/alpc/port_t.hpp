#pragma once
#include <sdkgen/support_library.hpp>
#include "../ex/push_lock_t.hpp"
#include "port_attributes_t.hpp"
#include "../sec/client_context_t.hpp"

namespace nt { struct callback_object_t;                 }
namespace nt { struct eprocess_t;                        }
namespace nt { struct kalpc_message_t;                   }
namespace nt { struct kevent_t;                          }
namespace nt { struct kqueue_t;                          }
namespace nt { struct ksemaphore_t;                      }
namespace nt { struct palpc_port_reference_wait_block_t; }

#include "magic/port_t.start.hpp"
namespace alpc
{
    struct port_t;
    struct completion_list_t;
    struct communication_info_t;
    struct completion_packet_lookaside_t;

    // [struct _ALPC_PORT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct port_t                                                                       
    {                                                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                                                              
        _m000 nt::list_entry_t                              port_list_entry;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PortListEntry
        _m001 struct alpc::communication_info_t*            communication_info;           //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .CommunicationInfo
        _m002 struct nt::eprocess_t*                        owner_process;                //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .OwnerProcess
        _m003 sdk::variant<void*, struct nt::kqueue_t*>     completion_port;              //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .CompletionPort
        _m004 void*                                         completion_key;               //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .CompletionKey
        _m005 struct alpc::completion_packet_lookaside_t*   completion_packet_lookaside;  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .CompletionPacketLookaside
        _m006 void*                                         port_context;                 //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .PortContext
        _m007 struct sec::client_context_t                  static_security;              //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .StaticSecurity
        _m008 struct ex::push_lock_t                        incoming_queue_lock;          //{ +0x0088    +0x0088    +0x0088    +0x0088    } | .IncomingQueueLock
        _m009 nt::list_entry_t                              main_queue;                   //{ +0x0090    +0x0090    +0x0090    +0x0090    } | .MainQueue
        _m010 nt::list_entry_t                              large_message_queue;          //{ +0x00a0    +0x00a0    +0x00a0    +0x00a0    } | .LargeMessageQueue
        _m011 struct ex::push_lock_t                        pending_queue_lock;           //{ +0x00b0    +0x00b0    +0x00b0    +0x00b0    } | .PendingQueueLock
        _m012 nt::list_entry_t                              pending_queue;                //{ +0x00b8    +0x00b8    +0x00b8    +0x00b8    } | .PendingQueue
        _m013 struct ex::push_lock_t                        direct_queue_lock;            //{ +0x00c8    +0x00c8    +0x00c8    +0x00c8    } | .DirectQueueLock
        _m014 nt::list_entry_t                              direct_queue;                 //{ +0x00d0    +0x00d0    +0x00d0    +0x00d0    } | .DirectQueue
        _m015 struct ex::push_lock_t                        wait_queue_lock;              //{ +0x00e0    +0x00e0    +0x00e0    +0x00e0    } | .WaitQueueLock
        _m016 nt::list_entry_t                              wait_queue;                   //{ +0x00e8    +0x00e8    +0x00e8    +0x00e8    } | .WaitQueue
        _m017 struct nt::ksemaphore_t*                      semaphore;                    //{ +0x00f8    +0x00f8    +0x00f8    +0x00f8    } | .Semaphore
        _m018 struct nt::kevent_t*                          dummy_event;                  //{ +0x00f8    +0x00f8    +0x00f8    +0x00f8    } | .DummyEvent
        _m019 struct alpc::port_attributes_t                port_attributes;              //{ +0x0100    +0x0100    +0x0100    +0x0100    } | .PortAttributes
        _m020 struct ex::push_lock_t                        resource_list_lock;           //{ +0x0148    +0x0148    +0x0148    +0x0148    } | .ResourceListLock
        _m021 nt::list_entry_t                              resource_list_head;           //{ +0x0150    +0x0150    +0x0150    +0x0150    } | .ResourceListHead
        _m022 struct ex::push_lock_t                        port_object_lock;             //{ +0x0160    +0x0160    +0x0160    +0x0160    } | .PortObjectLock
        _m023 struct alpc::completion_list_t*               completion_list;              //{ +0x0168    +0x0168    +0x0168    +0x0168    } | .CompletionList
        _m024 struct nt::callback_object_t*                 callback_object;              //{ +0x0170    +0x0170    +0x0170    +0x0170    } | .CallbackObject
        _m025 void*                                         callback_context;             //{ +0x0178    +0x0178    +0x0178    +0x0178    } | .CallbackContext
        _m026 nt::list_entry_t                              canceled_queue;               //{ +0x0180    +0x0180    +0x0180    +0x0180    } | .CanceledQueue
        _m027 int32_t                                       sequence_no;                  //{ +0x0190    +0x0190    +0x0190    +0x0190    } | .SequenceNo
        _m028 int32_t                                       reference_no;                 //{ +0x0194    +0x0194    +0x0194    +0x0194    } | .ReferenceNo
        _m029 struct nt::palpc_port_reference_wait_block_t* reference_no_wait;            //{ +0x0198    +0x0198    +0x0198    +0x0198    } | .ReferenceNoWait
        _m030 uint1_t                                       initialized;                  //{ +0x01a0@0  +0x01a0@0  +0x01a0@0  +0x01a0@0  } | .Initialized
        _m031 uint2_t                                       type;                         //{ +0x01a0@1  +0x01a0@1  +0x01a0@1  +0x01a0@1  } | .Type
        _m032 uint1_t                                       connection_pending;           //{ +0x01a0@3  +0x01a0@3  +0x01a0@3  +0x01a0@3  } | .ConnectionPending
        _m033 uint1_t                                       connection_refused;           //{ +0x01a0@4  +0x01a0@4  +0x01a0@4  +0x01a0@4  } | .ConnectionRefused
        _m034 uint1_t                                       disconnected;                 //{ +0x01a0@5  +0x01a0@5  +0x01a0@5  +0x01a0@5  } | .Disconnected
        _m035 uint1_t                                       closed;                       //{ +0x01a0@6  +0x01a0@6  +0x01a0@6  +0x01a0@6  } | .Closed
        _m036 uint1_t                                       no_flush_on_close;            //{ +0x01a0@7  +0x01a0@7  +0x01a0@7  +0x01a0@7  } | .NoFlushOnClose
        _m037 uint1_t                                       return_extended_info;         //{ +0x01a0@8  +0x01a0@8  +0x01a0@8  +0x01a0@8  } | .ReturnExtendedInfo
        _m038 uint1_t                                       waitable;                     //{ +0x01a0@9  +0x01a0@9  +0x01a0@9  +0x01a0@9  } | .Waitable
        _m039 uint1_t                                       dynamic_security;             //{ +0x01a0@10 +0x01a0@10 +0x01a0@10 +0x01a0@10 } | .DynamicSecurity
        _m040 uint1_t                                       wow64_completion_list;        //{ +0x01a0@11 +0x01a0@11 +0x01a0@11 +0x01a0@11 } | .Wow64CompletionList
        _m041 uint1_t                                       lpc;                          //{ +0x01a0@12 +0x01a0@12 +0x01a0@12 +0x01a0@12 } | .Lpc
        _m042 uint1_t                                       lpc_to_lpc;                   //{ +0x01a0@13 +0x01a0@13 +0x01a0@13 +0x01a0@13 } | .LpcToLpc
        _m043 uint1_t                                       has_completion_list;          //{ +0x01a0@14 +0x01a0@14 +0x01a0@14 +0x01a0@14 } | .HasCompletionList
        _m044 uint1_t                                       had_completion_list;          //{ +0x01a0@15 +0x01a0@15 +0x01a0@15 +0x01a0@15 } | .HadCompletionList
        _m045 uint1_t                                       enable_completion_list;       //{ +0x01a0@16 +0x01a0@16 +0x01a0@16 +0x01a0@16 } | .EnableCompletionList
        _m046 uint32_t                                      state;                        //{ +0x01a0    +0x01a0    +0x01a0    +0x01a0    } | .State
        _m047 struct alpc::port_t*                          target_queue_port;            //{ +0x01a8    +0x01a8    +0x01a8    +0x01a8    } | .TargetQueuePort
        _m048 struct alpc::port_t*                          target_sequence_port;         //{ +0x01b0    +0x01b0    +0x01b0    +0x01b0    } | .TargetSequencePort
        _m049 struct nt::kalpc_message_t*                   cached_message;               //{ +0x01b8    +0x01b8    +0x01b8    +0x01b8    } | .CachedMessage
        _m050 uint32_t                                      main_queue_length;            //{ +0x01c0    +0x01c0    +0x01c0    +0x01c0    } | .MainQueueLength
        _m051 uint32_t                                      large_message_queue_length;   //{ +0x01c4    +0x01c4    +0x01c4    +0x01c4    } | .LargeMessageQueueLength
        _m052 uint32_t                                      pending_queue_length;         //{ +0x01c8    +0x01c8    +0x01c8    +0x01c8    } | .PendingQueueLength
        _m053 uint32_t                                      direct_queue_length;          //{ +0x01cc    +0x01cc    +0x01cc    +0x01cc    } | .DirectQueueLength
        _m054 uint32_t                                      canceled_queue_length;        //{ +0x01d0    +0x01d0    +0x01d0    +0x01d0    } | .CanceledQueueLength
        _m055 uint32_t                                      wait_queue_length;            //{ +0x01d4    +0x01d4    +0x01d4    +0x01d4    } | .WaitQueueLength
                                                                                        
        SDK_MAGIC_PROPERTIES( "_ALPC_PORT.$", 0x1d8, true, 0xa2bc36e7cb856c08 );                            
        SDK_FIXED_SIZE( port_t, 0x1d8 );                                                
    };                                                                                  
};
#include "magic/port_t.end.hpp"
SDK_VERIFY( struct alpc::port_t, 0x1d8 );
