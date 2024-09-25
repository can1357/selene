#pragma once
#include <sdkgen/support_library.hpp>
#include "child_list_description_state_t.hpp"
#include "child_list_modification_state_t.hpp"
#include "child_list_reported_missing_callback_state_t.hpp"

namespace wdf { struct child_address_description_header_t;        }
namespace wdf { struct child_identification_description_header_t; }

#include "magic/device_description_entry_t.start.hpp"
namespace fx
{
    class device_t;
    class child_list_t;

    // [struct FxDeviceDescriptionEntry]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct device_description_entry_t                                                          
    {                                                                                          
        using pwdf_child_identification_description_header_t = struct wdf::child_identification_description_header_t*;                                  
        using m_reported_missing_callback_state_t =            enum fx::child_list_reported_missing_callback_state_t;                                  
                                                                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                  
        //                                                                                     
        _m00 nt::list_entry_t                                m_description_link;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .m_DescriptionLink
        _m01 enum fx::child_list_description_state_t         m_description_state;                //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .m_DescriptionState
        _m02 pwdf_child_identification_description_header_t  m_identification_description;       //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .m_IdentificationDescription
        _m03 struct wdf::child_address_description_header_t* m_address_description;              //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .m_AddressDescription
        _m04 nt::list_entry_t                                m_modification_link;                //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .m_ModificationLink
        _m05 enum fx::child_list_modification_state_t        m_modification_state;               //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .m_ModificationState
        _m06 class fx::device_t*                             m_pdo;                              //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .m_Pdo
        _m07 class fx::child_list_t*                         m_device_list;                      //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .m_DeviceList
        _m08 uint8_t                                         m_found_in_last_scan;               //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .m_FoundInLastScan
        _m09 uint8_t                                         m_processing_surprise_remove;       //{ +0x0051    +0x0051    +0x0051    +0x0051    } | .m_ProcessingSurpriseRemove
        _m10 uint8_t                                         m_pending_delete_on_scan_end;       //{ +0x0052    +0x0052    +0x0052    +0x0052    } | .m_PendingDeleteOnScanEnd
        _m11 m_reported_missing_callback_state_t             m_reported_missing_callback_state;  //{ +0x0053    +0x0053    +0x0053    +0x0053    } | .m_ReportedMissingCallbackState
                                                                                               
        SDK_MAGIC_PROPERTIES( "FxDeviceDescriptionEntry.$", 0x58, true, 0x8ee0c1e6e46ddee0 );                                  
        SDK_FIXED_SIZE( device_description_entry_t, 0x58 );                                    
    };                                                                                         
};
#include "magic/device_description_entry_t.end.hpp"
SDK_VERIFY( struct fx::device_description_entry_t, 0x58 );
