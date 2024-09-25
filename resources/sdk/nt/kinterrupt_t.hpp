#pragma once
#include <sdkgen/support_library.hpp>
#include "isrdpcstats_t.hpp"
#include "kinterrupt_mode_t.hpp"
#include "kinterrupt_polarity_t.hpp"

#include "magic/kinterrupt_t.start.hpp"
namespace nt
{
    struct kevent_t;
    struct kthread_t;
    struct kinterrupt_t;
    struct interrupt_connection_data_t;

    // [struct _KINTERRUPT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct kinterrupt_t                                                       
    {                                                                         
        using service_routine_t =         sdk::function<uint8_t(struct nt::kinterrupt_t*, void*)>*;                        
        using message_service_routine_t = sdk::function<uint8_t(struct nt::kinterrupt_t*, void*, uint32_t)>*;                        
                                                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                                    
        _m000 int16_t                                 type;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Type
        _m001 int16_t                                 size;                     //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .Size
        _m002 nt::list_entry_t                        interrupt_list_entry;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .InterruptListEntry
        _m003 service_routine_t                       service_routine;          //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ServiceRoutine
        _m004 message_service_routine_t               message_service_routine;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .MessageServiceRoutine
        _m005 uint32_t                                message_index;            //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .MessageIndex
        _m006 void*                                   service_context;          //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .ServiceContext
        _m007 uint64_t                                spin_lock;                //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .SpinLock
        _m008 uint32_t                                tick_count;               //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .TickCount
        _m009 uint64_t*                               actual_lock;              //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .ActualLock
        _m010 sdk::function<void()>*                  dispatch_address;         //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .DispatchAddress
        _m011 uint32_t                                vector;                   //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .Vector
        _m012 uint8_t                                 irql;                     //{ +0x005c    +0x005c    +0x005c    +0x005c    } | .Irql
        _m013 uint8_t                                 synchronize_irql;         //{ +0x005d    +0x005d    +0x005d    +0x005d    } | .SynchronizeIrql
        _m014 uint8_t                                 floating_save;            //{ +0x005e    +0x005e    +0x005e    +0x005e    } | .FloatingSave
        _m015 uint8_t                                 connected;                //{ +0x005f    +0x005f    +0x005f    +0x005f    } | .Connected
        _m016 uint32_t                                number;                   //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .Number
        _m017 uint8_t                                 share_vector;             //{ +0x0064    +0x0064    +0x0064    +0x0064    } | .ShareVector
        _m018 uint8_t                                 emulate_active_both;      //{ +0x0065    +0x0065    +0x0065    +0x0065    } | .EmulateActiveBoth
        _m019 uint16_t                                active_count;             //{ +0x0066    +0x0066    +0x0066    +0x0066    } | .ActiveCount
        _m020 int32_t                                 internal_state;           //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .InternalState
        _m021 enum nt::kinterrupt_mode_t              mode;                     //{ +0x006c    +0x006c    +0x006c    +0x006c    } | .Mode
        _m022 enum nt::kinterrupt_polarity_t          polarity;                 //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .Polarity
        _m023 uint32_t                                service_count;            //{ +0x0074    +0x0074    +0x0074    +0x0074    } | .ServiceCount
        _m024 uint32_t                                dispatch_count;           //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .DispatchCount
        _m025 struct nt::kevent_t*                    passive_event;            //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .PassiveEvent
        _m026 nt::trapframe*                          trap_frame;               //{ +0x0088    +0x0088    +0x0088    +0x0088    } | .TrapFrame
        _m027 void*                                   disconnect_data;          //{ +0x0090    +0x0090    +0x0090    +0x0090    } | .DisconnectData
        _m028 struct nt::kthread_t volatile*          service_thread;           //{ +0x0098    +0x0098    +0x0098    +0x0098    } | .ServiceThread
        _m029 struct nt::interrupt_connection_data_t* connection_data;          //{ +0x00a0    +0x00a0    +0x00a0    +0x00a0    } | .ConnectionData
        _m030 void*                                   int_track_entry;          //{ +0x00a8    +0x00a8    +0x00a8    +0x00a8    } | .IntTrackEntry
        _m031 struct nt::isrdpcstats_t                isr_dpc_stats;            //{ +0x00b0    +0x00b0    +0x00b0    +0x00b0    } | .IsrDpcStats
        _m032 void*                                   redirect_object;          //{ +0x00f0    +0x0110    +0x0110    +0x0110    } | .RedirectObject
                                                                              
        // Windows 10 v2004, Windows 10 v20H2                                 
        //                                                                    
        _m033 void*                                   physical_device_object;   //{ +0x0118    +0x0118    } | .PhysicalDeviceObject
                                                                              
        SDK_MAGIC_PROPERTIES( "_KINTERRUPT.$", 0x120, true, 0x569f84a69117c2a );                        
        SDK_DYNAMIC_SIZE( kinterrupt_t );                                     
    };                                                                        
};
#include "magic/kinterrupt_t.end.hpp"
