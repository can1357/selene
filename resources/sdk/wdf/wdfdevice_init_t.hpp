#pragma once
#include <sdkgen/support_library.hpp>
#include "fdo_init_t.hpp"
#include "pdo_init_t.hpp"
#include "../sec/init_t.hpp"
#include "control_init_t.hpp"
#include "device_io_type_t.hpp"
#include "file_object_init_t.hpp"
#include "../pnp/power_init_t.hpp"
#include "object_attributes_t.hpp"
#include "../fx/device_init_type_t.hpp"
#include "release_hardware_order_on_failure_t.hpp"

namespace fx { class device_t;               }
namespace fx { class driver_t;               }
namespace fx { class string_t;               }
namespace fx { class user_object_t;          }
namespace fx { struct driver_globals_t;      }
namespace fx { struct irp_preprocess_info_t; }

#include "magic/wdfdevice_init_t.start.hpp"
namespace wdf
{
    struct wdfdevice_t;
    struct wdfrequest_t;

    // [struct WDFDEVICE_INIT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wdfdevice_init_t                                                                   
    {                                                                                         
        using pfn_wdf_io_in_caller_context_t = sdk::function<void(struct wdf::wdfdevice_t*, struct wdf::wdfrequest_t*)>*;                                  
                                                                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                  
        //                                                                                    
        _m000 struct fx::driver_globals_t*                  driver_globals;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .DriverGlobals
        _m001 class fx::driver_t*                           driver;                             //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Driver
        _m002 sdk::variant<class fx::device_t*, void*>      created_device;                     //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .CreatedDevice
        _m003 uint8_t                                       created_on_stack;                   //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .CreatedOnStack
        _m004 uint8_t                                       exclusive;                          //{ +0x0019    +0x0019    +0x0019    +0x0019    } | .Exclusive
        _m005 uint8_t                                       power_pageable;                     //{ +0x001a    +0x001a    +0x001a    +0x001a    } | .PowerPageable
        _m006 uint8_t                                       inrush;                             //{ +0x001b    +0x001b    +0x001b    +0x001b    } | .Inrush
        _m007 uint8_t                                       requires_self_io_target;            //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .RequiresSelfIoTarget
        _m008 uint32_t                                      remove_lock_option_flags;           //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .RemoveLockOptionFlags
        _m009 enum fx::device_init_type_t                   init_type;                          //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .InitType
        _m010 enum wdf::device_io_type_t                    read_write_io_type;                 //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .ReadWriteIoType
        _m011 uint32_t                                      device_type;                        //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .DeviceType
        _m012 class fx::string_t*                           device_name;                        //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .DeviceName
        _m013 uint32_t                                      characteristics;                    //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .Characteristics
        _m014 struct wdf::file_object_init_t                file_object;                        //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .FileObject
        _m015 struct sec::init_t                            security;                           //{ +0x00b0    +0x00b0    +0x00b0    +0x00b0    } | .Security
        _m016 struct wdf::object_attributes_t               request_attributes;                 //{ +0x00d0    +0x00d0    +0x00d0    +0x00d0    } | .RequestAttributes
        _m017 struct fx::irp_preprocess_info_t*             preprocess_info;                    //{ +0x0108    +0x0108    +0x0108    +0x0108    } | .PreprocessInfo
        _m018 pfn_wdf_io_in_caller_context_t                io_in_caller_context_callback;      //{ +0x0110    +0x0110    +0x0110    +0x0110    } | .IoInCallerContextCallback
        _m019 enum wdf::release_hardware_order_on_failure_t release_hardware_order_on_failure;  //{ +0x0118    +0x0118    +0x0118    +0x0118    } | .ReleaseHardwareOrderOnFailure
        _m020 struct pnp::power_init_t                      pnp_power;                          //{ +0x0120    +0x0120    +0x0120    +0x0120    } | .PnpPower
        _m021 struct wdf::fdo_init_t                        fdo;                                //{ +0x0210    +0x0210    +0x0210    +0x0210    } | .Fdo
        _m022 struct wdf::pdo_init_t                        pdo;                                //{ +0x02d8    +0x02d8    +0x02d8    +0x02d8    } | .Pdo
        _m023 struct wdf::control_init_t                    control;                            //{ +0x0388    +0x0388    +0x0388    +0x0388    } | .Control
        _m024 nt::list_entry_t                              cx_device_init_list_head;           //{ +0x0398    +0x0398    +0x0398    +0x0398    } | .CxDeviceInitListHead
                                                                                              
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                     
        //                                                                                    
        _m025 class fx::user_object_t*                      cx_context_object;                  //{ +0x03a8    +0x03a8    +0x03a8    } | .CxContextObject
                                                                                              
        SDK_MAGIC_PROPERTIES( "WDFDEVICE_INIT.$", 0x3b0, true, 0xbac0f78813bb464b );                                  
        SDK_DYNAMIC_SIZE( wdfdevice_init_t );                                                 
    };                                                                                        
};
#include "magic/wdfdevice_init_t.end.hpp"
