#pragma once
#include <sdkgen/support_library.hpp>
#include "sim_class_t.hpp"
#include "device_type_t.hpp"
#include "list_header_t.hpp"
#include "voice_class_t.hpp"
#include "cellular_class_t.hpp"

#include "magic/device_caps_t.start.hpp"
namespace wwan
{
    // [struct _WWAN_DEVICE_CAPS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct device_caps_t                                            
    {                                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                                          
        _m00 enum wwan::device_type_t    wwan_device_type;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .WwanDeviceType
        _m01 enum wwan::cellular_class_t wwan_cellular_class;         //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .WwanCellularClass
        _m02 enum wwan::voice_class_t    wwan_voice_class;            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .WwanVoiceClass
        _m03 enum wwan::sim_class_t      wwan_sim_class;              //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .WwanSimClass
        _m04 uint32_t                    wwan_data_class;             //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .WwanDataClass
        _m05 sdk::array<wchar_t, 12>     custom_data_class;           //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .CustomDataClass
        _m06 uint32_t                    wwan_gsm_band_class;         //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .WwanGsmBandClass
        _m07 uint32_t                    wwan_cdma_band_class;        //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .WwanCdmaBandClass
        _m08 sdk::array<wchar_t, 20>     custom_band_class;           //{ +0x0034    +0x0034    +0x0034    +0x0034    } | .CustomBandClass
        _m09 uint32_t                    wwan_sms_caps;               //{ +0x005c    +0x005c    +0x005c    +0x005c    } | .WwanSmsCaps
        _m10 uint32_t                    wwan_control_caps;           //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .WwanControlCaps
        _m11 sdk::array<wchar_t, 18>     device_id;                   //{ +0x0064    +0x0064    +0x0064    +0x0064    } | .DeviceId
        _m12 sdk::array<wchar_t, 32>     manufacturer;                //{ +0x0088    +0x0088    +0x0088    +0x0088    } | .Manufacturer
        _m13 sdk::array<wchar_t, 32>     model;                       //{ +0x00c8    +0x00c8    +0x00c8    +0x00c8    } | .Model
        _m14 sdk::array<wchar_t, 32>     firmware_info;               //{ +0x0108    +0x0108    +0x0108    +0x0108    } | .FirmwareInfo
        _m15 uint32_t                    max_activated_contexts;      //{ +0x0148    +0x0148    +0x0148    +0x0148    } | .MaxActivatedContexts
        _m16 uint32_t                    wwan_auth_algo_caps;         //{ +0x014c    +0x014c    +0x014c    +0x014c    } | .WwanAuthAlgoCaps
        _m17 struct wwan::list_header_t  cellular_class_list_header;  //{ +0x0150    +0x0150    +0x0150    +0x0150    } | .CellularClassListHeader
                                                                    
        SDK_MAGIC_PROPERTIES( "_WWAN_DEVICE_CAPS.$", 0x158, true, 0xd55a4f5e261b59cc );                           
        SDK_FIXED_SIZE( device_caps_t, 0x158 );                           
    };                                                              
};
#include "magic/device_caps_t.end.hpp"
SDK_VERIFY( struct wwan::device_caps_t, 0x158 );
