#pragma once
#include <sdkgen/support_library.hpp>
#include "pin_desc_t.hpp"

#include "magic/pin_list_t.start.hpp"
namespace wwan
{
    // [struct _WWAN_PIN_LIST]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pin_list_t                                                   
    {                                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                   
        //                                                              
        _m00 struct wwan::pin_desc_t wwan_pin_desc_pin1;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .WwanPinDescPin1
        _m01 struct wwan::pin_desc_t wwan_pin_desc_pin2;                  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .WwanPinDescPin2
        _m02 struct wwan::pin_desc_t wwan_pin_desc_device_sim_pin;        //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .WwanPinDescDeviceSimPin
        _m03 struct wwan::pin_desc_t wwan_pin_desc_device_first_sim_pin;  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .WwanPinDescDeviceFirstSimPin
        _m04 struct wwan::pin_desc_t wwan_pin_desc_network_pin;           //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .WwanPinDescNetworkPin
        _m05 struct wwan::pin_desc_t wwan_pin_desc_network_subset_pin;    //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .WwanPinDescNetworkSubsetPin
        _m06 struct wwan::pin_desc_t wwan_pin_desc_svc_provider_pin;      //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .WwanPinDescSvcProviderPin
        _m07 struct wwan::pin_desc_t wwan_pin_desc_corporate_pin;         //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .WwanPinDescCorporatePin
        _m08 struct wwan::pin_desc_t wwan_pin_desc_subsidy_lock;          //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .WwanPinDescSubsidyLock
        _m09 struct wwan::pin_desc_t wwan_pin_desc_custom;                //{ +0x0090    +0x0090    +0x0090    +0x0090    } | .WwanPinDescCustom
                                                                        
        SDK_MAGIC_PROPERTIES( "_WWAN_PIN_LIST.$", 0xa0, true, 0xfdb3b224404fb46b );                                   
        SDK_FIXED_SIZE( pin_list_t, 0xa0 );                                   
    };                                                                  
};
#include "magic/pin_list_t.end.hpp"
SDK_VERIFY( struct wwan::pin_list_t, 0xa0 );
