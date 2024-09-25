#pragma once
#include <sdkgen/support_library.hpp>
#include "kapc_t.hpp"
#include "../io/status_block_t.hpp"
#include "kdevice_queue_entry_t.hpp"

namespace io { struct stack_location_t; }

#include "magic/irp_t.start.hpp"
namespace nt
{
    struct irp_t;
    struct mdl_t;
    struct kevent_t;
    struct ethread_t;
    struct file_object_t;
    struct device_object_t;
    struct ioring_object_t;

    // [struct _IRP]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct irp_t                                                                                                        
    {                                                                                                                   
        union u0_associated_irp_t                                                                                       
        {                                                                                                               
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                          
            //                                                                                                          
            _m04 struct nt::irp_t* master_irp;                                                                            //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .MasterIrp
            _m05 int32_t           irp_count;                                                                             //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .IrpCount
            _m06 void*             system_buffer;                                                                         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .SystemBuffer
                                                                                                                        
            SDK_NONVOL_PROPERTIES( "_IRP.AssociatedIrp.$", 0x8, true, 0xf9b64bc28117482 );                                          
            SDK_FIXED_SIZE( u0_associated_irp_t, 0x8 );                                                                 
        };                                                                                                              
                                                                                                                        
        union u5_overlay_t                                                                                              
        {                                                                                                               
            struct u10_asynchronous_parameters_t                                                                        
            {                                                                                                           
                using pio_apc_routine_t = sdk::function<void(void*, struct io::status_block_t*, uint32_t)>*;                                                                     
                                                                                                                        
                // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                     
                //                                                                                                      
                _m20 pio_apc_routine_t           user_apc_routine;                                                        //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .UserApcRoutine
                _m21 void*                       issuing_process;                                                         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .IssuingProcess
                _m22 void*                       user_apc_context;                                                        //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .UserApcContext
                                                                                                                        
                // Windows 11                                                                                           
                //                                                                                                      
                _m23 struct nt::ioring_object_t* io_ring;                                                                 //{ +0x0008    } | .IoRing
                                                                                                                        
                SDK_NONVOL_PROPERTIES( "_IRP.Overlay.AsynchronousParameters.$", 0x10, true, 0x605b311dcf780c68 );                                                                     
                SDK_FIXED_SIZE( u10_asynchronous_parameters_t, 0x10 );                                                                     
            };                                                                                                          
                                                                                                                        
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                    
            //                                                                                                          
            _m24 u10_asynchronous_parameters_t                    asynchronous_parameters;                                //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AsynchronousParameters
            _m25 int64_t                                          allocation_size;                                        //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AllocationSize
                                                                                                                        
            SDK_NONVOL_PROPERTIES( "_IRP.Overlay.$", 0x10, true, 0x4931a08830e507b2 );                                                    
            SDK_FIXED_SIZE( u5_overlay_t, 0x10 );                                                                       
        };                                                                                                              
                                                                                                                        
        union u15_tail_t                                                                                                
        {                                                                                                               
            struct u20_overlay_t                                                                                        
            {                                                                                                           
                // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                  
                //                                                                                                      
                _m29 struct nt::kdevice_queue_entry_t device_queue_entry;                                                 //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .DeviceQueueEntry
                _m30 sdk::array<void*, 4>             driver_context;                                                     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .DriverContext
                _m31 struct nt::ethread_t*            thread;                                                             //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .Thread
                _m32 char*                            auxiliary_buffer;                                                   //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .AuxiliaryBuffer
                _m33 nt::list_entry_t                 list_entry;                                                         //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .ListEntry
                _m34 struct io::stack_location_t*     current_stack_location;                                             //{ +0x0040    +0x0040    +0x0040    +0x0040    +0x0040    } | .CurrentStackLocation
                _m35 uint32_t                         packet_type;                                                        //{ +0x0040    +0x0040    +0x0040    +0x0040    +0x0040    } | .PacketType
                _m36 struct nt::file_object_t*        original_file_object;                                               //{ +0x0048    +0x0048    +0x0048    +0x0048    +0x0048    } | .OriginalFileObject
                                                                                                                        
                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                  
                //                                                                                                      
                _m37 void*                            irp_extension;                                                      //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .IrpExtension
                                                                                                                        
                SDK_NONVOL_PROPERTIES( "_IRP.Tail.Overlay.$", 0x58, true, 0xde59176703e775ff );                                                                  
                SDK_DYNAMIC_SIZE( u20_overlay_t );                                                                      
            };                                                                                                          
                                                                                                                        
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                           
            //                                                                                                          
            _m38 u20_overlay_t                                               overlay;                                     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Overlay
            _m39 struct nt::kapc_t                                           apc;                                         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Apc
            _m40 void*                                                       completion_key;                              //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .CompletionKey
                                                                                                                        
            SDK_NONVOL_PROPERTIES( "_IRP.Tail.$", 0x58, true, 0x5acf43dad9b572fc );                                           
            SDK_FIXED_SIZE( u15_tail_t, 0x58 );                                                                         
        };                                                                                                              
                                                                                                                        
        using cancel_routine_t = sdk::function<void(struct nt::device_object_t*, struct nt::irp_t*)>*;                            
                                                                                                                        
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                     
        //                                                                                                              
        _m00 int16_t                                                                        type;                         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Type
        _m01 uint16_t                                                                       size;                         //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .Size
        _m02 struct nt::mdl_t*                                                              mdl_address;                  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .MdlAddress
        _m03 uint32_t                                                                       flags;                        //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .Flags
        _m07 u0_associated_irp_t                                                            associated_irp;               //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .AssociatedIrp
        _m08 nt::list_entry_t                                                               thread_list_entry;            //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .ThreadListEntry
        _m09 struct io::status_block_t                                                      io_status;                    //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .IoStatus
        _m10 char                                                                           requestor_mode;               //{ +0x0040    +0x0040    +0x0040    +0x0040    +0x0040    } | .RequestorMode
        _m11 uint8_t                                                                        pending_returned;             //{ +0x0041    +0x0041    +0x0041    +0x0041    +0x0041    } | .PendingReturned
        _m12 char                                                                           stack_count;                  //{ +0x0042    +0x0042    +0x0042    +0x0042    +0x0042    } | .StackCount
        _m13 char                                                                           current_location;             //{ +0x0043    +0x0043    +0x0043    +0x0043    +0x0043    } | .CurrentLocation
        _m14 uint8_t                                                                        cancel;                       //{ +0x0044    +0x0044    +0x0044    +0x0044    +0x0044    } | .Cancel
        _m15 uint8_t                                                                        cancel_irql;                  //{ +0x0045    +0x0045    +0x0045    +0x0045    +0x0045    } | .CancelIrql
        _m16 char                                                                           apc_environment;              //{ +0x0046    +0x0046    +0x0046    +0x0046    +0x0046    } | .ApcEnvironment
        _m17 uint8_t                                                                        allocation_flags;             //{ +0x0047    +0x0047    +0x0047    +0x0047    +0x0047    } | .AllocationFlags
        _m18 struct io::status_block_t*                                                     user_iosb;                    //{ +0x0048    +0x0048    +0x0048    +0x0048    +0x0048    } | .UserIosb
        _m19 struct nt::kevent_t*                                                           user_event;                   //{ +0x0050    +0x0050    +0x0050    +0x0050    +0x0050    } | .UserEvent
        _m26 u5_overlay_t                                                                   overlay;                      //{ +0x0058    +0x0058    +0x0058    +0x0058    +0x0058    } | .Overlay
        _m27 cancel_routine_t                                                               cancel_routine;               //{ +0x0068    +0x0068    +0x0068    +0x0068    +0x0068    } | .CancelRoutine
        _m28 void*                                                                          user_buffer;                  //{ +0x0070    +0x0070    +0x0070    +0x0070    +0x0070    } | .UserBuffer
        _m41 u15_tail_t                                                                     tail;                         //{ +0x0078    +0x0078    +0x0078    +0x0078    +0x0078    } | .Tail
                                                                                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                             
        //                                                                                                              
        _m42 uint16_t                                                                       allocation_processor_number;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .AllocationProcessorNumber
                                                                                                                        
        // Windows 11                                                                                                   
        //                                                                                                              
        _m43 void*                                                                          io_ring_context;              //{ +0x0048    } | .IoRingContext
                                                                                                                        
        SDK_NONVOL_PROPERTIES( "_IRP.$", 0xd0, true, 0xe4e07de9919df8cc );                                              
        SDK_FIXED_SIZE( irp_t, 0xd0 );                                                                                  
    };                                                                                                                  
};
#include "magic/irp_t.end.hpp"
SDK_VERIFY( union nt::irp_t::u0_associated_irp_t, 0x8 );
SDK_VERIFY( struct nt::irp_t::u5_overlay_t::u10_asynchronous_parameters_t, 0x10 );
SDK_VERIFY( union nt::irp_t::u5_overlay_t, 0x10 );
SDK_VERIFY( union nt::irp_t::u15_tail_t, 0x58 );
SDK_VERIFY( struct nt::irp_t, 0xd0 );
