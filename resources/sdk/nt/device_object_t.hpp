#pragma once
#include <sdkgen/support_library.hpp>
#include "kdpc_t.hpp"
#include "kevent_t.hpp"
#include "kdevice_queue_t.hpp"
#include "wait_context_block_t.hpp"

namespace io { struct timer_t; }

#include "magic/device_object_t.start.hpp"
namespace nt
{
    struct irp_t;
    struct vpb_t;
    struct device_object_t;
    struct driver_object_t;
    struct devobj_extension_t;

    // [struct _DEVICE_OBJECT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct device_object_t                                                          
    {                                                                               
        union u0_queue_t                                                            
        {                                                                           
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                   
            //                                                                      
            _m14 nt::list_entry_t                list_entry;                          //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .ListEntry
            _m15 struct nt::wait_context_block_t wcb;                                 //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Wcb
                                                                                    
            SDK_NONVOL_PROPERTIES( "_DEVICE_OBJECT.Queue.$", 0x48, true, 0x3f79236b07a42d38 );                                   
            SDK_FIXED_SIZE( u0_queue_t, 0x48 );                                     
        };                                                                          
                                                                                    
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                                          
        _m00 int16_t                                        type;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Type
        _m01 uint16_t                                       size;                     //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .Size
        _m02 int32_t                                        reference_count;          //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .ReferenceCount
        _m03 struct nt::driver_object_t*                    driver_object;            //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .DriverObject
        _m04 struct nt::device_object_t*                    next_device;              //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .NextDevice
        _m05 struct nt::device_object_t*                    attached_device;          //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .AttachedDevice
        _m06 struct nt::irp_t*                              current_irp;              //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .CurrentIrp
        _m07 struct io::timer_t*                            timer;                    //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .Timer
        _m08 uint32_t                                       flags;                    //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .Flags
        _m09 uint32_t                                       characteristics;          //{ +0x0034    +0x0034    +0x0034    +0x0034    +0x0034    } | .Characteristics
        _m10 struct nt::vpb_t*                              vpb;                      //{ +0x0038    +0x0038    +0x0038    +0x0038    +0x0038    } | .Vpb
        _m11 void*                                          device_extension;         //{ +0x0040    +0x0040    +0x0040    +0x0040    +0x0040    } | .DeviceExtension
        _m12 uint32_t                                       device_type;              //{ +0x0048    +0x0048    +0x0048    +0x0048    +0x0048    } | .DeviceType
        _m13 char                                           stack_size;               //{ +0x004c    +0x004c    +0x004c    +0x004c    +0x004c    } | .StackSize
        _m16 u0_queue_t                                     queue;                    //{ +0x0050    +0x0050    +0x0050    +0x0050    +0x0050    } | .Queue
        _m17 uint32_t                                       alignment_requirement;    //{ +0x0098    +0x0098    +0x0098    +0x0098    +0x0098    } | .AlignmentRequirement
        _m18 struct nt::kdevice_queue_t                     device_queue;             //{ +0x00a0    +0x00a0    +0x00a0    +0x00a0    +0x00a0    } | .DeviceQueue
        _m19 struct nt::kdpc_t                              dpc;                      //{ +0x00c8    +0x00c8    +0x00c8    +0x00c8    +0x00c8    } | .Dpc
        _m20 uint32_t                                       active_thread_count;      //{ +0x0108    +0x0108    +0x0108    +0x0108    +0x0108    } | .ActiveThreadCount
        _m21 void*                                          security_descriptor;      //{ +0x0110    +0x0110    +0x0110    +0x0110    +0x0110    } | .SecurityDescriptor
        _m22 struct nt::kevent_t                            device_lock;              //{ +0x0118    +0x0118    +0x0118    +0x0118    +0x0118    } | .DeviceLock
        _m23 uint16_t                                       sector_size;              //{ +0x0130    +0x0130    +0x0130    +0x0130    +0x0130    } | .SectorSize
        _m24 struct nt::devobj_extension_t*                 device_object_extension;  //{ +0x0138    +0x0138    +0x0138    +0x0138    +0x0138    } | .DeviceObjectExtension
                                                                                    
        SDK_NONVOL_PROPERTIES( "_DEVICE_OBJECT.$", 0x150, true, 0x68bdaf79e61c5b5d );                        
        SDK_FIXED_SIZE( device_object_t, 0x150 );                                   
    };                                                                              
};
#include "magic/device_object_t.end.hpp"
SDK_VERIFY( union nt::device_object_t::u0_queue_t, 0x48 );
SDK_VERIFY( struct nt::device_object_t, 0x150 );
