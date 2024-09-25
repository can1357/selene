#pragma once
#include <sdkgen/support_library.hpp>
#include "tree_root_t.hpp"
#include "flt_object_t.hpp"
#include "callback_ctrl_t.hpp"
#include "../ex/push_lock_t.hpp"
#include "../nt/eresource_t.hpp"
#include "flt_volume_flags_t.hpp"
#include "context_list_ctrl_t.hpp"
#include "flt_filesystem_type_t.hpp"
#include "flt_resource_list_head_t.hpp"
#include "name_cache_volume_ctrl_t.hpp"
#include "../ex/push_lock_auto_expand_t.hpp"

namespace nt { struct device_object_t; }

#include "magic/flt_volume_t.start.hpp"
namespace fltmgr
{
    struct flt_volume_t;
    struct fltp_frame_t;

    // [struct _FLT_VOLUME]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct flt_volume_t                                                           
    {                                                                             
        using context_lock_t =             sdk::variant<struct ex::push_lock_t, struct ex::push_lock_auto_expand_t>;                            
        using tx_vol_context_list_lock_t = sdk::variant<struct ex::push_lock_t, struct ex::push_lock_auto_expand_t>;                            
                                                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                                                        
        _m000 struct fltmgr::flt_object_t             base;                         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Base
        _m001 enum fltmgr::flt_volume_flags_t         flags;                        //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .Flags
        _m002 enum fltmgr::flt_filesystem_type_t      file_system_type;             //{ +0x0034    +0x0034    +0x0034    +0x0034    } | .FileSystemType
        _m003 struct nt::device_object_t*             device_object;                //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .DeviceObject
        _m004 struct nt::device_object_t*             disk_device_object;           //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .DiskDeviceObject
        _m005 struct fltmgr::flt_volume_t*            frame_zero_volume;            //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .FrameZeroVolume
        _m006 struct fltmgr::flt_volume_t*            volume_in_next_frame;         //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .VolumeInNextFrame
        _m007 struct fltmgr::fltp_frame_t*            frame;                        //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .Frame
        _m008 nt::unicode_view                        device_name;                  //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .DeviceName
        _m009 nt::unicode_view                        guid_name;                    //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .GuidName
        _m010 nt::unicode_view                        cdo_device_name;              //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .CDODeviceName
        _m011 nt::unicode_view                        cdo_driver_name;              //{ +0x0090    +0x0090    +0x0090    +0x0090    } | .CDODriverName
        _m012 struct fltmgr::flt_resource_list_head_t instance_list;                //{ +0x00a0    +0x00a0    +0x00a0    +0x00a0    } | .InstanceList
        _m013 struct fltmgr::callback_ctrl_t          callbacks;                    //{ +0x0120    +0x0120    +0x0120    +0x0120    } | .Callbacks
        _m014 context_lock_t                          context_lock;                 //{ +0x0508    +0x0508    +0x0508    +0x0508    } | .ContextLock
        _m015 struct fltmgr::context_list_ctrl_t      volume_contexts;              //{ +0x0510    +0x0510    +0x0518    +0x0510    } | .VolumeContexts
        _m016 struct fltmgr::flt_resource_list_head_t stream_list_ctrls;            //{ +0x0518    +0x0518    +0x0520    +0x0518    } | .StreamListCtrls
        _m017 struct fltmgr::flt_resource_list_head_t file_list_ctrls;              //{ +0x0598    +0x0598    +0x05a0    +0x0598    } | .FileListCtrls
        _m018 struct fltmgr::name_cache_volume_ctrl_t name_cache_ctrl;              //{ +0x0618    +0x0618    +0x0620    +0x0618    } | .NameCacheCtrl
        _m019 struct nt::eresource_t                  mount_notify_lock;            //{ +0x06d0    +0x06d0    +0x06d8    +0x06d0    } | .MountNotifyLock
        _m020 int32_t                                 targeted_open_active_count;   //{ +0x0738    +0x0738    +0x0740    +0x0738    } | .TargetedOpenActiveCount
        _m021 tx_vol_context_list_lock_t              tx_vol_context_list_lock;     //{ +0x0740    +0x0740    +0x0748    +0x0740    } | .TxVolContextListLock
        _m022 struct fltmgr::tree_root_t              tx_vol_contexts;              //{ +0x0748    +0x0748    +0x0758    +0x0748    } | .TxVolContexts
        _m023 int32_t                                 supported_features;           //{ +0x0750    +0x0750    +0x0760    +0x0750    } | .SupportedFeatures
                                                                                  
        // Windows 11                                                             
        //                                                                        
        _m024 uint16_t                                bypass_failing_flt_name_len;  //{ +0x0764    } | .BypassFailingFltNameLen
        _m025 sdk::array<wchar_t, 32>                 bypass_failing_flt_name;      //{ +0x0766    } | .BypassFailingFltName
                                                                                  
        SDK_MAGIC_PROPERTIES( "_FLT_VOLUME.$", 0x758, true, 0xacd19017e818ab8c );                            
        SDK_DYNAMIC_SIZE( flt_volume_t );                                         
    };                                                                            
};
#include "magic/flt_volume_t.end.hpp"
