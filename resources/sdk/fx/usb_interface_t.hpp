#pragma once
#include <sdkgen/support_library.hpp>
#include "../mx/lock_t.hpp"
#include "../nt/single_list_entry_t.hpp"

#include "magic/usb_interface_t.start.hpp"
namespace fx
{
    class device_t;
    class object_t;
    class usb_pipe_t;
    class usb_device_t;
    class device_base_t;
    struct driver_globals_t;
    struct usb_interface_setting_t;

    // [class FxUsbInterface]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class usb_interface_t                                                     
    {                                                                         
        struct u0_m_object_flags_by_name_t                                    
        {                                                                     
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                  
            //                                                                
            _m05 uint1_t passive_callbacks;                                     //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .PassiveCallbacks
            _m06 uint1_t no_delete_ddi;                                         //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .NoDeleteDDI
            _m07 uint1_t delete_called;                                         //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .DeleteCalled
            _m08 uint1_t committed;                                             //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .Committed
            _m09 uint1_t passive_dispose;                                       //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .PassiveDispose
            _m10 uint1_t force_dispose_thread;                                  //{ +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  } | .ForceDisposeThread
            _m11 uint1_t has_debug;                                             //{ +0x0000@7  +0x0000@7  +0x0000@7  +0x0000@7  } | .HasDebug
            _m12 uint1_t early_disposed_ext;                                    //{ +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  } | .EarlyDisposedExt
            _m13 uint1_t trace_state;                                           //{ +0x0000@9  +0x0000@9  +0x0000@9  +0x0000@9  } | .TraceState
                                                                              
            SDK_MAGIC_PROPERTIES( "FxUsbInterface.m_ObjectFlagsByName.$", 0x2, true, 0x3d2d6459bd0c9f03 );                                                  
            SDK_FIXED_SIZE( u0_m_object_flags_by_name_t, 0x2 );                                                  
        };                                                                    
                                                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                                                    
        _m00 uint16_t                            m_type;                        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .m_Type
        _m01 uint16_t                            m_object_size;                 //{ +0x000a    +0x000a    +0x000a    +0x000a    } | .m_ObjectSize
        _m02 int32_t                             m_refcnt;                      //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .m_Refcnt
        _m03 struct fx::driver_globals_t*        m_globals;                     //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .m_Globals
        _m04 uint16_t                            m_object_flags;                //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .m_ObjectFlags
        _m14 u0_m_object_flags_by_name_t         m_object_flags_by_name;        //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .m_ObjectFlagsByName
        _m15 uint16_t                            m_object_state;                //{ +0x001a    +0x001a    +0x001a    +0x001a    } | .m_ObjectState
        _m16 nt::list_entry_t                    m_child_list_head;             //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .m_ChildListHead
        _m17 class mx::lock_t                    m_spin_lock;                   //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .m_SpinLock
        _m18 class fx::object_t*                 m_parent_object;               //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .m_ParentObject
        _m19 nt::list_entry_t                    m_child_entry;                 //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .m_ChildEntry
        _m20 struct nt::single_list_entry_t      m_dispose_single_entry;        //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .m_DisposeSingleEntry
        _m21 class fx::device_base_t*            m_device_base;                 //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .m_DeviceBase
        _m22 class fx::device_t*                 m_device;                      //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .m_Device
        _m23 class mx::lock_t                    m_np_lock;                     //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .m_NPLock
        _m24 class fx::usb_device_t*             m_usb_device;                  //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .m_UsbDevice
        _m25 class fx::usb_pipe_t**              m_configured_pipes;            //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .m_ConfiguredPipes
        _m26 struct fx::usb_interface_setting_t* m_settings;                    //{ +0x0088    +0x0088    +0x0088    +0x0088    } | .m_Settings
        _m27 uint8_t                             m_num_settings;                //{ +0x0090    +0x0090    +0x0090    +0x0090    } | .m_NumSettings
        _m28 uint8_t                             m_number_of_configured_pipes;  //{ +0x0091    +0x0091    +0x0091    +0x0091    } | .m_NumberOfConfiguredPipes
        _m29 uint8_t                             m_interface_number;            //{ +0x0092    +0x0092    +0x0092    +0x0092    } | .m_InterfaceNumber
        _m30 uint8_t                             m_cur_alternate_setting;       //{ +0x0093    +0x0093    +0x0093    +0x0093    } | .m_CurAlternateSetting
        _m31 uint8_t                             m_class;                       //{ +0x0094    +0x0094    +0x0094    +0x0094    } | .m_Class
        _m32 uint8_t                             m_sub_class;                   //{ +0x0095    +0x0095    +0x0095    +0x0095    } | .m_SubClass
        _m33 uint8_t                             m_protocol;                    //{ +0x0096    +0x0096    +0x0096    +0x0096    } | .m_Protocol
                                                                              
        SDK_MAGIC_PROPERTIES( "FxUsbInterface.$", 0x98, true, 0x3b8a5e0a2194125a );                             
        SDK_FIXED_SIZE( usb_interface_t, 0x98 );                              
    };                                                                        
};
#include "magic/usb_interface_t.end.hpp"
SDK_VERIFY( struct fx::usb_interface_t::u0_m_object_flags_by_name_t, 0x2 );
SDK_VERIFY( class fx::usb_interface_t, 0x98 );
