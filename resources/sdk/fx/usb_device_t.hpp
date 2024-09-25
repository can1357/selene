#pragma once
#include <sdkgen/support_library.hpp>
#include "cr_event_t.hpp"
#include "urb_type_t.hpp"
#include "irp_queue_t.hpp"
#include "../mx/lock_t.hpp"
#include "wait_lock_internal_t.hpp"
#include "transactioned_entry_t.hpp"
#include "../wdf/io_target_state_t.hpp"
#include "../nt/single_list_entry_t.hpp"
#include "../wdf/usb_device_descriptor_t.hpp"
#include "../wdf/usbd_version_information_t.hpp"

namespace nt  { struct device_object_t;                }
namespace nt  { struct file_object_t;                  }
namespace wdf { struct usb_configuration_descriptor_t; }
namespace wdf { struct usbd_handle_t;                  }

#include "magic/usb_device_t.start.hpp"
namespace fx
{
    class device_t;
    class driver_t;
    class object_t;
    class device_base_t;
    class usb_interface_t;
    struct driver_globals_t;

    // [class FxUsbDevice]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class usb_device_t                                                                                 
    {                                                                                                  
        struct u0_m_object_flags_by_name_t                                                             
        {                                                                                              
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                  
            //                                                                                         
            _m05 uint1_t passive_callbacks;                                                              //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .PassiveCallbacks
            _m06 uint1_t no_delete_ddi;                                                                  //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .NoDeleteDDI
            _m07 uint1_t delete_called;                                                                  //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .DeleteCalled
            _m08 uint1_t committed;                                                                      //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .Committed
            _m09 uint1_t passive_dispose;                                                                //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .PassiveDispose
            _m10 uint1_t force_dispose_thread;                                                           //{ +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  } | .ForceDisposeThread
            _m11 uint1_t has_debug;                                                                      //{ +0x0000@7  +0x0000@7  +0x0000@7  +0x0000@7  } | .HasDebug
            _m12 uint1_t early_disposed_ext;                                                             //{ +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  } | .EarlyDisposedExt
            _m13 uint1_t trace_state;                                                                    //{ +0x0000@9  +0x0000@9  +0x0000@9  +0x0000@9  } | .TraceState
                                                                                                       
            SDK_MAGIC_PROPERTIES( "FxUsbDevice.m_ObjectFlagsByName.$", 0x2, true, 0x156c6d44836cb491 );                                                                  
            SDK_FIXED_SIZE( u0_m_object_flags_by_name_t, 0x2 );                                                                  
        };                                                                                             
                                                                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                             
        //                                                                                             
        _m000 uint16_t                                    m_type;                                        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .m_Type
        _m001 uint16_t                                    m_object_size;                                 //{ +0x000a    +0x000a    +0x000a    +0x000a    } | .m_ObjectSize
        _m002 int32_t                                     m_refcnt;                                      //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .m_Refcnt
        _m003 struct fx::driver_globals_t*                m_globals;                                     //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .m_Globals
        _m004 uint16_t                                    m_object_flags;                                //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .m_ObjectFlags
        _m014 u0_m_object_flags_by_name_t                 m_object_flags_by_name;                        //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .m_ObjectFlagsByName
        _m015 uint16_t                                    m_object_state;                                //{ +0x001a    +0x001a    +0x001a    +0x001a    } | .m_ObjectState
        _m016 nt::list_entry_t                            m_child_list_head;                             //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .m_ChildListHead
        _m017 class mx::lock_t                            m_spin_lock;                                   //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .m_SpinLock
        _m018 class fx::object_t*                         m_parent_object;                               //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .m_ParentObject
        _m019 nt::list_entry_t                            m_child_entry;                                 //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .m_ChildEntry
        _m020 struct nt::single_list_entry_t              m_dispose_single_entry;                        //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .m_DisposeSingleEntry
        _m021 class fx::device_base_t*                    m_device_base;                                 //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .m_DeviceBase
        _m022 class fx::device_t*                         m_device;                                      //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .m_Device
        _m023 class mx::lock_t                            m_np_lock;                                     //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .m_NPLock
        _m024 struct fx::transactioned_entry_t            m_transactioned_entry;                         //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .m_TransactionedEntry
        _m025 uint8_t                                     m_in_stack;                                    //{ +0x00a8    +0x00a8    +0x00a8    +0x00a8    } | .m_InStack
        _m026 uint8_t                                     m_added_to_device_list;                        //{ +0x00a9    +0x00a9    +0x00a9    +0x00a9    } | .m_AddedToDeviceList
        _m027 nt::list_entry_t                            m_sent_io_list_head;                           //{ +0x00b0    +0x00b0    +0x00b0    +0x00b0    } | .m_SentIoListHead
        _m028 nt::list_entry_t                            m_ignored_io_list_head;                        //{ +0x00c0    +0x00c0    +0x00c0    +0x00c0    } | .m_IgnoredIoListHead
        _m029 struct fx::cr_event_t                       m_sent_io_event;                               //{ +0x00d0    +0x00d0    +0x00d0    +0x00d0    } | .m_SentIoEvent
        _m030 struct fx::cr_event_t*                      m_dispose_event;                               //{ +0x00f0    +0x00f0    +0x00f0    +0x00f0    } | .m_DisposeEvent
        _m031 class fx::irp_queue_t                       m_pended_queue;                                //{ +0x00f8    +0x00f8    +0x00f8    +0x00f8    } | .m_PendedQueue
        _m032 class fx::driver_t*                         m_driver;                                      //{ +0x0120    +0x0120    +0x0120    +0x0120    } | .m_Driver
        _m033 struct nt::device_object_t*                 m_in_stack_device;                             //{ +0x0128    +0x0128    +0x0128    +0x0128    } | .m_InStackDevice
        _m034 struct nt::device_object_t*                 m_target_device;                               //{ +0x0130    +0x0130    +0x0130    +0x0130    } | .m_TargetDevice
        _m035 struct nt::device_object_t*                 m_target_pdo;                                  //{ +0x0138    +0x0138    +0x0138    +0x0138    } | .m_TargetPdo
        _m036 struct nt::file_object_t*                   m_target_file_object;                          //{ +0x0140    +0x0140    +0x0140    +0x0140    } | .m_TargetFileObject
        _m037 enum wdf::io_target_state_t                 m_state;                                       //{ +0x0148    +0x0148    +0x0148    +0x0148    } | .m_State
        _m038 int32_t                                     m_io_count;                                    //{ +0x014c    +0x014c    +0x014c    +0x014c    } | .m_IoCount
        _m039 char                                        m_target_stack_size;                           //{ +0x0150    +0x0150    +0x0150    +0x0150    } | .m_TargetStackSize
        _m040 uint8_t                                     m_target_io_type;                              //{ +0x0151    +0x0151    +0x0151    +0x0151    } | .m_TargetIoType
        _m041 uint8_t                                     m_waiting_for_sent_io;                         //{ +0x0152    +0x0152    +0x0152    +0x0152    } | .m_WaitingForSentIo
        _m042 uint8_t                                     m_removing;                                    //{ +0x0153    +0x0153    +0x0153    +0x0153    } | .m_Removing
        _m043 struct wdf::usbd_handle_t*                  m_usbd_handle;                                 //{ +0x0158    +0x0158    +0x0158    +0x0158    } | .m_USBDHandle
        _m044 void*                                       m_control_pipe;                                //{ +0x0160    +0x0160    +0x0160    +0x0160    } | .m_ControlPipe
        _m045 class fx::usb_interface_t**                 m_interfaces;                                  //{ +0x0168    +0x0168    +0x0168    +0x0168    } | .m_Interfaces
        _m046 void*                                       m_config_handle;                               //{ +0x0170    +0x0170    +0x0170    +0x0170    } | .m_ConfigHandle
        _m047 struct wdf::usb_device_descriptor_t         m_device_descriptor;                           //{ +0x0178    +0x0178    +0x0178    +0x0178    } | .m_DeviceDescriptor
        _m048 struct wdf::usb_configuration_descriptor_t* m_config_descriptor;                           //{ +0x0190    +0x0190    +0x0190    +0x0190    } | .m_ConfigDescriptor
        _m049 struct wdf::usbd_version_information_t      m_usbd_version_information;                    //{ +0x0198    +0x0198    +0x0198    +0x0198    } | .m_UsbdVersionInformation
        _m050 sdk::function<int32_t(void*, uint32_t*)>*   m_query_bus_time;                              //{ +0x01a0    +0x01a0    +0x01a0    +0x01a0    } | .m_QueryBusTime
        _m051 void*                                       m_bus_interface_context;                       //{ +0x01a8    +0x01a8    +0x01a8    +0x01a8    } | .m_BusInterfaceContext
        _m052 sdk::function<void(void*)>*                 m_bus_interface_dereference;                   //{ +0x01b0    +0x01b0    +0x01b0    +0x01b0    } | .m_BusInterfaceDereference
        _m053 class fx::wait_lock_internal_t              m_interface_iteration_lock;                    //{ +0x01b8    +0x01b8    +0x01b8    +0x01b8    } | .m_InterfaceIterationLock
        _m054 uint32_t                                    m_hcd_port_capabilities;                       //{ +0x01e0    +0x01e0    +0x01e0    +0x01e0    } | .m_HcdPortCapabilities
        _m055 uint32_t                                    m_traits;                                      //{ +0x01e4    +0x01e4    +0x01e4    +0x01e4    } | .m_Traits
        _m056 uint8_t                                     m_on_usbd;                                     //{ +0x01e8    +0x01e8    +0x01e8    +0x01e8    } | .m_OnUSBD
        _m057 uint8_t                                     m_num_interfaces;                              //{ +0x01e9    +0x01e9    +0x01e9    +0x01e9    } | .m_NumInterfaces
        _m058 uint8_t                                     m_mismatched_interfaces_in_config_descriptor;  //{ +0x01ea    +0x01ea    +0x01ea    +0x01ea    } | .m_MismatchedInterfacesInConfigDescriptor
        _m059 enum fx::urb_type_t                         m_urb_type;                                    //{ +0x01eb    +0x01eb    +0x01eb    +0x01eb    } | .m_UrbType
                                                                                                       
        // Windows 11                                                                                  
        //                                                                                             
        _m060 uint8_t                                     m_ssp_isoch_pipe_flags;                        //{ +0x01ec    } | .m_SspIsochPipeFlags
                                                                                                       
        SDK_MAGIC_PROPERTIES( "FxUsbDevice.$", 0x1f0, true, 0x64c636b819e560b7 );                                             
        SDK_FIXED_SIZE( usb_device_t, 0x1f0 );                                                         
    };                                                                                                 
};
#include "magic/usb_device_t.end.hpp"
SDK_VERIFY( struct fx::usb_device_t::u0_m_object_flags_by_name_t, 0x2 );
SDK_VERIFY( class fx::usb_device_t, 0x1f0 );
